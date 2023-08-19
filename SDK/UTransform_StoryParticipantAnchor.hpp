#pragma once
#include <cstdint>
#include "UTransformProvider.hpp"
#pragma pack(push, 1)
class UTransform_StoryParticipantAnchor : public UTransformProvider {
public:
    int32_t ParticipantChannel; // 0x28
    char pad_2c[0x4];
    static UTransform_StoryParticipantAnchor* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
