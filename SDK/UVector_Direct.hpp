#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UVectorProvider.hpp"
#pragma pack(push, 1)
class UVector_Direct : public UVectorProvider {
public:
    FVector Value; // 0x28
    char pad_34[0x4];
    static UVector_Direct* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
