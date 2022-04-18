project('hello', 'c',
  version : '0.1',
  default_options : ['warning_level=3'])

include = include_directories('include')

subdir('include')
subdir('src')
subdir('bin')
subdir('tests')

pkg = import('pkgconfig')
pkg.generate(libhello)