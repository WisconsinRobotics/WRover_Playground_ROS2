from setuptools import find_packages
from setuptools import setup

setup(
    name='custom_msgs_srvs',
    version='0.0.0',
    packages=find_packages(
        include=('custom_msgs_srvs', 'custom_msgs_srvs.*')),
)
