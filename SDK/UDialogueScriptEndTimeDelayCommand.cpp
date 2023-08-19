#include "UDialogueScriptCommand.hpp"
#include "UDialogueScriptEndTimeDelayCommand.hpp"
UDialogueScriptEndTimeDelayCommand* UDialogueScriptEndTimeDelayCommand::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.DialogueScriptEndTimeDelayCommand");
    return (UDialogueScriptEndTimeDelayCommand*)res;
}
