#include "USceneAction_SpawnActorAllowAsChild.hpp"
#include "USceneRigObjectActionBase.hpp"
USceneAction_SpawnActorAllowAsChild* USceneAction_SpawnActorAllowAsChild::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneAction_SpawnActorAllowAsChild");
    return (USceneAction_SpawnActorAllowAsChild*)res;
}
