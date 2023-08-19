#include "FSceneRigParameterBinding_Object.hpp"
#include "UActorProvider.hpp"
#include "UActor_SceneRigParameter.hpp"
UActor_SceneRigParameter* UActor_SceneRigParameter::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.Actor_SceneRigParameter");
    return (UActor_SceneRigParameter*)res;
}
