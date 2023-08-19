#pragma once
#include <cstdint>
#include "UNPC_MobilityChoice.hpp"
#pragma pack(push, 1)
class URunAt_MobilityChoice : public UNPC_MobilityChoice {
public:
    float ChangeDist; // 0x28
    char pad_2c[0x4];
    static URunAt_MobilityChoice* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
