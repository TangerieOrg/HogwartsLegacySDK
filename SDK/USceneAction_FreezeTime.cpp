#include "USceneAction_FreezeTime.hpp"
#include "USceneRigActionBase.hpp"
USceneAction_FreezeTime* USceneAction_FreezeTime::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_FreezeTime");
    return (USceneAction_FreezeTime*)res;
}
