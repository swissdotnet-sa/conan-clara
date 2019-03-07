#include "clara.hpp"

int main()
{
    int width = 0;
    using namespace clara;
    auto cli
        = Opt( width, "width" )
            ["-w"]["--width"]
            ("How wide should it be?");
}
