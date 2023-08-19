#include "USceneActionState_AnimateProperty.hpp"
#include "USceneActionState_AnimateVectorProperty.hpp"
USceneActionState_AnimateVectorProperty* USceneActionState_AnimateVectorProperty::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneActionState_AnimateVectorProperty");
    return (USceneActionState_AnimateVectorProperty*)res;
}
