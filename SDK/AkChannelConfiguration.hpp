#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class AkChannelConfiguration : uint8_t {
    Ak_Parent = 0,
    Ak_MainMix = 1,
    Ak_Passthrough = 2,
    Ak_LFE = 3,
    AK_Audio_Objects = 4,
    Ak_1_0 = 5,
    Ak_2_0 = 6,
    Ak_2_1 = 7,
    Ak_3_0 = 8,
    Ak_3_1 = 9,
    Ak_4_0 = 10,
    Ak_4_1 = 11,
    Ak_5_0 = 12,
    Ak_5_1 = 13,
    Ak_7_1 = 14,
    Ak_5_1_2 = 15,
    Ak_7_1_2 = 16,
    Ak_7_1_4 = 17,
    Ak_Auro_9_1 = 18,
    Ak_Auro_10_1 = 19,
    Ak_Auro_11_1 = 20,
    Ak_Auro_13_1 = 21,
    Ak_Ambisonics_1st_order = 22,
    Ak_Ambisonics_2nd_order = 23,
    Ak_Ambisonics_3rd_order = 24,
    Ak_Ambisonics_4th_order = 25,
    Ak_Ambisonics_5th_order = 26,
    AkChannelConfiguration_MAX = 27,
};
#pragma pack(pop)
