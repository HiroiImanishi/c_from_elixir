#include <erl_nif.h>
#include "../include/stream.h"

ERL_NIF_TERM stream_func_nif(ErlNifEnv* env, int argc, const ERL_NIF_TERM argv[]){
    if(argc != 0){
        return enif_make_badarg(env);
    }
    int result;
    result = stream_func();
    return enif_make_int(env,result);   //3が帰ってくるはず
}

ErlNifFunc nif_funcs[] = {
    {"stream_func",0,stream_func_nif}
};

ERL_NIF_INIT(Elixir.StreamFunc,nif_funcs,NULL,NULL,NULL,NULL);