# InfoSecLabBuff

docker run -it ubuntu bash

From inside the container install tools. nano, gcc, git
apt update
apt install nano
apt install gcc
apt install git

download, compile and run the code

mkdir ca1
cd ca1/
git clone https://github.com/greeng0at/InfoSecLabBuff.git
cd InfoSecLabBuff/
ls -l
gcc -o buff1 buff1.c
ls -l
./buff1
