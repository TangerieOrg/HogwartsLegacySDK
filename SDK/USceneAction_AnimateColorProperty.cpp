#include "FLinearColor.hpp"
#include "FRuntimeCurveLinearColor.hpp"
#include "USceneAction_AnimateColorProperty.hpp"
#include "USceneAction_AnimateProperty.hpp"
USceneAction_AnimateColorProperty* USceneAction_AnimateColorProperty::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneAction_AnimateColorProperty");
    return (USceneAction_AnimateColorProperty*)res;
}
