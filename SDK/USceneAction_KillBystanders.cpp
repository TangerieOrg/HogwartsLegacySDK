#include "USceneAction_KillBystanders.hpp"
#include "USceneRigObjectActionBase.hpp"
USceneAction_KillBystanders* USceneAction_KillBystanders::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_KillBystanders");
    return (USceneAction_KillBystanders*)res;
}
