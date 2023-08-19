#include "USceneRigScriptNode.hpp"
#include "USceneRigScriptNode_End.hpp"
USceneRigScriptNode_End* USceneRigScriptNode_End::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneRigScriptNode_End");
    return (USceneRigScriptNode_End*)res;
}
