#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EInstallManagerState : uint8_t {
    Idle = 0,
    Installing = 1,
    InstallAvailable = 2,
    EInstallManagerState_MAX = 3,
};
#pragma pack(pop)
