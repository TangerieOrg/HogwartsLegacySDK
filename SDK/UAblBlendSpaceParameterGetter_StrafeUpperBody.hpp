#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UAblBlendSpaceParameterGetter.hpp"
#pragma pack(push, 1)
class UAblBlendSpaceParameterGetter_StrafeUpperBody : public UAblBlendSpaceParameterGetter {
public:
    FName HipBoneName; // 0x28
    FVector HipForwardLocal; // 0x30
    char pad_3c[0x4];
    static UAblBlendSpaceParameterGetter_StrafeUpperBody* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
