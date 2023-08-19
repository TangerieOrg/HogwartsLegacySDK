#include "USceneRigScriptNode.hpp"
#include "USceneRigScriptNode_ChoicePreview.hpp"
USceneRigScriptNode_ChoicePreview* USceneRigScriptNode_ChoicePreview::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneRigScriptNode_ChoicePreview");
    return (USceneRigScriptNode_ChoicePreview*)res;
}
