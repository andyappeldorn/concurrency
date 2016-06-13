/* 
 * File:   app.c
 * Author: C13999
 *
 * Created on June 10, 2016, 7:50 AM
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*
 * Test program for concurrency
 */

struct mut_obj{
    bool lock;  // also held
    char timeToLive;
    void* data_ptr;    
    unsigned int length;
};

bool testAndSet(bool *flag){
    bool old = *flag;
    *flag = true;
    return old;
}

void acquire(struct mut_obj *obj){
    while(obj->lock == true){
        // wait
    }
    obj->lock = false;
}

void release(struct mut_obj *obj){
    obj->lock = false;
}

int main(int argc, char** argv) {

    while (1) {

    }

    return (EXIT_SUCCESS);
}
