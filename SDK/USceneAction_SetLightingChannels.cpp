#include "FLightingChannels.hpp"
#include "USceneAction_SetLightingChannels.hpp"
#include "USceneRigObjectActionBase.hpp"
USceneAction_SetLightingChannels* USceneAction_SetLightingChannels::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneAction_SetLightingChannels");
    return (USceneAction_SetLightingChannels*)res;
}
