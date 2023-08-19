#include "UFloatProvider.hpp"
#include "UFloat_RandomInRange.hpp"
UFloat_RandomInRange* UFloat_RandomInRange::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.Float_RandomInRange");
    return (UFloat_RandomInRange*)res;
}
