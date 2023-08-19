#include "USceneActionState_GlobalLightRigBlendable.hpp"
#include "USceneRigActionState.hpp"
USceneActionState_GlobalLightRigBlendable* USceneActionState_GlobalLightRigBlendable::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionState_GlobalLightRigBlendable");
    return (USceneActionState_GlobalLightRigBlendable*)res;
}
