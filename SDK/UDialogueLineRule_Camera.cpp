#include "FDialogLineRule_CameraCharacter.hpp"
#include "UDialogueLineRule.hpp"
#include "UDialogueLineRule_Camera.hpp"
#include "UDialogueLineRule_MoveCamera_Event.hpp"
UDialogueLineRule_Camera* UDialogueLineRule_Camera::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.DialogueLineRule_Camera");
    return (UDialogueLineRule_Camera*)res;
}
