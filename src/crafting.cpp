#include<stdio.h>

typedef struct{
	int recipe[3][3] = {{0,0,0},{0,0,0},{0,0,0}};
	int result = 0;
} CraftRecipe;

void init_crafting() {
	CraftRecipe *test;
	test->result = 1;
}
