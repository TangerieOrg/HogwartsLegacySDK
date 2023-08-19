#include "UObject.hpp"
#include "USceneRigScript.hpp"
#include "USceneRigScriptNode.hpp"
USceneRigScript* USceneRigScript::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneRigScript");
    return (USceneRigScript*)res;
}
