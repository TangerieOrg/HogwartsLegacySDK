#pragma once
#include <cstdint>
#include "UAblBlendSpaceParameterGetter.hpp"
#pragma pack(push, 1)
class UAblBlendSpaceParameterGetter_Rotation : public UAblBlendSpaceParameterGetter {
public:
    bool bUseAttachParent; // 0x28
    char pad_29[0x7];
    static UAblBlendSpaceParameterGetter_Rotation* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
