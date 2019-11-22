defmodule Hello do
    @on_load :load_nifs
    def load_nifs do
        #２つ目の引数はライブラリに渡す引数なので関係ない
        #複数の.soをロードすることはできないみたい
        :erlang.load_nif('../lib/hello',0)
        #:erlang.load_nif('./calc',1)
    end

    def hello(_a) do
        raise "NIF hello/1 not implemented"
    end

end