#include "UTransformProvider.hpp"
#include "UTransform_BoneUnscaled.hpp"
UTransform_BoneUnscaled* UTransform_BoneUnscaled::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.Transform_BoneUnscaled");
    return (UTransform_BoneUnscaled*)res;
}
