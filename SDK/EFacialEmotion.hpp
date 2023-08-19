#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EFacialEmotion : uint8_t {
    NONE = 0,
    ALARM = 1,
    AMUSEMENT = 2,
    ANGRY = 3,
    ANGUISH = 4,
    ANNOYANCE = 5,
    ANTICIPATION = 6,
    ANXIETY = 7,
    CONFUSED = 8,
    DELIGHT = 9,
    DISGUST = 10,
    FEAR = 11,
    HAPPY = 12,
    IMPRESSED = 13,
    NEUTRAL = 14,
    PACIFY = 15,
    SAD = 16,
    SICK = 17,
    SLEEP = 18,
    SURPRISE = 19,
    TRUST = 20,
    VALOR = 21,
    MAX = 22,
};
#pragma pack(pop)
