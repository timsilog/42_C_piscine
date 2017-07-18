#!/bin/sh
echo "$(stat -f%c bomb.txt) - 1" | bc
