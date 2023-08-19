#include "USceneActionState_PlayerReset.hpp"
#include "USceneRigActionState.hpp"
USceneActionState_PlayerReset* USceneActionState_PlayerReset::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionState_PlayerReset");
    return (USceneActionState_PlayerReset*)res;
}
