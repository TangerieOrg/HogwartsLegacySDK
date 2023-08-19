#include "FSceneRigParameterBinding_Vector.hpp"
#include "UVectorProvider.hpp"
#include "UVector_SceneRigParameter.hpp"
UVector_SceneRigParameter* UVector_SceneRigParameter::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.Vector_SceneRigParameter");
    return (UVector_SceneRigParameter*)res;
}
