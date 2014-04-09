/*
server.cpp

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

#define N 10
#include <signal.h>

#include "./lib/commun.h"

using namespace std;

sem_t password_found;
bool cancel_threads = false;
pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;

int main()
{
	cout << "SERVER" << endl;

	key_t request_port = 99887766;
   	Port input_request(request_port);

   	//Port1.Envoie(&message,104);

	//int *mem_commun;
	//key_t key_mem = 90537278;
	//Mem Commun(key_mem, sizeof(char) * buffer_size);
	//Commun.Attache((void **)&mem_commun);

	

	//mem_commun[0] = 'd';



	while(true)
	{
		// Receives request
		request rq;
		input_request.Recoit(&rq, sizeof(request));
		// Start thread that will handle it (send file)
   		cout << rq.file << endl;
	}

	//mem_commun[0] = 1;

	//Commun.Detache((char*)mem_commun);
}