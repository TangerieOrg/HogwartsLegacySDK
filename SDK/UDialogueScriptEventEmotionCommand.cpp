#include "ECommandForType.hpp"
#include "EFacialEmotion.hpp"
#include "UDialogueScriptEventCommand.hpp"
#include "UDialogueScriptEventEmotionCommand.hpp"
UDialogueScriptEventEmotionCommand* UDialogueScriptEventEmotionCommand::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.DialogueScriptEventEmotionCommand");
    return (UDialogueScriptEventEmotionCommand*)res;
}
