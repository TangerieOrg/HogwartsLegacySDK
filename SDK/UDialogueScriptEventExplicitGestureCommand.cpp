#include "ECommandForType.hpp"
#include "UDialogueScriptEventCommand.hpp"
#include "UDialogueScriptEventExplicitGestureCommand.hpp"
#include "UNameProvider.hpp"
UDialogueScriptEventExplicitGestureCommand* UDialogueScriptEventExplicitGestureCommand::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.DialogueScriptEventExplicitGestureCommand");
    return (UDialogueScriptEventExplicitGestureCommand*)res;
}
