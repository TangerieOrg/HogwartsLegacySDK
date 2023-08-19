#include "USceneActionState_SetFloatProperty.hpp"
#include "USceneActionState_SetProperty.hpp"
USceneActionState_SetFloatProperty* USceneActionState_SetFloatProperty::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneActionState_SetFloatProperty");
    return (USceneActionState_SetFloatProperty*)res;
}
