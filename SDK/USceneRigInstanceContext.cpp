#include "FSceneParameterChangeRequest.hpp"
#include "FSceneRigParameters.hpp"
#include "ULevelStreaming.hpp"
#include "USceneRigInstanceContext.hpp"
#include "UTimeRigInstanceContext.hpp"
USceneRigInstanceContext* USceneRigInstanceContext::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneRigInstanceContext");
    return (USceneRigInstanceContext*)res;
}
