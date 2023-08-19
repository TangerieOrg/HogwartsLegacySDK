#include "USceneActionState_LumosDynamicScalability.hpp"
#include "USceneRigActionState.hpp"
USceneActionState_LumosDynamicScalability* USceneActionState_LumosDynamicScalability::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionState_LumosDynamicScalability");
    return (USceneActionState_LumosDynamicScalability*)res;
}
