from setuptools import find_packages
from setuptools import setup

setup(
    name='interface_rb10_apple',
    version='0.0.0',
    packages=find_packages(
        include=('interface_rb10_apple', 'interface_rb10_apple.*')),
)
