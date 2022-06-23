#!/bin/bash

set -e # Exit if any commands fail
set -u # Warn about uninitialized variables

TMP=$(mktemp)
BASEDIR=$(dirname "$0")

## Update Downtime table in MySQL
/usr/bin/python "${BASEDIR}"/downtime.py
