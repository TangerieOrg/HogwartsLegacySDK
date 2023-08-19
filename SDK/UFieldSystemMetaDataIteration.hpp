#pragma once
#include <cstdint>
#include "UFieldSystemMetaData.hpp"
#pragma pack(push, 1)
class UFieldSystemMetaDataIteration : public UFieldSystemMetaData {
public:
    int32_t iterations; // 0xc8
    char pad_cc[0x4];
    static UFieldSystemMetaDataIteration* StaticClass();
    UFieldSystemMetaDataIteration* SetMetaDataIteration(int32_t iterations);
}; // Size: 0xd0
#pragma pack(pop)
