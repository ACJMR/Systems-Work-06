
//Colin Hosking
//Work 06
//Systems pd05
//2018-10-04

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>

struct restaurant {char name[200]; int rating;}; 

struct restaurant create(){
  struct restaurant ferrys;

  char s[] = "Ferry's";
  strcpy(ferrys.name,s);           //copies string literal into name
  ferrys.rating = rand() % 101;    //takes random into and makes it an int between 0 and 100

  return ferrys;
}

int printRestaurant(struct restaurant r){
  printf("%s has a rating of %d\n",r.name,r.rating); 
  return 0;
}

int modify(char newName[200], int newRating, struct restaurant *p){
  strcpy(p->name,newName);      //copies string literal into name using pointer
  p->rating = newRating;        
  return 0;
}

int main(){
  srand(time(NULL));
  printf("Creating three restaurants:\n");
      
  struct restaurant s = create();
  struct restaurant r = create();
  struct restaurant t = create();
  printRestaurant(s);  
  printRestaurant(r);
  printRestaurant(t);
    
  printf("\nChange name and rating of first restaurant to 'Jimmy's' and 96\n");
  struct restaurant *p = &s;
  char s1[] = "Jimmy's";
  modify(s1, 96, p);
  printRestaurant(s);
  printRestaurant(r);
  printRestaurant(t);
  
  printf("\nChange name and rating of second restaurant to 'Shake Shack' and 47\n");
  struct restaurant *q = &r;
  char s2[] = "Shake Shack";
  modify(s2, 47, q);
  printRestaurant(s);
  printRestaurant(r);
  printRestaurant(t);
}
