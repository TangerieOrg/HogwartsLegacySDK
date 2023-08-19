#include "FSceneRigStage_IntReference.hpp"
#include "UIntProvider.hpp"
#include "UInt_SceneRigStageParameter.hpp"
UInt_SceneRigStageParameter* UInt_SceneRigStageParameter::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.Int_SceneRigStageParameter");
    return (UInt_SceneRigStageParameter*)res;
}
