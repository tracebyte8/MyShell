#include "rename.h"
#include <stdio.h>
#include <errno.h>
#include <string.h>

void rename_myfile(char **argv)
{
    if(strcmp(argv[0],"rename")==0){
    if (argv[1] == NULL || argv[2] == NULL || argv[3] != NULL) {
        fprintf(stderr, "usage: rename <old> <new>\n");
        return ;
    }

    if (rename(argv[1], argv[2]) == -1) {
        fprintf(stderr, "rename: cannot rename '%s' to '%s': %s\n",
                argv[1], argv[2], strerror(errno));
        return ;
    }

    return ;
}
}