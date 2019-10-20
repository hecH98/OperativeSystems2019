#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
  char numero[10];
  char stop[10];
  sprintf(stop, "-1");
  read(0, numero, sizeof(numero));
  int primo = atoi(numero);
  if (primo == -1) {
    write(1, stop, sizeof(stop));
    return 0;
  }
    fprintf(stderr, "%s\n", numero);
    while(1){
      char checar[10];
      read(0, checar, sizeof(checar));
      int checarInt = atoi(checar);

      if (checarInt == -1) {
        write(1, stop, sizeof(stop));
        return 0;
      } else {
        if (checarInt % primo != 0) {
          sprintf(checar, "%d", checarInt);
          write(1, checar, sizeof(checar));
        }
      }
    }
    return 0;
}