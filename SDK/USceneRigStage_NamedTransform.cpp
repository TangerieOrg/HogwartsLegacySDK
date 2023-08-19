#include "FSceneRigStage_Transform.hpp"
#include "USceneRigStage_NamedParameter.hpp"
#include "USceneRigStage_NamedTransform.hpp"
USceneRigStage_NamedTransform* USceneRigStage_NamedTransform::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneRigStage_NamedTransform");
    return (USceneRigStage_NamedTransform*)res;
}
