#!/bin/bash

HOSTNAME=gbemmu_dev
#VOLUME=gbemu_workspace:/home/gbemu
VOLUME=/home/tim/codetime:/home/gbemu
USER=gbemu
IMAGE=oakrie/gbemu:1.2

docker run -v ${VOLUME} --user ${USER} -h=${HOSTNAME} -it ${IMAGE}

