#include "UProperty.hpp"
#include "USetProperty.hpp"
USetProperty* USetProperty::StaticClass() {
    static auto res = find_uobject("Class /Script/CoreUObject.SetProperty");
    return (USetProperty*)res;
}
