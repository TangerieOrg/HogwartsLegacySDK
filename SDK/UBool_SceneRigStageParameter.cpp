#include "FSceneRigStage_BoolReference.hpp"
#include "UBoolProvider.hpp"
#include "UBool_SceneRigStageParameter.hpp"
UBool_SceneRigStageParameter* UBool_SceneRigStageParameter::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.Bool_SceneRigStageParameter");
    return (UBool_SceneRigStageParameter*)res;
}
