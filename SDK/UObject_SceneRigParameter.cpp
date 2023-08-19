#include "FSceneRigParameterBinding_Object.hpp"
#include "UObjectProvider.hpp"
#include "UObject_SceneRigParameter.hpp"
UObject_SceneRigParameter* UObject_SceneRigParameter::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.Object_SceneRigParameter");
    return (UObject_SceneRigParameter*)res;
}
