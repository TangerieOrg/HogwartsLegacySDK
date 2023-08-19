#include "EPerformTaskFinishAction.hpp"
#include "USceneAction_WaitForPlayer.hpp"
#include "USceneRigObjectActionBase.hpp"
USceneAction_WaitForPlayer* USceneAction_WaitForPlayer::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_WaitForPlayer");
    return (USceneAction_WaitForPlayer*)res;
}
