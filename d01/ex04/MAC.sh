#!/bin/sh
ifconfig | grep -iE '[0-9A-F]{2}(:[0-9A-F]{2}){5}'
