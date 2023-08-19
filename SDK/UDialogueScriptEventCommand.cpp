#include "UDialogueScriptCommand.hpp"
#include "UDialogueScriptEventCommand.hpp"
UDialogueScriptEventCommand* UDialogueScriptEventCommand::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.DialogueScriptEventCommand");
    return (UDialogueScriptEventCommand*)res;
}
