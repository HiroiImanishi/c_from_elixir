defmodule InnerFunc do
    @on_load :load_nifs

    def load_nifs do
        :erlang.load_nif('../nif_lib/innerfunc',0)
    end
    def inner_func(_a) do
        raise "NIF inner_func/1 not implemented"
    end
end