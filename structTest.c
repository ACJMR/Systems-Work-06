#include <stdlib.h>
#include <stdio.h>
#include <time.h>

struct restaurant {char *name; int rating;}; 

struct restaurant testCreate(){
  srand(time(NULL));
  struct restaurant ferrys;

  char s[] = "Ferry's";
  ferrys.name = s;
  ferrys.rating = rand();

  return ferrys;
}

int printRestaurant(struct restaurant r){
  printf("%s has a rating of %d/100\n",r.name,r.rating);
  return 0;
}


int main(){
  printRestaurant(testCreate());

  
}
