#include "USceneRig.hpp"
#include "USceneRigPlayer.hpp"
#include "UStagePreviewDriver.hpp"
#include "UStagePreviewDriver_PlaySceneRig.hpp"
UStagePreviewDriver_PlaySceneRig* UStagePreviewDriver_PlaySceneRig::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.StagePreviewDriver_PlaySceneRig");
    return (UStagePreviewDriver_PlaySceneRig*)res;
}
