#include "USceneActionState_SetIntProperty.hpp"
#include "USceneActionState_SetProperty.hpp"
USceneActionState_SetIntProperty* USceneActionState_SetIntProperty::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneActionState_SetIntProperty");
    return (USceneActionState_SetIntProperty*)res;
}
