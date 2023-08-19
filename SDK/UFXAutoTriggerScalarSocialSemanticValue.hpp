#pragma once
#include <cstdint>
#include "SocialSemanticIDs.hpp"
#include "UFXAutoTriggerScalar.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerScalarSocialSemanticValue : public UFXAutoTriggerScalar {
public:
    SocialSemanticIDs SemanticID; // 0x28
    char pad_29[0x7];
    static UFXAutoTriggerScalarSocialSemanticValue* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
