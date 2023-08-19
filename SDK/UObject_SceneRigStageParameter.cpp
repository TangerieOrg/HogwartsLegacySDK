#include "FSceneRigStage_ObjectReference.hpp"
#include "UObjectProvider.hpp"
#include "UObject_SceneRigStageParameter.hpp"
UObject_SceneRigStageParameter* UObject_SceneRigStageParameter::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.Object_SceneRigStageParameter");
    return (UObject_SceneRigStageParameter*)res;
}
