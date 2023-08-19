#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EFT_FromType : uint8_t {
    EFT_FromType_Normal = 0,
    EFT_FromType_Map = 1,
    EFT_FromType_Door = 2,
    EFT_FromType_Mission = 3,
    EFT_FromType_Floo = 4,
    EFT_FromType_CrimeScene = 5,
    EFT_FromType_SceneAction = 6,
    EFT_FromType_MAX = 7,
};
#pragma pack(pop)
