#include "erl_nif.h"
#include "../include/calc.h"

ERL_NIF_TERM calc_nif(ErlNifEnv* env, int argc, const ERL_NIF_TERM argv[]){
    if(argc != 2){
        return enif_make_badarg(env);
    }
    int a = 0;
    int b = 0;
    int result = 0;
    enif_get_int(env,argv[0],&a);
    enif_get_int(env,argv[1],&b);
    
    result = calc(a,b);
    return enif_make_int(env,result);
}

ErlNifFunc nif_funcs[] = {
    {"calc",2,calc_nif}
};

ERL_NIF_INIT(Elixir.Calc,nif_funcs,NULL,NULL,NULL,NULL);