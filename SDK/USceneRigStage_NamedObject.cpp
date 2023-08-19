#include "FSceneRigStage_Object.hpp"
#include "USceneRigStage_NamedObject.hpp"
#include "USceneRigStage_NamedParameter.hpp"
USceneRigStage_NamedObject* USceneRigStage_NamedObject::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneRigStage_NamedObject");
    return (USceneRigStage_NamedObject*)res;
}
