#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UBlendSpaceInputProvider.hpp"
#pragma pack(push, 1)
class UBlendSpaceInput_Direct : public UBlendSpaceInputProvider {
public:
    FVector Parameters; // 0x28
    char pad_34[0x4];
    static UBlendSpaceInput_Direct* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
