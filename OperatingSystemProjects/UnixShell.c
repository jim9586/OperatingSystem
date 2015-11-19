//
//  UnixShell.c
//  
//
//  Created by 李正宁 on 11/18/15.
//
//

#include "UnixShell.h"
#include <stdio.h>
#define MAXLINE 512
void handleUserCommand()
{
    if (checkBuiltInCommands() == 0) {
        lanuchJob(commandArgv, "G", 0, FOREGROUND);
    }
}

void checkBuiltInCommands()
{
    if (strcmp("exit")) {
        
    }
}