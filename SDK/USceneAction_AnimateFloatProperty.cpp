#include "FRuntimeFloatCurve.hpp"
#include "USceneAction_AnimateFloatProperty.hpp"
#include "USceneAction_AnimateProperty.hpp"
#include "UTransformProvider.hpp"
USceneAction_AnimateFloatProperty* USceneAction_AnimateFloatProperty::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneAction_AnimateFloatProperty");
    return (USceneAction_AnimateFloatProperty*)res;
}
