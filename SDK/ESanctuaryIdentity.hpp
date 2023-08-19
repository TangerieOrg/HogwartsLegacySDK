#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESanctuaryIdentity : uint8_t {
    Default = 0,
    Potioneer = 1,
    Herbologist = 2,
    Magizoologist = 3,
    DarkWizard = 4,
    NUM = 5,
    ESanctuaryIdentity_MAX = 6,
};
#pragma pack(pop)
