#include "USceneActionState_SkyState.hpp"
#include "USceneRigActionState.hpp"
USceneActionState_SkyState* USceneActionState_SkyState::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionState_SkyState");
    return (USceneActionState_SkyState*)res;
}
