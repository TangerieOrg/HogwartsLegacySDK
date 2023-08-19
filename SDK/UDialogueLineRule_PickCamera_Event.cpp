#include "EManagedCameraPriority.hpp"
#include "FCameraActionTransitionSettings.hpp"
#include "FDialogueLineRule_PickCameraItem.hpp"
#include "FSceneRigStage_ActorReference.hpp"
#include "UDialogueLineRule_PickCamera_Event.hpp"
#include "UObject.hpp"
UDialogueLineRule_PickCamera_Event* UDialogueLineRule_PickCamera_Event::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.DialogueLineRule_PickCamera_Event");
    return (UDialogueLineRule_PickCamera_Event*)res;
}
