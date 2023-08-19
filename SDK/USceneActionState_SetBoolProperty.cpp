#include "USceneActionState_SetBoolProperty.hpp"
#include "USceneActionState_SetProperty.hpp"
USceneActionState_SetBoolProperty* USceneActionState_SetBoolProperty::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneActionState_SetBoolProperty");
    return (USceneActionState_SetBoolProperty*)res;
}
