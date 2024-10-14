#!/bin/bash

#!/bin/bash
session="cf_session"

# Start tmux session
tmux new-session -d -s ${session}

# Create window 1
tmux new-window -t ${session} -n 'Window 1'
# tmux split-window -h
tmux split-window -v

#Source ROS2 Files
tmux send-keys -t ${session}.0 'source /opt/ros/iron/setup.bash' C-m
tmux send-keys -t ${session}.1 'source /opt/ros/iron/setup.bash' C-m
# tmux send-keys -t ${session}.2 'source /opt/ros/iron/setup.bash' C-m

#Source Local files
tmux send-keys -t ${session}.0 'source ros2_ws/install/local_setup.bash' C-m
tmux send-keys -t ${session}.1 'source ros2_ws/install/local_setup.bash' C-m
# tmux send-keys -t ${session}.2 'source ros2_ws/install/local_setup.bash' C-m

# Attach to the tmux session
tmux attach-session -t ${session}

