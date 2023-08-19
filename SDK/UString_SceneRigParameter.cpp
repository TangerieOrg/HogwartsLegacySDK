#include "FSceneRigParameterBinding_FString.hpp"
#include "UStringProvider.hpp"
#include "UString_SceneRigParameter.hpp"
UString_SceneRigParameter* UString_SceneRigParameter::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.String_SceneRigParameter");
    return (UString_SceneRigParameter*)res;
}
