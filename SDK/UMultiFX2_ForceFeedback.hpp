#pragma once
#include <cstdint>
#include "UMultiFX2_Filtered.hpp"
class UForceFeedbackEffect;
#pragma pack(push, 1)
class UMultiFX2_ForceFeedback : public UMultiFX2_Filtered {
public:
    UForceFeedbackEffect* ForceFeedbackEffect; // 0x68
    float InnerRadius; // 0x70
    float OuterRadius; // 0x74
    static UMultiFX2_ForceFeedback* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
