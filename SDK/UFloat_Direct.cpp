#include "UFloatProvider.hpp"
#include "UFloat_Direct.hpp"
UFloat_Direct* UFloat_Direct::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.Float_Direct");
    return (UFloat_Direct*)res;
}
