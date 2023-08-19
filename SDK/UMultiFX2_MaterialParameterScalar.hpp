#pragma once
#include <cstdint>
#include "UMultiFX2_MaterialParameterBase.hpp"
#pragma pack(push, 1)
class UMultiFX2_MaterialParameterScalar : public UMultiFX2_MaterialParameterBase {
public:
    float ScalarParameter; // 0x90
    char pad_94[0x4];
    static UMultiFX2_MaterialParameterScalar* StaticClass();
}; // Size: 0x98
#pragma pack(pop)
