#!/bin/sh
var1=$(echo "$FT_NBR1" | sed -e "s/\'/0/g" -e 's/\\/1/g' -e "s/\"/2/g" -e "s/\?/3/g" -e "s/\!/4/g") 
var2=$(echo "$FT_NBR2" | sed -e 's/m/0/g' -e 's/r/1/g' -e 's/d/2/g' -e 's/o/3/g' -e 's/c/4/g') 
var3=$(echo $(echo "ibase=5;obase=A;${var1}" | bc) + $(echo "ibase=5;obase=A;${var2}" | bc) | bc)
echo "ibase=A;obase=D;${var3}" | bc | sed -e 's/0/g/g' -e 's/1/t/g' -e 's/2/a/g' -e 's/3/i/g' -e 's/4/o/g' -e 's/5/ /g' -e 's/6/l/g' -e 's/7/u/g' -e 's/8/S/g' -e 's/9/n/g' -e 's/A/e/g' -e 's/B/m/g' -e 's/C/f/g'
