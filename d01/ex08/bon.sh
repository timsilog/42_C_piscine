#!/bin/sh
ldapsearch -Q -LLL "cn=*bon*" cn | grep "cn" | wc -l | sed 's/^[ t\]*//g'
