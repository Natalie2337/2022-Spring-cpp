#include <string>

namespace pigs{
    struct WildPig{
        int pignose;
        int pighead;
    };

    void getPig(WildPig &);
    void showPig(const WildPig &);
}