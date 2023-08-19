#include "USceneAction_LumosDynamicScalability.hpp"
#include "USceneRigActionBase.hpp"
USceneAction_LumosDynamicScalability* USceneAction_LumosDynamicScalability::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_LumosDynamicScalability");
    return (USceneAction_LumosDynamicScalability*)res;
}
