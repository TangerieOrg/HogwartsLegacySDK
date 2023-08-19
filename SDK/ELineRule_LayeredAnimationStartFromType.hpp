#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ELineRule_LayeredAnimationStartFromType : uint8_t {
    DialogueLineStart = 0,
    LipsyncPause = 1,
    LipsyncMe = 2,
    LipsyncYou = 3,
    LipsyncQuickly = 4,
    LipsyncAffirmative = 5,
    LipsyncNegative = 6,
    LipsyncHere = 7,
    LipsyncThere = 8,
    LipsyncSuperlative = 9,
    LipsyncGreet = 10,
    LipsyncLaugh = 11,
    LipsyncThink = 12,
    ToneChanges = 13,
    ToneLowToHigh = 14,
    ToneHighToLow = 15,
    ELineRule_MAX = 16,
};
#pragma pack(pop)
