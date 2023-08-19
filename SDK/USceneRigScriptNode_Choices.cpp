#include "FSceneRigScriptChoice.hpp"
#include "USceneRigScriptNode.hpp"
#include "USceneRigScriptNode_Choices.hpp"
USceneRigScriptNode_Choices* USceneRigScriptNode_Choices::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneRigScriptNode_Choices");
    return (USceneRigScriptNode_Choices*)res;
}
