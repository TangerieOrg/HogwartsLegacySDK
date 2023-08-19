#pragma once
#include <cstdint>
#include "USceneAction_LumosDynamicScalability.hpp"
class ULumosScalabilityOverrideBase;
#pragma pack(push, 1)
class USceneAction_LumosDynamicScalabilityOverride : public USceneAction_LumosDynamicScalability {
public:
    ULumosScalabilityOverrideBase* ScalabilityOverride; // 0x88
    static USceneAction_LumosDynamicScalabilityOverride* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
