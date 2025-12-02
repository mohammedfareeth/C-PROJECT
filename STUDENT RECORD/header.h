#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct st
{
 	int rollno;
	char name[50];
	float mark;
	struct st *next;
}ST;

void menu_std(void);
void menudel_std(void);
void menusea_std(void);
void menuexit_std(void);
void menusort_std(void);
void menumod_std(void);

void add_record(ST**);
void delete_record(ST**);
void show_record(ST*);
void modify_record(ST**);
void save_record(ST*);
void sort_record(ST*);
void delete_allrecord(ST **);
void delete_record(ST**);
void reverse_record(ST*);
int node_count(ST *);
int find_roll(ST *);
