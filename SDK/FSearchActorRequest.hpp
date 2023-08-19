#pragma once
#include <cstdint>
#include "FRCRequest.hpp"
#pragma pack(push, 1)
struct FSearchActorRequest : public FRCRequest {
    FString Query; // 0x68
    FString Class; // 0x78
    int32_t Limit; // 0x88
    char pad_8c[0x4];
}; // Size: 0x90
#pragma pack(pop)
