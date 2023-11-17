import pandas as pd
import matplotlib.pyplot as plt
from mpl_toolkits.mplot3d import Axes3D
import numpy as np
from scipy.spatial.transform import Rotation as R

# Load CSV data into a pandas DataFrame
data = pd.read_csv('path_roll.csv')

# Extracting individual columns for trajectory
x = np.array(data['x'])
y = np.array(data['y'])
z = np.array(data['z'])

# Extracting columns for orientation (quaternions)
quat_columns = ['rx', 'ry', 'rz', 'rw']
quaternions = data[quat_columns].to_numpy()

# Create a 3D figure
fig = plt.figure()
ax = fig.add_subplot(111, projection='3d')

# Plotting the trajectory
ax.plot(x, y, z, marker='o', label='Trajectory')

# Plotting orientation using three axes
for i in range(len(quaternions)):
    quat = quaternions[i]
    rot = R.from_quat(quat)
    axes = np.eye(3)  # X, Y, Z axes in a 3x3 matrix
    rotated_axes = rot.apply(axes)
    origin = [x[i], y[i], z[i]]

    for j, color in enumerate(['red', 'green', 'blue']):
        ax.quiver(origin[0], origin[1], origin[2],
                  rotated_axes[j, 0], rotated_axes[j, 1], rotated_axes[j, 2],
                  length=0.1, color=color, arrow_length_ratio=0.3, label='Orientation' if i == 0 else '')

# Labeling start and end points of the trajectory
ax.text(x[0], y[0], z[0], 'Start', color='green')
ax.text(x[-1], y[-1], z[-1], 'End', color='blue')

# Set labels
ax.set_xlabel('X-axis')
ax.set_ylabel('Y-axis')
ax.set_zlabel('Z-axis')
ax.set_title('Trajectory Visualization with Orientation Axes')

# Show legend
ax.legend()

# Show plot
plt.show()

