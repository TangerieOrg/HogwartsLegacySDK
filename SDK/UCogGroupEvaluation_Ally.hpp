#pragma once
#include <cstdint>
#include "UCogGroupEvaluation.hpp"
#pragma pack(push, 1)
class UCogGroupEvaluation_Ally : public UCogGroupEvaluation {
public:
    bool bFailOnAllyInAdventureMode; // 0x30
    bool bFailOnNonAllyInSocialMode; // 0x31
    char pad_32[0x6];
    static UCogGroupEvaluation_Ally* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
