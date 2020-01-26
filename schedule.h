#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <getopt.h>
#include <assert.h>
#include <time.h>
#include <pwd.h>

/*=============== types ===============*/
#define MAXSIZE 10
#define BUF 4096

struct argInfo {
    char* name;
    char* prog_name;
    char* dest;
    char* user;
    int latency;
    char* func;
    char* expr[MAXSIZE];
};

struct taskInfo {
    char* name;
    char* user;
};

typedef struct argInfo argInfo;
typedef struct taskInfo taskInfo;