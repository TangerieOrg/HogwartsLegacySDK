#include "UMulticastDelegatePropertyWrapper.hpp"
#include "UMulticastInlineDelegatePropertyWrapper.hpp"
UMulticastInlineDelegatePropertyWrapper* UMulticastInlineDelegatePropertyWrapper::StaticClass() {
    static auto res = find_uobject("Class /Script/CoreUObject.MulticastInlineDelegatePropertyWrapper");
    return (UMulticastInlineDelegatePropertyWrapper*)res;
}
