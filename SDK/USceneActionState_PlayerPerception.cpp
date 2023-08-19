#include "USceneActionState_PlayerPerception.hpp"
#include "USceneRigActionState.hpp"
USceneActionState_PlayerPerception* USceneActionState_PlayerPerception::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionState_PlayerPerception");
    return (USceneActionState_PlayerPerception*)res;
}
