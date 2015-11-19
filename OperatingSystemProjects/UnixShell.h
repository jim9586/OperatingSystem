//
//  UnixShell.h
//  
//
//  Created by 李正宁 on 11/18/15.
//
//

#ifndef UnixShell_h
#define UnixShell_h

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <signal.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <termios.h>

#define TRUE 1
#define FALSE !TRUE

#define BUFFER_MAX_LENGTH 50
static char* currentDirectory;
static char userInput = '\0';
static char buffer[BUFFER_MAX_LENGTH];
static int bufferChars = 0;
static char *commandArgv[5];
static int commandArgv = 0;

#define FOREGROUND 'F'
#define BACKGROUND 'B'
#define SUSPENDED 'S'
#define WAITTING_INPUT 'W'

#define STDIN 1
#define STDOUT 2
#define BY_PROCESS_ID 1
#define BY_JOB_ID 2
#define BY_JOB_STATUS 3


#endif /* UnixShell_h */


static int numActiveJobs = 0;

typedef struct job {
    int id;
    char *name;
    pid_t pid;
    pid_t pgid;
    int status;
    char *description;
    struct job *next;
}t_job;

static t_job* jobsList = NULL;