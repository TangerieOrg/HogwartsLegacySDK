#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EAcknowledgementSpeakerType : uint8_t {
    ANY = 0,
    COMPANION = 1,
    DEEK = 2,
    ENEMY = 3,
    NONENEMY = 4,
    NONE = 5,
    PLAYER = 6,
    VENDOR = 7,
    COUNT = 8,
    EAcknowledgementSpeakerType_MAX = 9,
};
#pragma pack(pop)
