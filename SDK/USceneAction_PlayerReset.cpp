#include "ECameraStackResetType.hpp"
#include "USceneAction_PlayerReset.hpp"
#include "USceneRigActionBase.hpp"
#include "UTransformProvider.hpp"
USceneAction_PlayerReset* USceneAction_PlayerReset::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_PlayerReset");
    return (USceneAction_PlayerReset*)res;
}
