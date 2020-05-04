#include <stdio.h>
typedef struct Node{
  int x;
  int y;
  int z;
} CNode;
int main() {
  CNode node1;
  struct Node node2;
  node1.x=0;
  node1.y=1;
  node1.z=2;
  node2.x = node1.x+1;
  node2.y = node1.y+1;
  node2.z = node1.z+1;
  printf("Node 1 = (%d,%d,%d)\n",node1.x, node1.y, node1.z);
  printf("Node 2 = (%d,%d,%d)\n",node2.x, node2.y, node2.z);
  CNode *ptr = &node1;
  printf("Accessing node 1 using a pointer\n");
  printf("Node 1 = (%d,%d,%d)\n",ptr->x, ptr->y, ptr->z);
  ptr = malloc(sizeof(CNode));
  ptr->x=10;
  ptr->y=20;
  ptr->z=30;
  printf("Dynamically allocated node");
  printf("Node 3 = (%d,%d,%d)\n",ptr->x, ptr->y, ptr->z);
  
}
