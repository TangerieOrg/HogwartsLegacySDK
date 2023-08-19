#include "FRuntimeCurveVector.hpp"
#include "FVector.hpp"
#include "USceneAction_AnimateProperty.hpp"
#include "USceneAction_AnimateVectorProperty.hpp"
USceneAction_AnimateVectorProperty* USceneAction_AnimateVectorProperty::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneAction_AnimateVectorProperty");
    return (USceneAction_AnimateVectorProperty*)res;
}
