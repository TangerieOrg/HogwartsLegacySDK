#pragma once
#include <cstdint>
#include "FAnimNode_PoseBlendNode.hpp"
class UCustomizableCharacterComponent;
#pragma pack(push, 1)
struct FAnimNode_CustomizableCharacterFacialPoseBlendNode : public FAnimNode_PoseBlendNode {
    char pad_a0[0x8];
    UCustomizableCharacterComponent* CustomizableCharacterComponent; // 0xa8
}; // Size: 0xb0
#pragma pack(pop)
