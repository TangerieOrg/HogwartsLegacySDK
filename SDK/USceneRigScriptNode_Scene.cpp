#include "USceneRigScriptNode.hpp"
#include "USceneRigScriptNode_Scene.hpp"
USceneRigScriptNode_Scene* USceneRigScriptNode_Scene::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneRigScriptNode_Scene");
    return (USceneRigScriptNode_Scene*)res;
}
