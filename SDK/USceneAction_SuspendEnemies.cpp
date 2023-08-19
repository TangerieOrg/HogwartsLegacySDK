#include "FActionParameter_FString.hpp"
#include "USceneAction_SuspendEnemies.hpp"
#include "USceneRigActionBase.hpp"
USceneAction_SuspendEnemies* USceneAction_SuspendEnemies::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_SuspendEnemies");
    return (USceneAction_SuspendEnemies*)res;
}
