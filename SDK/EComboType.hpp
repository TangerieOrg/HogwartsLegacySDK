#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EComboType : uint8_t {
    None = 0,
    Hit_Light = 1,
    Hit_Parry = 2,
    Hit_Heavy = 3,
    Hit_Heavy_2_Plus = 4,
    Hit_Depulso_Oppugno = 5,
    Hit_SendTarget = 6,
    Hit_Finisher = 7,
    ProtegoImpact = 8,
    EComboType_MAX = 9,
};
#pragma pack(pop)
