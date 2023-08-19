#include "UObject.hpp"
#include "USceneRigStageParameterBlock.hpp"
USceneRigStageParameterBlock* USceneRigStageParameterBlock::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneRigStageParameterBlock");
    return (USceneRigStageParameterBlock*)res;
}
