#include "USceneActionState_SetProperty.hpp"
#include "USceneActionState_SetVectorProperty.hpp"
USceneActionState_SetVectorProperty* USceneActionState_SetVectorProperty::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneActionState_SetVectorProperty");
    return (USceneActionState_SetVectorProperty*)res;
}
