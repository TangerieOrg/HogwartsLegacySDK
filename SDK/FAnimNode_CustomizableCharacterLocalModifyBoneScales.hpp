#pragma once
#include <cstdint>
#include "FAnimNode_Base.hpp"
#include "FPoseLink.hpp"
class UCustomizableCharacterComponent;
#pragma pack(push, 1)
struct FAnimNode_CustomizableCharacterLocalModifyBoneScales : public FAnimNode_Base {
    FPoseLink BasePose; // 0x10
    int32_t LODThreshold; // 0x20
    char pad_24[0x4];
    UCustomizableCharacterComponent* CustomizableCharacterComponent; // 0x28
    char pad_30[0x30];
}; // Size: 0x60
#pragma pack(pop)
