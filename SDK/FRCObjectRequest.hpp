#pragma once
#include <cstdint>
#include "ERCAccess.hpp"
#include "FRCRequest.hpp"
#pragma pack(push, 1)
struct FRCObjectRequest : public FRCRequest {
    FString ObjectPath; // 0x68
    FString PropertyName; // 0x78
    bool ResetToDefault; // 0x88
    bool GenerateTransaction; // 0x89
    ERCAccess Access; // 0x8a
    char pad_8b[0x5];
}; // Size: 0x90
#pragma pack(pop)
