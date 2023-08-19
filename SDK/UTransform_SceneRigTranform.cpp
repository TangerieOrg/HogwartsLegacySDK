#include "USceneAction_Transform.hpp"
#include "UTransformProvider.hpp"
#include "UTransform_SceneRigTranform.hpp"
UTransform_SceneRigTranform* UTransform_SceneRigTranform::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.Transform_SceneRigTranform");
    return (UTransform_SceneRigTranform*)res;
}
