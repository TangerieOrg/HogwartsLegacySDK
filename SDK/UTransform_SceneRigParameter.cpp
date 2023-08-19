#include "FSceneRigParameterBinding_Transform.hpp"
#include "UTransformProvider.hpp"
#include "UTransform_SceneRigParameter.hpp"
UTransform_SceneRigParameter* UTransform_SceneRigParameter::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.Transform_SceneRigParameter");
    return (UTransform_SceneRigParameter*)res;
}
