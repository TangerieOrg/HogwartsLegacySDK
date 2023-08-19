#include "ECommandForType.hpp"
#include "UDialogueScriptEventCommand.hpp"
#include "UDialogueScriptEventExplicitPoseGroupCommand.hpp"
#include "UNameProvider.hpp"
UDialogueScriptEventExplicitPoseGroupCommand* UDialogueScriptEventExplicitPoseGroupCommand::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.DialogueScriptEventExplicitPoseGroupCommand");
    return (UDialogueScriptEventExplicitPoseGroupCommand*)res;
}
