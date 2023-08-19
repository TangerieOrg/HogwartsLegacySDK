#include "UMulticastDelegateProperty.hpp"
#include "UMulticastSparseDelegateProperty.hpp"
UMulticastSparseDelegateProperty* UMulticastSparseDelegateProperty::StaticClass() {
    static auto res = find_uobject("Class /Script/CoreUObject.MulticastSparseDelegateProperty");
    return (UMulticastSparseDelegateProperty*)res;
}
