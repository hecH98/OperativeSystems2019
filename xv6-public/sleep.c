#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char **argv){
    int i;
    printf(1,"sleep\n ");
    if(argc < 2){
      printf(1,"sleep (seconds)\n");
      exit();
    }
    for(i=1; i<argc; i++){
      sleep(atoi(argv[i])*100);
    }
    exit();
}
