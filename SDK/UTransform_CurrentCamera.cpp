#include "UTransformProvider.hpp"
#include "UTransform_CurrentCamera.hpp"
UTransform_CurrentCamera* UTransform_CurrentCamera::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.Transform_CurrentCamera");
    return (UTransform_CurrentCamera*)res;
}
