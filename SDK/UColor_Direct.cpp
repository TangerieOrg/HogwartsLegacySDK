#include "FLinearColor.hpp"
#include "UColorProvider.hpp"
#include "UColor_Direct.hpp"
UColor_Direct* UColor_Direct::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.Color_Direct");
    return (UColor_Direct*)res;
}
