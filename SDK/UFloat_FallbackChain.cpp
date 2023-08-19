#include "UFloatProvider.hpp"
#include "UFloat_FallbackChain.hpp"
UFloat_FallbackChain* UFloat_FallbackChain::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.Float_FallbackChain");
    return (UFloat_FallbackChain*)res;
}
