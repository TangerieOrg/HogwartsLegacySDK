#include "UObjectPropertyBase.hpp"
#include "USoftObjectProperty.hpp"
USoftObjectProperty* USoftObjectProperty::StaticClass() {
    static auto res = find_uobject("Class /Script/CoreUObject.SoftObjectProperty");
    return (USoftObjectProperty*)res;
}
