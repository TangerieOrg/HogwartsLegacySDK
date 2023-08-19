#include "UBoolProvider.hpp"
#include "UBool_AND.hpp"
UBool_AND* UBool_AND::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.Bool_AND");
    return (UBool_AND*)res;
}
