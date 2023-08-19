#include "FDialogueConversationReference.hpp"
#include "USceneActionState_DialogueEvent.hpp"
#include "USceneRigObjectActionState.hpp"
USceneActionState_DialogueEvent* USceneActionState_DialogueEvent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionState_DialogueEvent");
    return (USceneActionState_DialogueEvent*)res;
}
