PHP_ARG_ENABLE(arse, whether to enable arse support,
[  --enable-arse           Enable arse support])

if test "$PHP_ARSE" != "no"; then
  PHP_NEW_EXTENSION(arse, arse.c, $ext_shared)
fi
