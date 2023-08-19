#include "UTransformProvider.hpp"
#include "UTransform_Blend.hpp"
UTransform_Blend* UTransform_Blend::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.Transform_Blend");
    return (UTransform_Blend*)res;
}
