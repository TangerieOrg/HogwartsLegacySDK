#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EAvaAudioDialogueEmotionHint : uint8_t {
    DEH_None = 0,
    DEH_Alarm = 1,
    DEH_Amusement = 2,
    DEH_Angry = 3,
    DEH_Anguish = 4,
    DEH_Annoyance = 5,
    DEH_Anticipation = 6,
    DEH_Anxiety = 7,
    DEH_Confused = 8,
    DEH_Dead = 9,
    DEH_Delight = 10,
    DEH_Disgust = 11,
    DEH_Fear = 12,
    DEH_Happy = 13,
    DEH_Impressed = 14,
    DEH_Neutral = 15,
    DEH_Pacify = 16,
    DEH_Sad = 17,
    DEH_Sick = 18,
    DEH_Sleep = 19,
    DEH_Surprise = 20,
    DEH_Trust = 21,
    DEH_Valor = 22,
    DEH_MAX = 23,
};
#pragma pack(pop)
