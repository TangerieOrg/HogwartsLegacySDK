#include "ULumosScalabilityOverrideBase.hpp"
#include "USceneAction_LumosDynamicScalability.hpp"
#include "USceneAction_LumosDynamicScalabilityOverride.hpp"
USceneAction_LumosDynamicScalabilityOverride* USceneAction_LumosDynamicScalabilityOverride::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_LumosDynamicScalabilityOverride");
    return (USceneAction_LumosDynamicScalabilityOverride*)res;
}
