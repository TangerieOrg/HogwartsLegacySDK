#include "USceneActionState_SuspendEnemies.hpp"
#include "USceneRigActionState.hpp"
USceneActionState_SuspendEnemies* USceneActionState_SuspendEnemies::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionState_SuspendEnemies");
    return (USceneActionState_SuspendEnemies*)res;
}
