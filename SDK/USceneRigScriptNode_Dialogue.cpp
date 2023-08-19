#include "UDialogueScriptCommand.hpp"
#include "USceneRigScriptNode.hpp"
#include "USceneRigScriptNode_Dialogue.hpp"
USceneRigScriptNode_Dialogue* USceneRigScriptNode_Dialogue::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneRigScriptNode_Dialogue");
    return (USceneRigScriptNode_Dialogue*)res;
}
