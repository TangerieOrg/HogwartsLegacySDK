#include "UBoolProvider.hpp"
#include "UBool_NOT.hpp"
UBool_NOT* UBool_NOT::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.Bool_NOT");
    return (UBool_NOT*)res;
}
