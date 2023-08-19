#include "FSceneRigParameterBinding_Bool.hpp"
#include "UBoolProvider.hpp"
#include "UBool_SceneRigParameter.hpp"
UBool_SceneRigParameter* UBool_SceneRigParameter::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.Bool_SceneRigParameter");
    return (UBool_SceneRigParameter*)res;
}
