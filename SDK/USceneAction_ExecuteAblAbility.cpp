#include "UActorProvider.hpp"
#include "UClass.hpp"
#include "USceneAction_ExecuteAblAbility.hpp"
#include "USceneRigObjectActionBase.hpp"
USceneAction_ExecuteAblAbility* USceneAction_ExecuteAblAbility::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_ExecuteAblAbility");
    return (USceneAction_ExecuteAblAbility*)res;
}
