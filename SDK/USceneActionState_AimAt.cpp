#include "USceneActionState_AimAt.hpp"
#include "USceneRigObjectActionState.hpp"
USceneActionState_AimAt* USceneActionState_AimAt::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneActionState_AimAt");
    return (USceneActionState_AimAt*)res;
}
