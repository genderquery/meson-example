tests = [
  ['basic', 'basic.c'],
  ['truncate_long_name', 'truncate_long_name.c'],
]

foreach test: tests
  exe = executable(
    test[0],
    test[1],
    include_directories : include,
    link_with : libhello,
  )

  test(test[0], exe)
endforeach
