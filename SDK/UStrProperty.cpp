#include "UProperty.hpp"
#include "UStrProperty.hpp"
UStrProperty* UStrProperty::StaticClass() {
    static auto res = find_uobject("Class /Script/CoreUObject.StrProperty");
    return (UStrProperty*)res;
}
