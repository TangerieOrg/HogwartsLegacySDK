#include "UDialogueScriptBlockImplicitRulesCommand.hpp"
#include "UDialogueScriptCommand.hpp"
UDialogueScriptBlockImplicitRulesCommand* UDialogueScriptBlockImplicitRulesCommand::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.DialogueScriptBlockImplicitRulesCommand");
    return (UDialogueScriptBlockImplicitRulesCommand*)res;
}
