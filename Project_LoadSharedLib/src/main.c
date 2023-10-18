#include <stdio.h>
#include <stdlib.h>
#include <dlfcn.h>

int main(void){
    printf("Dynamic Load Shared Library Demo.\n");


    void *handle;
    void (*f)();
    char *error;

    /* open the needed object */
    handle = dlopen("../SharedLib/libdynamicload.so", RTLD_LAZY);
    if(!handle){
        fputs(dlerror(), stderr);
        exit(1);
    }
    /* execute programs */
    f = dlsym(handle, "sharedLibForDynamicLoadProg1");
    if((error = dlerror()) != NULL){
        fprintf(stderr, "%s\n", error);
        exit(1);
    }
    f();
    
    f = dlsym(handle, "sharedLibForDynamicLoadProg2");
    if((error = dlerror()) != NULL){
        fprintf(stderr, "%s\n", error);
        exit(1);
    }
    f();

    f = dlsym(handle, "sharedLibForDynamicLoadProg3");
    if((error = dlerror()) != NULL){
        fprintf(stderr, "%s\n", error);
        exit(1);
    }
    f();

    /* close a dlopen object */
    dlclose(handle);
    return 0;
}