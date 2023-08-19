#include "UArrayProperty.hpp"
#include "UProperty.hpp"
UArrayProperty* UArrayProperty::StaticClass() {
    static auto res = find_uobject("Class /Script/CoreUObject.ArrayProperty");
    return (UArrayProperty*)res;
}
