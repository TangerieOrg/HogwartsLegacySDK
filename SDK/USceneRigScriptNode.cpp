#include "UObject.hpp"
#include "USceneRigScriptNode.hpp"
USceneRigScriptNode* USceneRigScriptNode::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneRigScriptNode");
    return (USceneRigScriptNode*)res;
}
