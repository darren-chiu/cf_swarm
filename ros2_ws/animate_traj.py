import pandas as pd
import matplotlib.pyplot as plt
from matplotlib.animation import FuncAnimation
from mpl_toolkits.mplot3d import Axes3D
import numpy as np
from scipy.spatial.transform import Rotation as R

# Load CSV data into a pandas DataFrame
data = pd.read_csv('path_random.csv')

# Extracting individual columns for trajectory
x = np.array(data['x'])
y = np.array(data['y'])
z = np.array(data['z'])

# Extracting columns for orientation (quaternions)
quat_columns = ['rx', 'ry', 'rz', 'rw']
quaternions = data[quat_columns].to_numpy()

# Create a figure and a 3D axis
fig = plt.figure()
ax = fig.add_subplot(111, projection='3d')

# Set up empty plot elements for animation
trajectory, = ax.plot([], [], [], marker='o', label='Trajectory')
red_arrow = ax.quiver([], [], [], [], [], [], length=0.1, color='red', label='Orientation')


# Function to update the plot for each frame in the animation
def update(frame):
    ax.cla()  # Clear the previous plot

    # Plot current position in the trajectory
    ax.plot(x[:frame+1], y[:frame+1], z[:frame+1], marker='o', label='Trajectory', markersize=0.5)

    # Calculate orientation axes for the current frame
    quat = quaternions[frame]
    rot = R.from_quat(quat)
    axes = np.eye(3)
    rotated_axes = rot.apply(axes)
    origin = [x[frame], y[frame], z[frame]]

    # Update orientation axes for the current frame
    for i in range(3):
        ax.quiver(origin[0], origin[1], origin[2],
                  rotated_axes[i, 0], rotated_axes[i, 1], rotated_axes[i, 2],
                  length=0.1, color=['red', 'green', 'blue'][i])

    # Update red arrow (X-axis in local coordinate system)
    red_arrow_direction = rotated_axes[0]  # Red arrow direction (X-axis)
    red_arrow.set_segments([[origin, origin + red_arrow_direction]])

    ax.set_ylim(-0.5,0.5)
    ax.set_xlim(-0.5,0.5)
    ax.set_zlim(0,1)

    # Set labels and title
    ax.set_xlabel('X-axis')
    ax.set_ylabel('Y-axis')
    ax.set_zlabel('Z-axis')
    ax.set_title('Trajectory and Red Arrow from Quaternion Axis')

    # Set initial view angle facing the red arrow
    # ax.view_init(elev=30, azim=90)  # Adjust the elevation and azimuth angles as needed
    ax.view_init(elev=15, azim=45)

    # Calculate and update Euler angles from quaternion
    euler_angles = rot.as_euler('xyz', degrees=True)    
    # Display text annotationss

    ax.text2D(0.05, 0.95, f'X: {x[frame]:.2f}', transform=ax.transAxes)
    ax.text2D(0.05, 0.90, f'Y: {y[frame]:.2f}', transform=ax.transAxes)
    ax.text2D(0.05, 0.85, f'Z: {z[frame]:.2f}', transform=ax.transAxes)
    ax.text2D(0.05, 0.80, f'Euler Angles (XYZ): {euler_angles[0]:.2f}, {euler_angles[1]:.2f}, {euler_angles[2]:.2f}', transform=ax.transAxes)
# Create animation
num_frames = len(x)
ani = FuncAnimation(fig, update, frames=num_frames, interval=100, blit=False)

# Save the animation as a GIF
ani.save('CF Traj Replay.gif', writer='pillow')

# Show plot (optional)
plt.show()
