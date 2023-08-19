#pragma once
#include <cstdint>
#include "FAnimNode_Inertialization.hpp"
class UAnimationComponent;
#pragma pack(push, 1)
struct FAnimNode_AvaInertialization : public FAnimNode_Inertialization {
    UAnimationComponent* AnimComponent; // 0x70
    char pad_78[0x8];
}; // Size: 0x80
#pragma pack(pop)
