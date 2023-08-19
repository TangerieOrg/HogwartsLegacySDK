#include "USceneActionState_AnimateFloatProperty.hpp"
#include "USceneActionState_AnimateProperty.hpp"
USceneActionState_AnimateFloatProperty* USceneActionState_AnimateFloatProperty::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneActionState_AnimateFloatProperty");
    return (USceneActionState_AnimateFloatProperty*)res;
}
