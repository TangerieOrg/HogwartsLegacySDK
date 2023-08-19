#include "USceneActionState_Blueprint.hpp"
#include "USceneAction_Blueprint.hpp"
#include "USceneRigObjectActionState.hpp"
USceneActionState_Blueprint* USceneActionState_Blueprint::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneActionState_Blueprint");
    return (USceneActionState_Blueprint*)res;
}
