#include "USceneActionState_AnimateCurves.hpp"
#include "USceneActionState_AnimateProperty.hpp"
USceneActionState_AnimateProperty* USceneActionState_AnimateProperty::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneActionState_AnimateProperty");
    return (USceneActionState_AnimateProperty*)res;
}
