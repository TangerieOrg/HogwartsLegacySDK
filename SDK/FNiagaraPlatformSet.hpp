#pragma once
#include <cstdint>
#include "FNiagaraDeviceProfileStateEntry.hpp"
#include "FNiagaraPlatformSetCVarCondition.hpp"
#pragma pack(push, 1)
struct FNiagaraPlatformSet {
    int32_t QualityLevelMask; // 0x0
    char pad_4[0x4];
    TArray<FNiagaraDeviceProfileStateEntry> DeviceProfileStates; // 0x8
    TArray<FNiagaraPlatformSetCVarCondition> CVarConditions; // 0x18
    char pad_28[0x8];
}; // Size: 0x30
#pragma pack(pop)
