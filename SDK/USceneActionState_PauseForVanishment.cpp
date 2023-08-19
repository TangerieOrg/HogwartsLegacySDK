#include "USceneActionState_PauseForVanishment.hpp"
#include "USceneRigActionState.hpp"
USceneActionState_PauseForVanishment* USceneActionState_PauseForVanishment::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionState_PauseForVanishment");
    return (USceneActionState_PauseForVanishment*)res;
}
