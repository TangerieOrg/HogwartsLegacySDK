#pragma once
#include <cstdint>
#include "FMaterialPermuterLoadTriggerProperty.hpp"
#include "UMaterialPermuterDynamicTrigger.hpp"
#pragma pack(push, 1)
class UMaterialPermuterDynamicTriggerNamed : public UMaterialPermuterDynamicTrigger {
public:
    FMaterialPermuterLoadTriggerProperty Trigger; // 0x28
    static UMaterialPermuterDynamicTriggerNamed* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
