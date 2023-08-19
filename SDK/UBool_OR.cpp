#include "UBoolProvider.hpp"
#include "UBool_OR.hpp"
UBool_OR* UBool_OR::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.Bool_OR");
    return (UBool_OR*)res;
}
