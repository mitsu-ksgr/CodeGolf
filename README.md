CodeGolf
========

[![image](http://i.creativecommons.org/p/zero/1.0/88x31.png)](http://creativecommons.org/publicdomain/zero/1.0/)

Environment
-----------
* Tested on Mac OS X (10.9.4 / 64bit)
* gcc -v
    * Configured with: --prefix=/Applications/Xcode.app/Contents/Developer/usr --with-gxx-include-dir=/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.9.sdk/usr/include/c++/4.2.1
    * Apple LLVM version 5.1 (clang-503.0.40) (based on LLVM 3.4svn)
    * Target: x86_64-apple-darwin13.3.0
    * Thread model: posix

Compile
-------
    $ gcc -std=c99 file.c -o file


Code Size
---------
| Title                         | File Name             | File Size |
|-------------------------------|-----------------------|-----------|
| Fizz Buzz                     | c/fizzbuzz.c          | 75 bytes  |
| Sieve of Eratosthenes         | c/eratosthenes.c      | 92 bytes  |
| Display Fibonacci Numbers     | c/fibonacci.c         | 51 bytes  |
| Primality test                | c/is_prime.c          | 83 bytes  |


