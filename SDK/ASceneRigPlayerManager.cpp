#include "AActor.hpp"
#include "ASceneRigPlayerManager.hpp"
#include "FSceneRigPlayerReference.hpp"
#include "USceneRigPlayer.hpp"
ASceneRigPlayerManager* ASceneRigPlayerManager::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneRigPlayerManager");
    return (ASceneRigPlayerManager*)res;
}
