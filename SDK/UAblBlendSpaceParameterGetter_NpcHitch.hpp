#pragma once
#include <cstdint>
#include "UAblBlendSpaceParameterGetter.hpp"
#pragma pack(push, 1)
class UAblBlendSpaceParameterGetter_NpcHitch : public UAblBlendSpaceParameterGetter {
public:
    char pad_28[0x8];
    static UAblBlendSpaceParameterGetter_NpcHitch* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
