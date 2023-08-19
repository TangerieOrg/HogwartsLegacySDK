#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EFeatureInstallState : uint8_t {
    NotSupported = 0,
    NotInstalled = 1,
    PartiallyInstalled = 2,
    Installing = 3,
    Installed = 4,
    EFeatureInstallState_MAX = 5,
};
#pragma pack(pop)
