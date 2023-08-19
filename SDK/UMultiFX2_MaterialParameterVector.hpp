#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UMultiFX2_MaterialParameterBase.hpp"
#pragma pack(push, 1)
class UMultiFX2_MaterialParameterVector : public UMultiFX2_MaterialParameterBase {
public:
    FVector VectorParameter; // 0x90
    char pad_9c[0x4];
    static UMultiFX2_MaterialParameterVector* StaticClass();
}; // Size: 0xa0
#pragma pack(pop)
