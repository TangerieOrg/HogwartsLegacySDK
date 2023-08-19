#include "ECommandLookAtType.hpp"
#include "UDialogueScriptEventCommand.hpp"
#include "UDialogueScriptEventExplicitCameraShotCommand.hpp"
#include "UNameProvider.hpp"
UDialogueScriptEventExplicitCameraShotCommand* UDialogueScriptEventExplicitCameraShotCommand::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.DialogueScriptEventExplicitCameraShotCommand");
    return (UDialogueScriptEventExplicitCameraShotCommand*)res;
}
