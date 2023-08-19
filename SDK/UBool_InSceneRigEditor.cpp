#include "UBoolProvider.hpp"
#include "UBool_InSceneRigEditor.hpp"
UBool_InSceneRigEditor* UBool_InSceneRigEditor::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.Bool_InSceneRigEditor");
    return (UBool_InSceneRigEditor*)res;
}
