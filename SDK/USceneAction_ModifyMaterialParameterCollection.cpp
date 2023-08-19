#include "UMaterialParameterCollection.hpp"
#include "USceneAction_ModifyMaterialParameterCollection.hpp"
#include "USceneRigActionBase.hpp"
USceneAction_ModifyMaterialParameterCollection* USceneAction_ModifyMaterialParameterCollection::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneAction_ModifyMaterialParameterCollection");
    return (USceneAction_ModifyMaterialParameterCollection*)res;
}
