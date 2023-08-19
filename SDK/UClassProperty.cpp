#include "UClassProperty.hpp"
#include "UObjectProperty.hpp"
UClassProperty* UClassProperty::StaticClass() {
    static auto res = find_uobject("Class /Script/CoreUObject.ClassProperty");
    return (UClassProperty*)res;
}
