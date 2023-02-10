from setuptools import setup

package_name = 'puber_pkg'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='meng',
    maintainer_email='meng@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'outmatrix_puber = puber_pkg.outmatrix_puber:main',
            'uv_puber = puber_pkg.uv_puber:main'
        ],
    },
)
