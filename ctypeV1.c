#include <stdio.h>
typedef struct {
  int x;
  int y;
  int z;
} CNode;
int main() {
  CNode node1;
  node1.x=0;
  node1.y=1;
  node1.z=2;
  printf("Node 1 = (%d,%d,%d)\n",node1.x, node1.y, node1.z);
}
