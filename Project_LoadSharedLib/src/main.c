#include <stdio.h>
#include <stdlib.h>
#include <dlfcn.h>

int main(void){
    printf("Dynamic Load Shared Library Demo.\n");


    void *handle;
    void (*f)();
    char *error;

    /* open the needed object */
    handle = dlopen("libdynamicload.so.1", RTLD_LAZY);
    if(!handle){
        fprintf(stderr, "%s\n", dlerror());
        exit(EXIT_FAILURE);
    }
    /* execute programs */
    f = dlsym(handle, "sharedLibForDynamicLoadProg1");
    if((error = dlerror()) != NULL){
        fprintf(stderr, "%s\n", error);
        exit(EXIT_FAILURE);
    }
    f();
    
    f = dlsym(handle, "sharedLibForDynamicLoadProg2");
    if((error = dlerror()) != NULL){
        fprintf(stderr, "%s\n", error);
        exit(EXIT_FAILURE);
    }
    f();

    f = dlsym(handle, "sharedLibForDynamicLoadProg3");
    if((error = dlerror()) != NULL){
        fprintf(stderr, "%s\n", error);
        exit(EXIT_FAILURE);
    }
    f();

    /* close a dlopen object */
    dlclose(handle);
    return 0;
}