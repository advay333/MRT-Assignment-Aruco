colcon build --packages-select aruco_srvcli
source install/setup.bash
ros2 run aruco_srvcli $1
