#include "USceneActionState_GameOptions.hpp"
#include "USceneRigActionState.hpp"
USceneActionState_GameOptions* USceneActionState_GameOptions::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionState_GameOptions");
    return (USceneActionState_GameOptions*)res;
}
