#pragma once
#include <cstdint>
#include "AWorldBaseHeightBase.hpp"
#pragma pack(push, 1)
class AWorldBaseHeightShape : public AWorldBaseHeightBase {
public:
    float BlendRadiusPercentage; // 0x298
    char pad_29c[0x4];
    static AWorldBaseHeightShape* StaticClass();
}; // Size: 0x2a0
#pragma pack(pop)
