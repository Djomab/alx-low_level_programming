#include <unistd.h>
#include <stdlib.h>
int main() {
  char buffer[32];
  int nread;
  nread = read(0, buffer, 32);
  if (nread == -1)
    write(2, "Erreur\n", 7);
  if ((write(1,buffer,nread)) != nread)
    write(2, "Erreur\n",7);
  exit(0);
}
