#pragma once
#include <cstdint>
#include "SocialSemanticIDs.hpp"
#include "UFXAutoTriggerBool.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerBoolSocialSemanticValue : public UFXAutoTriggerBool {
public:
    SocialSemanticIDs SemanticID; // 0x28
    char pad_29[0x3];
    int32_t Value; // 0x2c
    static UFXAutoTriggerBoolSocialSemanticValue* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
