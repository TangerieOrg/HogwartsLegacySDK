#pragma once
#include <cstdint>
#include "FAblAnimation.hpp"
#include "FAnimNode_AssetPlayerBase.hpp"
#pragma pack(push, 1)
struct FAnimNode_AbilityAnimPlayer : public FAnimNode_AssetPlayerBase {
    FAblAnimation AblAnimation; // 0x38
}; // Size: 0xb0
#pragma pack(pop)
