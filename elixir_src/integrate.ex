defmodule Integrate do
    import Hello
    import Calc
    def integrate do
        calc(1,3) |> hello()
    end
end