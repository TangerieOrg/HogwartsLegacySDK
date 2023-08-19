#include "ESceneAction_ClothingTeleportMode.hpp"
#include "FAnimationRequestLayerReference.hpp"
#include "FSceneRigAnimationClipRange.hpp"
#include "FSceneRigAnimationPlacementOptions.hpp"
#include "FSceneRigAnimationPlaybackSpeed.hpp"
#include "FTimeRigInputSymbol.hpp"
#include "FTimeRigOutputSymbol.hpp"
#include "FTimeRigScratchAnimation.hpp"
#include "UAnimMaskAsset.hpp"
#include "UAnimationProvider.hpp"
#include "UBlendSpaceInputProvider.hpp"
#include "UBoolProvider.hpp"
#include "UFloatProvider.hpp"
#include "USceneAction_Animation.hpp"
#include "USceneRigObjectActionBase.hpp"
#include "UTimeRigElement.hpp"
USceneAction_Animation* USceneAction_Animation::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneAction_Animation");
    return (USceneAction_Animation*)res;
}
