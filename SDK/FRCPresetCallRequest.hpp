#pragma once
#include <cstdint>
#include "FRCRequest.hpp"
#pragma pack(push, 1)
struct FRCPresetCallRequest : public FRCRequest {
    bool GenerateTransaction; // 0x68
    char pad_69[0x7];
}; // Size: 0x70
#pragma pack(pop)
