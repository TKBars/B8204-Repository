#include "stdafx.h"
#include "Header.h"
#include <iostream>
#include "stdlib.h"
using namespace std;

void lPush(dekInfo &dInf, int insVal){
	dek *tmp =  (dek*) malloc(sizeof(dek));
	tmp->prev = NULL;
	tmp->nxt = NULL;
	dInf.size++;
	if (dInf.size == 1) {
		dInf.head = dInf.tail = tmp;

	}
	else {
		tmp->prev = dInf.head;
		dInf.head->nxt = tmp;
		dInf.head = tmp;
	}
	tmp->value=insVal;
}
void RPush(dekInfo &dInf, int insVal) {
	dek *tmp = (dek*)malloc(sizeof(dek));
	tmp->prev = NULL;
	tmp->nxt = NULL;
	dInf.size++;
	if (dInf.size == 1) {
		dInf.head = dInf.tail = tmp;

	}
	else {
		tmp->nxt = dInf.tail;
		dInf.tail->prev = tmp;
		dInf.tail = tmp;
	}
	tmp->value=insVal;
	
}
void lPop(dekInfo &dInf) {
	dInf.head = dInf.head->prev;
	free(dInf.head->nxt);
	dInf.head->nxt = NULL;
}
void RPop(dekInfo &dInf) {
	dInf.tail = dInf.tail->nxt;
	free(dInf.tail->prev);
	dInf.tail->prev = NULL;
}
void printDek(dekInfo dInf) {
	cout << "\n";
	while (dInf.head != NULL) {
		cout << dInf.head->value << " ";
		dInf.head = dInf.head->prev;
	}
	cout << "\n";
}