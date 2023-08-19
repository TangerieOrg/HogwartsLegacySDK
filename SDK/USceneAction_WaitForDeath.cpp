#include "USceneAction_WaitForDeath.hpp"
#include "USceneRigObjectActionBase.hpp"
USceneAction_WaitForDeath* USceneAction_WaitForDeath::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_WaitForDeath");
    return (USceneAction_WaitForDeath*)res;
}
