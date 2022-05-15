from pathlib import Path

from pybind11.setup_helpers import Pybind11Extension, build_ext
from setuptools import setup

module_name = Pybind11Extension('module_name', ['Module.cpp'], include_dirs=[], extra_compile_args=['-O3'])

setup(
    name='module_name',
    version=0.1,
    author='Author name',
    author_email='email@email.com',
    description='Description',
    ext_modules=[module_name],
    cmdclass={"build_ext": build_ext},
)