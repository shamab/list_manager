#!/bin/sh

CURRENT_DIR=`pwd`
BUILD_DIR=${CURRENT_DIR}/build
BIN_DIR=${CURRENT_DIR}/bin

mkdir ${BUILD_DIR}
mkdir ${BIN_DIR}

cd ${BUILD_DIR}
cmake -DCMAKE_INSTALL_PREFIX=${BIN_DIR} ${CURRENT_DIR}

make -j1
make -j1 install

touch ~/.list_manager.lst
