#!/bin/bash

INTERPRERER=/bin/bash
CONTAINER_ID=$(docker ps -a | awk '{ if($2=="oakrie/tensorbake:1.0"){ print $1 }}')
#echo $CONTAINER_ID

docker start ${CONTAINER_ID}
docker exec -it ${CONTAINER_ID} "${INTERPRERER}" -a
