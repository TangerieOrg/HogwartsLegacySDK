#include "FSceneRigStage_StringReference.hpp"
#include "UStringProvider.hpp"
#include "UString_SceneRigStageParameter.hpp"
UString_SceneRigStageParameter* UString_SceneRigStageParameter::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.String_SceneRigStageParameter");
    return (UString_SceneRigStageParameter*)res;
}
