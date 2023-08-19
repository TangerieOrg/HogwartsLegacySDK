#include "USceneActionState_AnimateColorProperty.hpp"
#include "USceneActionState_AnimateProperty.hpp"
USceneActionState_AnimateColorProperty* USceneActionState_AnimateColorProperty::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneActionState_AnimateColorProperty");
    return (USceneActionState_AnimateColorProperty*)res;
}
