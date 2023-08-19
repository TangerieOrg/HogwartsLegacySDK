#include "UInterfaceProperty.hpp"
#include "UProperty.hpp"
UInterfaceProperty* UInterfaceProperty::StaticClass() {
    static auto res = find_uobject("Class /Script/CoreUObject.InterfaceProperty");
    return (UInterfaceProperty*)res;
}
