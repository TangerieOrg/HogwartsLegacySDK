#pragma once
#include <cstdint>
#include "FRCRequest.hpp"
#pragma pack(push, 1)
struct FRCWebSocketPresetRegisterBody : public FRCRequest {
    FString PresetName; // 0x68
    bool IgnoreRemoteChanges; // 0x78
    char pad_79[0x7];
}; // Size: 0x80
#pragma pack(pop)
