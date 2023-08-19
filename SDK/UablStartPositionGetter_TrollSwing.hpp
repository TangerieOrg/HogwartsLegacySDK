#pragma once
#include <cstdint>
#include "UAblStartPositionGetter.hpp"
#pragma pack(push, 1)
class UablStartPositionGetter_TrollSwing : public UAblStartPositionGetter {
public:
    float ForehandStartTime; // 0x28
    float BackhandStartTime; // 0x2c
    static UablStartPositionGetter_TrollSwing* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
