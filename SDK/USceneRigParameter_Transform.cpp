#include "USceneRigParameter.hpp"
#include "USceneRigParameter_Transform.hpp"
#include "UTransformProvider.hpp"
USceneRigParameter_Transform* USceneRigParameter_Transform::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneRigParameter_Transform");
    return (USceneRigParameter_Transform*)res;
}
