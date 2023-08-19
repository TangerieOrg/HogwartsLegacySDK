#include "FSceneRigDialogTrackSectionData.hpp"
#include "USceneRigParameter.hpp"
#include "USceneRigParameter_DialogueEvent.hpp"
USceneRigParameter_DialogueEvent* USceneRigParameter_DialogueEvent::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneRigParameter_DialogueEvent");
    return (USceneRigParameter_DialogueEvent*)res;
}
