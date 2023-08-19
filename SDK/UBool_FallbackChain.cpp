#include "UBoolProvider.hpp"
#include "UBool_FallbackChain.hpp"
UBool_FallbackChain* UBool_FallbackChain::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.Bool_FallbackChain");
    return (UBool_FallbackChain*)res;
}
