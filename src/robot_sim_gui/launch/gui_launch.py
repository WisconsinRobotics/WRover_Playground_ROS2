import os

from ament_index_python.packages import get_package_share_directory

from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration, TextSubstitution

from launch_ros.actions import Node

def generate_launch_description():
    resource_path = os.path.join(get_package_share_directory('robot_sim_gui'), 'images')

    resource_path_arg = DeclareLaunchArgument(
        'resource_path', default_value=TextSubstitution(text=resource_path)
    )

    return LaunchDescription([
        resource_path_arg,
        Node(
            package='robot_sim_gui',
            executable='gui',
            name='robot_sim_gui',
            parameters=[{
                'resource_path': LaunchConfiguration('resource_path')
            }]
        )
    ])
