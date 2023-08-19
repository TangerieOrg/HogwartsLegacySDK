#pragma once
#include <cstdint>
#include "FVector2D.hpp"
#include "SocialSemanticIDs.hpp"
#include "UFXAutoTriggerScalar.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerScalarSocialSemanticRemap : public UFXAutoTriggerScalar {
public:
    SocialSemanticIDs SemanticID; // 0x28
    char pad_29[0x3];
    FVector2D SemanticInputStrength; // 0x2c
    FVector2D OutputStrength; // 0x34
    char pad_3c[0x4];
    static UFXAutoTriggerScalarSocialSemanticRemap* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
