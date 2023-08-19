#include "AActor.hpp"
#include "AMercunaNavSeed.hpp"
AMercunaNavSeed* AMercunaNavSeed::StaticClass() {
    static auto res = find_uobject("Class /Script/Mercuna.MercunaNavSeed");
    return (AMercunaNavSeed*)res;
}
