#include "USceneAction_PauseForVanishment.hpp"
#include "USceneRigActionBase.hpp"
USceneAction_PauseForVanishment* USceneAction_PauseForVanishment::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_PauseForVanishment");
    return (USceneAction_PauseForVanishment*)res;
}
