#pragma once
#include <cstdint>
#include "FRCPresetLayoutGroupDescription.hpp"
#pragma pack(push, 1)
struct FRCPresetDescription {
    FString Name; // 0x0
    FString Path; // 0x10
    FString ID; // 0x20
    TArray<FRCPresetLayoutGroupDescription> Groups; // 0x30
}; // Size: 0x40
#pragma pack(pop)
