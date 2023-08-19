#include "FTransform.hpp"
#include "USceneActionState_AnimateCurves.hpp"
#include "USceneActionState_Transform.hpp"
USceneActionState_Transform* USceneActionState_Transform::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneActionState_Transform");
    return (USceneActionState_Transform*)res;
}
