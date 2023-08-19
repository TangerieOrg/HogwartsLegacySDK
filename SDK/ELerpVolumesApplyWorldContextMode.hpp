#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ELerpVolumesApplyWorldContextMode {
    SetRTPCs = 0,
    SendHermes = 1,
    SetNPCs = 2,
    SetMPCs = 3,
    ELerpVolumesApplyWorldContextMode_MAX = 4,
};
#pragma pack(pop)
