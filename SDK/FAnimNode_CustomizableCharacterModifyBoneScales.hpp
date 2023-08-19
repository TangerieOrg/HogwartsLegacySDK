#pragma once
#include <cstdint>
#include "FAnimNode_SkeletalControlBase.hpp"
class UCustomizableCharacterComponent;
#pragma pack(push, 1)
struct FAnimNode_CustomizableCharacterModifyBoneScales : public FAnimNode_SkeletalControlBase {
    UCustomizableCharacterComponent* CustomizableCharacterComponent; // 0xc8
    char pad_d0[0x30];
}; // Size: 0x100
#pragma pack(pop)
