#include "USceneActionState_GameAiOptions.hpp"
#include "USceneRigActionState.hpp"
USceneActionState_GameAiOptions* USceneActionState_GameAiOptions::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionState_GameAiOptions");
    return (USceneActionState_GameAiOptions*)res;
}
