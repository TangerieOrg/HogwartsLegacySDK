#include "UEnumProperty.hpp"
#include "UProperty.hpp"
UEnumProperty* UEnumProperty::StaticClass() {
    static auto res = find_uobject("Class /Script/CoreUObject.EnumProperty");
    return (UEnumProperty*)res;
}
