#include "FSceneRigStage_VectorReference.hpp"
#include "UVectorProvider.hpp"
#include "UVector_SceneRigStageParameter.hpp"
UVector_SceneRigStageParameter* UVector_SceneRigStageParameter::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.Vector_SceneRigStageParameter");
    return (UVector_SceneRigStageParameter*)res;
}
