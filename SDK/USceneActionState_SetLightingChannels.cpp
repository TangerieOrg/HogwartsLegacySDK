#include "USceneActionState_SetLightingChannels.hpp"
#include "USceneRigObjectActionState.hpp"
USceneActionState_SetLightingChannels* USceneActionState_SetLightingChannels::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneActionState_SetLightingChannels");
    return (USceneActionState_SetLightingChannels*)res;
}
