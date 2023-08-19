#include "UBoolProperty.hpp"
#include "UProperty.hpp"
UBoolProperty* UBoolProperty::StaticClass() {
    static auto res = find_uobject("Class /Script/CoreUObject.BoolProperty");
    return (UBoolProperty*)res;
}
