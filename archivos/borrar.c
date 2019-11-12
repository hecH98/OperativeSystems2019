#include <string.h>
#include <unistd.h>
#include <stdio.h>

int main(int argc, char** argv){
    char* nombre = argv[1];
    char *pwd = getcwd(NULL,0);
    char path[strlen(pwd) + strlen(nombre) + 2];
    sprintf(path, "%s/%s", pwd, nombre);
    unlink(path);

    return 0;
}