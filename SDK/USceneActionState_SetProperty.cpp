#include "USceneActionState_SetProperty.hpp"
#include "USceneRigObjectActionState.hpp"
USceneActionState_SetProperty* USceneActionState_SetProperty::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneActionState_SetProperty");
    return (USceneActionState_SetProperty*)res;
}
