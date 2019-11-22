#include <erl_nif.h>
#include "../include/hello.h"

ERL_NIF_TERM hello_nif(ErlNifEnv* env, int argc, const ERL_NIF_TERM argv[]){
    if(argc != 1){
        return enif_make_badarg(env);
    }
    int times = 0;
    enif_get_int(env,argv[0],&times);
    int result = 0;
    result = hello(times);
    return enif_make_int(env,result);
}

ErlNifFunc nif_funcs[] = {
    {"hello",1,hello_nif}
};

ERL_NIF_INIT(Elixir.Hello,nif_funcs,NULL,NULL,NULL,NULL);