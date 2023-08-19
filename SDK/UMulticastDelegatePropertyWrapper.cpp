#include "UMulticastDelegatePropertyWrapper.hpp"
#include "UPropertyWrapper.hpp"
UMulticastDelegatePropertyWrapper* UMulticastDelegatePropertyWrapper::StaticClass() {
    static auto res = find_uobject("Class /Script/CoreUObject.MulticastDelegatePropertyWrapper");
    return (UMulticastDelegatePropertyWrapper*)res;
}
