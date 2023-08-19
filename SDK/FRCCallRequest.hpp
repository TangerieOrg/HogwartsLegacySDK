#pragma once
#include <cstdint>
#include "FRCRequest.hpp"
#pragma pack(push, 1)
struct FRCCallRequest : public FRCRequest {
    FString ObjectPath; // 0x68
    FString FunctionName; // 0x78
    bool GenerateTransaction; // 0x88
    char pad_89[0x7];
}; // Size: 0x90
#pragma pack(pop)
