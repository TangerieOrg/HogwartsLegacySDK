#include "FSceneRigParameterBinding_Float.hpp"
#include "UFloatProvider.hpp"
#include "UFloat_SceneRigParameter.hpp"
UFloat_SceneRigParameter* UFloat_SceneRigParameter::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.Float_SceneRigParameter");
    return (UFloat_SceneRigParameter*)res;
}
