#include "USoftClassProperty.hpp"
#include "USoftObjectProperty.hpp"
USoftClassProperty* USoftClassProperty::StaticClass() {
    static auto res = find_uobject("Class /Script/CoreUObject.SoftClassProperty");
    return (USoftClassProperty*)res;
}
