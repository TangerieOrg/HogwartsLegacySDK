#include "FSceneRigScriptBranch.hpp"
#include "USceneRigScriptNode.hpp"
#include "USceneRigScriptNode_Branch.hpp"
USceneRigScriptNode_Branch* USceneRigScriptNode_Branch::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneRigScriptNode_Branch");
    return (USceneRigScriptNode_Branch*)res;
}
