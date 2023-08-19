#include "FAnimationRequestLayerReference.hpp"
#include "FDialogLineRule_CameraAnimation.hpp"
#include "FDialogLineRule_CameraFixup.hpp"
#include "FSceneRigStage_ActorReference.hpp"
#include "UDialogueLineRule_MoveCamera_Event.hpp"
#include "UObject.hpp"
#include "UTransformProvider.hpp"
UDialogueLineRule_MoveCamera_Event* UDialogueLineRule_MoveCamera_Event::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.DialogueLineRule_MoveCamera_Event");
    return (UDialogueLineRule_MoveCamera_Event*)res;
}
