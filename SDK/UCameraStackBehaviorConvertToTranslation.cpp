#include "UCameraStackBehaviorBlend.hpp"
#include "UCameraStackBehaviorConvertToTranslation.hpp"
UCameraStackBehaviorConvertToTranslation* UCameraStackBehaviorConvertToTranslation::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackBehaviorConvertToTranslation");
    return (UCameraStackBehaviorConvertToTranslation*)res;
}
