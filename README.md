# meson-example

A simple example using the [Meson build system](https://mesonbuild.com)
with a library, executable, and unit tests.

## Commands

Setup:

```
meson builddir
```

Compile:

```
meson compile -C builddir
```

Run tests:

```
meson test -C builddir -v
```

Run binary:

```
./builddir/hello
```

## Project Structure

```
bin                         # hello binary
├── hello.c
└── meson.build
builddir                    # build output
include                     # header files
├── hello.h
└── meson.build
meson.build                 # top-level project definition
src                         # library
├── hello.c
└── meson.build
tests                       # unit tests
├── basic.c
├── meson.build 
└── truncate_long_name.c
```
