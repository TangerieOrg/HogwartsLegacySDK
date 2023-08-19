#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EARServicePermissionRequestResult : uint8_t {
    Granted = 0,
    Denied = 1,
    EARServicePermissionRequestResult_MAX = 2,
};
#pragma pack(pop)
