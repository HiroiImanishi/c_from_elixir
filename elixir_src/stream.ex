defmodule StreamFunc do
    @on_load :load_nifs
    def load_nifs do
        :erlang.load_nif('../nif_lib/stream',0)
    end

    def stream_func do
        raise "NIF stream_func/0 not implemented"
    end
end