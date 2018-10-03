#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>

struct restaurant {char name[200]; int rating;}; 

struct restaurant create(){
  srand(time(NULL));
  struct restaurant ferrys;

  char s[] = "Ferry's";
  strcpy(ferrys.name,s);
  ferrys.rating = rand();

  return ferrys;
}

int printRestaurant(struct restaurant r){
  printf("%s has a rating of %d\n",r.name,r.rating % 101);
  return 0;
}

int modify(char newName[200], int newRating, struct restaurant *p){
  strcpy(p->name,newName);
  p->rating = newRating;
  return 0;
}

int main(){
  struct restaurant r = create();
  struct restaurant *p = &r;
  printRestaurant(r);
  char s[] = "Shake Shack";
  modify(s, 40, p);
  printRestaurant(r);
  
}
