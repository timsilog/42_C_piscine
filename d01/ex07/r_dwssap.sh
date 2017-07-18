#!/bin/sh
cat /etc/passwd | grep -v '^#' | sed -n -e n -e p | cut -f1 -d ':' | rev | sort -dr | awk "NR>=$FT_LINE1 && NR<=$FT_LINE2 || NR<=$FT_LINE1 && NR>=$FT_LINE2" | tr '\n' ',' | sed 's/,/, /g' | sed 's/, $/./'
