#pragma once
#include <cstdint>
#include "UAblBlendSpaceParameterGetter.hpp"
#pragma pack(push, 1)
class UAblBlendSpaceParameterGetter_BodyLean2D : public UAblBlendSpaceParameterGetter {
public:
    float MinMaxForwardAcceleration; // 0x28
    float MinMaxSideAcceleration; // 0x2c
    float InterpAlphaX; // 0x30
    float InterpAlphaY; // 0x34
    char pad_38[0x18];
    static UAblBlendSpaceParameterGetter_BodyLean2D* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
