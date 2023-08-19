#include "EPlayerPerceptionEnableDisable.hpp"
#include "UActorProvider.hpp"
#include "USceneAction_PlayerPerception.hpp"
#include "USceneRigActionBase.hpp"
USceneAction_PlayerPerception* USceneAction_PlayerPerception::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_PlayerPerception");
    return (USceneAction_PlayerPerception*)res;
}
