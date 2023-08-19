#include "UObjectProperty.hpp"
#include "UObjectPropertyBase.hpp"
UObjectProperty* UObjectProperty::StaticClass() {
    static auto res = find_uobject("Class /Script/CoreUObject.ObjectProperty");
    return (UObjectProperty*)res;
}
