defmodule Calc do
    @on_load :load_nifs
    def load_nifs do
        :erlang.load_nif('../lib/calc',0)
    end

    def calc(_a,_b) do
        raise "NIF calc/2 not implemented"
    end
end