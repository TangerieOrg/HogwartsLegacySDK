#include "FAudioDialogueFlags.hpp"
#include "UDialogueEventProvider.hpp"
#include "USceneAction_DialogueEvent.hpp"
#include "USceneRigObjectActionBase.hpp"
#include "UTransformProvider.hpp"
USceneAction_DialogueEvent* USceneAction_DialogueEvent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_DialogueEvent");
    return (USceneAction_DialogueEvent*)res;
}
