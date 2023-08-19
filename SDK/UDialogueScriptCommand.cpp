#include "UDialogueScriptCommand.hpp"
#include "UObject.hpp"
UDialogueScriptCommand* UDialogueScriptCommand::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.DialogueScriptCommand");
    return (UDialogueScriptCommand*)res;
}
