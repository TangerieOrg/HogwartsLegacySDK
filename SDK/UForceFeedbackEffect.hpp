#pragma once
#include <cstdint>
#include "FForceFeedbackChannelDetails.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UForceFeedbackEffect : public UObject {
public:
    TArray<FForceFeedbackChannelDetails> ChannelDetails; // 0x28
    float Duration; // 0x38
    char pad_3c[0x4];
    static UForceFeedbackEffect* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
