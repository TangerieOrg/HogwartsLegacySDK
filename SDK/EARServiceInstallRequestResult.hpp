#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EARServiceInstallRequestResult : uint8_t {
    Installed = 0,
    DeviceNotCompatible = 1,
    UserDeclinedInstallation = 2,
    FatalError = 3,
    EARServiceInstallRequestResult_MAX = 4,
};
#pragma pack(pop)
