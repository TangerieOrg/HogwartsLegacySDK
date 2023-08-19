#include "USceneActionState_PlaySceneRig.hpp"
#include "USceneRigActionState.hpp"
USceneActionState_PlaySceneRig* USceneActionState_PlaySceneRig::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneActionState_PlaySceneRig");
    return (USceneActionState_PlaySceneRig*)res;
}
