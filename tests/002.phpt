--TEST--
Check arse works with no parameters
--SKIPIF--
<?php if (!extension_loaded("arse")) print "skip"; ?>
--FILE--
<?php
arse();
?>
--EXPECT--
You're an arse!
