#include "UAnimTag_FallbackChain.hpp"
#include "UAnimationArchitectTagProvider.hpp"
UAnimTag_FallbackChain* UAnimTag_FallbackChain::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.AnimTag_FallbackChain");
    return (UAnimTag_FallbackChain*)res;
}
