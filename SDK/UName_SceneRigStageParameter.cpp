#include "FSceneRigStage_NameReference.hpp"
#include "UNameProvider.hpp"
#include "UName_SceneRigStageParameter.hpp"
UName_SceneRigStageParameter* UName_SceneRigStageParameter::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.Name_SceneRigStageParameter");
    return (UName_SceneRigStageParameter*)res;
}
