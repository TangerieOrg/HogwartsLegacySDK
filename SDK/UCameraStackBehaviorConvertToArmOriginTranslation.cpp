#include "UCameraStackBehaviorBlend.hpp"
#include "UCameraStackBehaviorConvertToArmOriginTranslation.hpp"
UCameraStackBehaviorConvertToArmOriginTranslation* UCameraStackBehaviorConvertToArmOriginTranslation::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackBehaviorConvertToArmOriginTranslation");
    return (UCameraStackBehaviorConvertToArmOriginTranslation*)res;
}
