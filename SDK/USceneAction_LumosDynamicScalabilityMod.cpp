#include "ULumosScalabilityModifyBase.hpp"
#include "USceneAction_LumosDynamicScalability.hpp"
#include "USceneAction_LumosDynamicScalabilityMod.hpp"
USceneAction_LumosDynamicScalabilityMod* USceneAction_LumosDynamicScalabilityMod::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_LumosDynamicScalabilityMod");
    return (USceneAction_LumosDynamicScalabilityMod*)res;
}
