#pragma once
#include <cstdint>
#include "ERenderSettingsBlendDomainConsoleLienMode.hpp"
#include "FBlendDomain.hpp"
#include "FConsoleVariableLienEntry.hpp"
#pragma pack(push, 1)
struct FRenderSettingsBlendDomainConsoleLien {
    FBlendDomain BlendDomain; // 0x0
    bool bOnlyAfterBeginPlay; // 0x38
    ERenderSettingsBlendDomainConsoleLienMode Mode; // 0x39
    char pad_3a[0x6];
    TArray<FConsoleVariableLienEntry> ConsoleVariables; // 0x40
}; // Size: 0x50
#pragma pack(pop)
