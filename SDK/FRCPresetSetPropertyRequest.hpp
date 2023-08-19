#pragma once
#include <cstdint>
#include "FRCRequest.hpp"
#pragma pack(push, 1)
struct FRCPresetSetPropertyRequest : public FRCRequest {
    bool GenerateTransaction; // 0x68
    bool ResetToDefault; // 0x69
    char pad_6a[0x6];
}; // Size: 0x70
#pragma pack(pop)
