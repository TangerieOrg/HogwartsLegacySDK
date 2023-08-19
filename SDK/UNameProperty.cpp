#include "UNameProperty.hpp"
#include "UProperty.hpp"
UNameProperty* UNameProperty::StaticClass() {
    static auto res = find_uobject("Class /Script/CoreUObject.NameProperty");
    return (UNameProperty*)res;
}
