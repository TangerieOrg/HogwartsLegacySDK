#pragma once
#include <cstdint>
#include "FRCRequest.hpp"
#pragma pack(push, 1)
struct FRCWebSocketRequest : public FRCRequest {
    FString MessageName; // 0x68
    int32_t ID; // 0x78
    char pad_7c[0x4];
}; // Size: 0x80
#pragma pack(pop)
