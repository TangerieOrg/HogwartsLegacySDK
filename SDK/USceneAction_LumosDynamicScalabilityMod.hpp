#pragma once
#include <cstdint>
#include "USceneAction_LumosDynamicScalability.hpp"
class ULumosScalabilityModifyBase;
#pragma pack(push, 1)
class USceneAction_LumosDynamicScalabilityMod : public USceneAction_LumosDynamicScalability {
public:
    ULumosScalabilityModifyBase* ScalabilityMod; // 0x88
    static USceneAction_LumosDynamicScalabilityMod* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
