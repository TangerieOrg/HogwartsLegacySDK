#include "USceneRigProxyActor.hpp"
#include "USceneRigProxyMocapStage.hpp"
USceneRigProxyMocapStage* USceneRigProxyMocapStage::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneRigProxyMocapStage");
    return (USceneRigProxyMocapStage*)res;
}
