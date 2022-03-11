# InfoSecLabBuff

## create a docker container
docker run -it ubuntu bash

## From inside the container install tools. nano, gcc, git

apt update

apt install nano gcc git

## Download and compile the code

mkdir ca1

cd ca1/

git clone https://github.com/greeng0at/InfoSecLabBuff.git

cd InfoSecLabBuff/

ls -l

gcc -o buff1 buff1.c

ls -l

## run the program and complete the challenge

./buff1

