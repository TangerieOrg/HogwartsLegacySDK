#pragma once
#include <cstdint>
#include "FRCRequest.hpp"
#pragma pack(push, 1)
struct FRCRequestWrapper : public FRCRequest {
    FString URL; // 0x68
    FName Verb; // 0x78
    int32_t RequestID; // 0x80
    char pad_84[0x4];
}; // Size: 0x88
#pragma pack(pop)
