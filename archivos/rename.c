#include <string.h>
#include <unistd.h>
#include <stdio.h>

int main(int argc, char** argv){
    char* viejo = argv[1];
    char* nuevo = argv[2];
    char* pwd = getcwd(NULL,0);
    char pathViejo[strlen(pwd) + strlen(viejo) + 2];
    char pathNuevo[strlen(pwd) + strlen(nuevo) + 2];
    sprintf(pathViejo, "%s/%s", pwd, viejo);
    sprintf(pathNuevo, "%s/%s", pwd, nuevo);

    link(pathViejo, pathNuevo);
    unlink(pathViejo);

    return 0;
}