# Dev Container Env

Using a simple ubuntu container to setup development environments and 
ensure enviroments are consistent while developing

## Setup TensorBake Development Container

-  Install Docker and run the following commands
```bash
$ docker pull oakrie/tensorbake:1.0
$ ./initialize_container.sh         # This will create the container from the image and boot it up for the first time
```

- Please note that you only need to run ```./initialize_container.sh``` once afterwards you 
only need to run the following

```bash
$ ./start_container.sh
``` 

## Building the image

- You do not need to build the image if you pulled the image from dockerhub
- The script ```./build_image.sh" Uses the docker file ```tensorbake_testing```, to build the container image
- However, you can modify the dockerfile, run the build script, and push the new image to dockerhub if need be

