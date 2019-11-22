#include <erl_nif.h>
#include "../include/inner_func.h"

ERL_NIF_TERM inner_func_nif(ErlNifEnv* env, int argc, const ERL_NIF_TERM argv[]){
    if(argc != 1){
        return enif_make_badarg(env);
    }
    int arg = 0;
    enif_get_int(env,argv[0],&arg);
    int result = 0;
    result = inner_func(arg);
    return enif_make_int(env,result);
}

ErlNifFunc nif_funcs[] = {
    {"inner_func",1,inner_func_nif}
};

ERL_NIF_INIT(Elixir.InnerFunc,nif_funcs,NULL,NULL,NULL,NULL);