import os

from ament_index_python.packages import get_package_share_directory

from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration, TextSubstitution

from launch_ros.actions import Node


def generate_launch_description():
    resource_path = os.path.join(
        get_package_share_directory('robot_sim_gui'), 'images'
    )

    resource_path_arg = DeclareLaunchArgument(
        'resource_path', default_value=TextSubstitution(text=resource_path),
        description='Path to image files used by the GUI'
    )
    window_height_arg = DeclareLaunchArgument(
        'height',
        default_value=TextSubstitution(text='0'),
        description='Set height of the GUI window, 0 for full height'
    )
    window_width_arg = DeclareLaunchArgument(
        'width', default_value=TextSubstitution(text='0'),
        description='Set width of the GUI window, 0 for full height'
    )

    return LaunchDescription([
        resource_path_arg,
        window_height_arg,
        window_width_arg,
        Node(
            package='robot_sim_gui',
            executable='gui',
            name='robot_sim_gui',
            arguments=[
                '--resource-path',
                LaunchConfiguration('resource_path'),
                '--height',
                LaunchConfiguration('height'),
                '--width',
                LaunchConfiguration('width')
            ]
            # parameters=[{
            #     'resource_path': LaunchConfiguration('resource_path')
            # }]
        )
    ])
