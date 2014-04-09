/*
starter.cpp

Alex Nault - 12 073 221
Simon Gobeil Levesque - 11 166 187
*/

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <pthread.h>
#include <semaphore.h>
#include <math.h>
#include <time.h>
#include <assert.h>

#include "./lib/pcslib.h"
#include "./lib/semlib.h"
#include "./lib/memlib.h"
#include "./lib/msglib.h"

#include "./lib/commun.h"

using namespace std;

//key_t key_mem = 90537278;
//Mem Commun(key_mem, sizeof(char) * buffer_size);

int main()
{
	Pcs p_server;
	Pcs p_clients[NB_CLIENTS];

	cout << "Starting server...";
	pid_t p = p_server.Fork("server");
	//cout << p << endl;

	cout << "Starting " << NB_CLIENTS << " clients...";
	for (int i = 0; i < NB_CLIENTS; i++)
	{
		pid_t pp = p_clients[i].Fork("client");
	}

	while(true)
	{

	}

	//Commun.Libere();
}