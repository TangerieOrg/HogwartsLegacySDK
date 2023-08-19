#pragma once
#include <cstdint>
#include "EMaterialPermuterLoadType.hpp"
#include "EMaterialPermuterLoadingPriority.hpp"
#include "FMaterialPermuterLoadingStrategyTrigger.hpp"
#pragma pack(push, 1)
struct FMaterialPermuterLoadingStrategy {
    FMaterialPermuterLoadingStrategyTrigger Trigger; // 0x0
    EMaterialPermuterLoadType Type; // 0xc
    EMaterialPermuterLoadingPriority Priority; // 0xd
    char pad_e[0x2];
    float PurgeTime; // 0x10
}; // Size: 0x14
#pragma pack(pop)
