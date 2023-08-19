#pragma once
#include <cstdint>
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UAblScaleCharacter : public UAblAbilityTask {
public:
    bool bUseDefaultMaleScale; // 0x70
    char pad_71[0x3];
    float Scale; // 0x74
    float BlendInTime; // 0x78
    float BlendOutTime; // 0x7c
    static UAblScaleCharacter* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
