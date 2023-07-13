#!/bin/sh

CMAKE_CURRENT_BINARY_DIR=$1

DISABLEMODULEMAPFILE=$CMAKE_CURRENT_BINARY_DIR/disabled.module.modulemap
MODULEMAPFILE=$CMAKE_CURRENT_BINARY_DIR/module.modulemap
if test -f "$DISABLEMODULEMAPFILE"; then
    mv $DISABLEMODULEMAPFILE $MODULEMAPFILE
fi
