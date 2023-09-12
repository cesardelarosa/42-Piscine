#!/bin/bash
ifconfig | awk '/ether / {print $0}' | sed 's/.*\ether //' | tr -d ' '
