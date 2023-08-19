#include "UMulticastDelegateProperty.hpp"
#include "UProperty.hpp"
UMulticastDelegateProperty* UMulticastDelegateProperty::StaticClass() {
    static auto res = find_uobject("Class /Script/CoreUObject.MulticastDelegateProperty");
    return (UMulticastDelegateProperty*)res;
}
