const int NB_CLIENTS = 2;
//const int buffer_size = 10;

typedef struct 
{
  int type;
  char file[80];
} request;

typedef struct 
{
  char content[100];
  char file[80];
} response;