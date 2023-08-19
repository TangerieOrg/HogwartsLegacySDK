#include "UBoolProvider.hpp"
#include "UBool_Direct.hpp"
UBool_Direct* UBool_Direct::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.Bool_Direct");
    return (UBool_Direct*)res;
}
