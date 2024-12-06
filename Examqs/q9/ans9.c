#include <stdio.h>
#include <math.h>

typedef struct {
     int x;
     int y;
     } Point;

typedef struct {
     Point coord1;
     Point coord2;
     } Line ;

double length(Line L) {
  //using formula len = sqrt ( ((x2-x1)^2) + ((y2-y1)^2 ) )
  double length;
  length =  sqrt( pow((L.coord2.x - L.coord1.x),2) + pow((L.coord2.y - L.coord1.y),2)) ; 
  return (length);
}

void printPoint(Point p) {
   printf("(%d,%d)",p.x,p.y);
}

Point setPoint(int x, int y) {
  Point p;
  p.x = x; p.y = y;
  return(p);
}
Line makeLine(Point p1, Point p2) {
  Line L;
  L.coord1=p1;
  L.coord2=p2;
  return (L);
}
void printLength(Line L) {
  double len = length(L);
  printf("Line from ");
  printPoint(L.coord1);
  printf(" to ");
  printPoint(L.coord2);
  printf(" has length ");
  printf("%.2lf.\n",len);
}

int main() {

  Point p1=setPoint(0,-1);
  Point p2=setPoint(1,0);
  Line L=makeLine(p1,p2);
  printLength(L);

  Point p3=setPoint(2,1);
  Point p4=setPoint(5,7);
  L=makeLine(p3,p4);
  printLength(L);
}
