#include "UObject.hpp"
#include "USceneRigStageContainer.hpp"
#include "USceneRigStageParameterBlock.hpp"
#include "UWorld.hpp"
USceneRigStageContainer* USceneRigStageContainer::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneRigStageContainer");
    return (USceneRigStageContainer*)res;
}
