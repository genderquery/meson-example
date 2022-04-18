# Initialize the project with a name and the language being used
project('hello', 'c',
  version : '0.1',
  default_options : ['warning_level=3'])

# Project headers. This object will be available to the meson.build
# files in the subdirs below and should be passed to the
# `include_directories` arguments of executables and libraries.
include = include_directories('include')

# Execute meson.build in each of the following sub directories. The
# order is important because the executable in `bin` depends on the
# library in `src` being build first.
subdir('include')
subdir('src')
subdir('bin')
subdir('tests')

# Generate files for pkg-config
pkg = import('pkgconfig')
pkg.generate(libhello)