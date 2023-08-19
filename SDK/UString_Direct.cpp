#include "UStringProvider.hpp"
#include "UString_Direct.hpp"
UString_Direct* UString_Direct::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.String_Direct");
    return (UString_Direct*)res;
}
