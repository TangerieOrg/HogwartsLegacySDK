#include "UProperty.hpp"
#include "UStructProperty.hpp"
UStructProperty* UStructProperty::StaticClass() {
    static auto res = find_uobject("Class /Script/CoreUObject.StructProperty");
    return (UStructProperty*)res;
}
