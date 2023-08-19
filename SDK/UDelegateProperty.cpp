#include "UDelegateProperty.hpp"
#include "UProperty.hpp"
UDelegateProperty* UDelegateProperty::StaticClass() {
    static auto res = find_uobject("Class /Script/CoreUObject.DelegateProperty");
    return (UDelegateProperty*)res;
}
