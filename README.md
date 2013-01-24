PHP Arse
========

A simple PHP extension to annoy your coworkers.

Installation
------------

You can use the `phpize` facility to install the extension (http://php.net/manual/en/install.pecl.phpize.php).

    phpize
    ./configure
    make
    sudo make install

This will create a shared library and install it to the PHP extensions directory. To load the extension within PHP add the following line to `php.ini`:

    extension=arse.so

Alternatively, on Debian systems, you might prefer to create a separate configuration file within `/etc/php5/conf.d`.

Functionality
-------------

The extension creates a function `arse()` within the PHP global namespace. This echoes the text "You're an arse!":

    $ php -r 'arse();'
    You're an arse!

Passing an integer parameter to the function allows you to print more statements:

    $ php -r 'arse(3);'
    You're an arse!
    You're an arse!
    You're an arse!

Passing a non-integer parameter raises a PHP warning. Passing an integer less than zero raises a fatal error.

Usage
-----

To deploy the extension on a similar system is easy: simply drop the extension and `php.ini` directive onto the target machine (you will need root access).
After a suitable interval (to avoid suspicion) commit a file including the new function, and watch as your colleague discovers what you really think of them.
