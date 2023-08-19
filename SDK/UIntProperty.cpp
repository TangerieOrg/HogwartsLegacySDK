#include "UIntProperty.hpp"
#include "UNumericProperty.hpp"
UIntProperty* UIntProperty::StaticClass() {
    static auto res = find_uobject("Class /Script/CoreUObject.IntProperty");
    return (UIntProperty*)res;
}
