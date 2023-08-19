#include "UTransformProvider.hpp"
#include "UTransform_SceneRigActor.hpp"
UTransform_SceneRigActor* UTransform_SceneRigActor::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.Transform_SceneRigActor");
    return (UTransform_SceneRigActor*)res;
}
