from setuptools import find_packages, setup

package_name = "pkg_rb10_apple"

setup(
    name=package_name,
    version="0.0.0",
    packages=find_packages(exclude=["test"]),
    data_files=[
        ("share/ament_index/resource_index/packages", ["resource/" + package_name]),
        ("share/" + package_name, ["package.xml"]),
    ],
    install_requires=["setuptools", "multipledispatch"],
    zip_safe=True,
    maintainer="orientpine",
    maintainer_email="orientpine@gmail.com",
    description="TODO: Package description",
    license="TODO: License declaration",
    tests_require=["pytest"],
    entry_points={
        "console_scripts": [
            "robot_mode_control_client = pkg_rb10_apple.robot_control.robot_mode_control_client:main",
            "robot_mode_control_server= pkg_rb10_apple.robot_control.robot_mode_control_server:main",
            "robot_tcp_control_server= pkg_rb10_apple.robot_control.robot_tcp_control_server:main",
            "robot_connect_control_server= pkg_rb10_apple.robot_control.robot_connect_control_server:main",
            "robot_info_publisher= pkg_rb10_apple.robot_control.robot_info_publisher:main",
        ],
    },
)
