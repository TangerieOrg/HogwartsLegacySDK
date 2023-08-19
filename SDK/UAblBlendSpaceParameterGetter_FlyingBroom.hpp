#pragma once
#include <cstdint>
#include "UAblBlendSpaceParameterGetter.hpp"
#pragma pack(push, 1)
class UAblBlendSpaceParameterGetter_FlyingBroom : public UAblBlendSpaceParameterGetter {
public:
    bool bUseUpAndDown; // 0x28
    char pad_29[0x7];
    static UAblBlendSpaceParameterGetter_FlyingBroom* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
