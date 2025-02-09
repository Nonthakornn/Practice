#include <stdlib.h>
#include <stdio.h>

typedef struct {
    int data[1000001];
} MyHashMap;

MyHashMap* myHashMapCreate() {
    MyHashMap *obj = malloc(sizeof(MyHashMap));
    memset(obj->data, -1, sizeof(obj->data));
    return obj;
}

void myHashMapPut(MyHashMap* obj, int key, int value) {
    obj->data[key] = value;
}

int myHashMapGet(MyHashMap* obj, int key) {
    return obj->data[key];
}

void myHashMapRemove(MyHashMap* obj, int key) {
    obj->data[key] = -1;
}

void myHashMapFree(MyHashMap* obj) {
    free(obj);
}