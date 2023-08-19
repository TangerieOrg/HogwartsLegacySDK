#pragma once
#include <cstdint>
#include "EBoneTranslationRetargetingMode\Type.hpp"
#pragma pack(push, 1)
struct FBoneNode {
    FName Name; // 0x0
    int32_t ParentIndex; // 0x8
    EBoneTranslationRetargetingMode::Type TranslationRetargetingMode; // 0xc
    char pad_d[0x3];
}; // Size: 0x10
#pragma pack(pop)
