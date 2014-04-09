#!/bin/bash
cd ./lib
#g++ -c ./*.h ./*.cc -w
cd ..
g++ ./starter.cpp ./lib/*.o -o starter -pthread -w
g++ ./server.cpp ./lib/*.o -o server -pthread -w
g++ ./client.cpp ./lib/*.o -o client -w
chmod 777 starter
./starter

#g++ ./starter.cpp ./lib/*.h ./lib/*.cc -o starter -pthread -w
#g++ ./server.cpp -o server -pthread -w
#g++ ./client.cpp -o client -w
#chmod 777 starter
#./starter