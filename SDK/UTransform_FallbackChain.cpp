#include "UTransformProvider.hpp"
#include "UTransform_FallbackChain.hpp"
UTransform_FallbackChain* UTransform_FallbackChain::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.Transform_FallbackChain");
    return (UTransform_FallbackChain*)res;
}
