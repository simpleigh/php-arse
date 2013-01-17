--TEST--
Check arse works with a parameter
--SKIPIF--
<?php if (!extension_loaded("arse")) print "skip"; ?>
--FILE--
<?php
arse(3);
?>
--EXPECT--
You're an arse!
You're an arse!
You're an arse!
