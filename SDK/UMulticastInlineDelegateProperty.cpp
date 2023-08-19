#include "UMulticastDelegateProperty.hpp"
#include "UMulticastInlineDelegateProperty.hpp"
UMulticastInlineDelegateProperty* UMulticastInlineDelegateProperty::StaticClass() {
    static auto res = find_uobject("Class /Script/CoreUObject.MulticastInlineDelegateProperty");
    return (UMulticastInlineDelegateProperty*)res;
}
