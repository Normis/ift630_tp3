/*
client.cpp

Alex Nault - 12 073 221
Simon Gobeil Levesque - 11 166 187
*/

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <math.h>
#include <time.h>
#include <assert.h>

#include "./lib/pcslib.h"
#include "./lib/semlib.h"
#include "./lib/memlib.h"
#include "./lib/msglib.h"

#include <unistd.h>

#include "./lib/commun.h"

using namespace std;

int main()
{
	pid_t pid = getpid();

	//int *mem_commun;
   	//key_t key_mem = (key_t)pid;

   	//Mem Commun(key_mem, sizeof(char) * buffer_size);
   	//Commun.Attache((void**)&mem_commun);

	cout << "CLIENT pid=" << pid << endl;

	//char hh = mem_commun[0];
	//cout << hh << endl;

	request rq;
	response rp;

	key_t key_port = 99887766; 
   	Port output_request(key_port);
   	rq.type = 1;
   	sprintf(rq.file,"dayz.txt");

   	output_request.Envoie(&rq, sizeof(request));

	while(true)
	{
		//Thread.sleep(random); // attend avant prochaine demande
		//output_request.Envoie(&rq, sizeof(request));

		/*while(pas fini de recevoir le fichier)
			input_response.Recoit(&rp, sizeof(response));
			//insert in buffer (building text)
		*/
		// fichier completement recu.
	}

	//mem_commun[0];

	//Commun.Detache((char*)mem_commun);
}