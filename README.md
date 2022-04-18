# meson-example
A simple example using the [Meson build system](https://mesonbuild.com)
with a library, executable, and unit tests.

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