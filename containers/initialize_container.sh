#!/bin/bash

HOSTNAME=gbemmu_dev
#VOLUME=gbemu_workspace:/home/gbemu
VOLUME=/Users/tjvela/Documents/codetime:/home/gbemu
USER=gbemu
IMAGE=oakrie/gbemu:1.0

docker run -v ${VOLUME} --user ${USER} -h=${HOSTNAME} -it ${IMAGE}

