#include "USceneActionState_ModifyMaterialParameterCollection.hpp"
#include "USceneRigActionState.hpp"
USceneActionState_ModifyMaterialParameterCollection* USceneActionState_ModifyMaterialParameterCollection::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneActionState_ModifyMaterialParameterCollection");
    return (USceneActionState_ModifyMaterialParameterCollection*)res;
}
