#include "UBoolProvider.hpp"
#include "UBool_XOR.hpp"
UBool_XOR* UBool_XOR::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.Bool_XOR");
    return (UBool_XOR*)res;
}
