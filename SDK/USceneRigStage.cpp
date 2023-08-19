#include "FSceneRigStage_Actor.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UAnimationArchitectTagProvider.hpp"
#include "UBaseArchitectAsset.hpp"
#include "ULevelStreaming.hpp"
#include "USceneRigStage.hpp"
#include "USceneRigStageInterface.hpp"
USceneRigStage* USceneRigStage::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneRigStage");
    return (USceneRigStage*)res;
}
