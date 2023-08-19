#pragma once
#include <cstdint>
#include "UAblStartPositionGetter.hpp"
#pragma pack(push, 1)
class UAblStartPositionGetter_Protego : public UAblStartPositionGetter {
public:
    int32_t ImpactFrame; // 0x28
    char pad_2c[0x4];
    static UAblStartPositionGetter_Protego* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
