#pragma once
struct dek {
	int value;
	struct dek *prev;
	struct dek *nxt ;
	
};

struct dekInfo
{
	struct dek *head;
	struct dek *tail;
	int size;
};
void lPush(dekInfo &dInf, int insVal);
void RPush(dekInfo &dInf, int insVal);
void lPop(dekInfo &dInf);
void RPop(dekInfo &dInf);
void printDek(dekInfo dInf);