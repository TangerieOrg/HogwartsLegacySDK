#include "FVector.hpp"
#include "UCameraStackBehaviorAddArmOriginTranslation.hpp"
#include "UCameraStackBehaviorBlend.hpp"
UCameraStackBehaviorAddArmOriginTranslation* UCameraStackBehaviorAddArmOriginTranslation::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackBehaviorAddArmOriginTranslation");
    return (UCameraStackBehaviorAddArmOriginTranslation*)res;
}
