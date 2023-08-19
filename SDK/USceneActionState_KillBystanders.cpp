#include "USceneActionState_KillBystanders.hpp"
#include "USceneRigObjectActionState.hpp"
USceneActionState_KillBystanders* USceneActionState_KillBystanders::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionState_KillBystanders");
    return (USceneActionState_KillBystanders*)res;
}
