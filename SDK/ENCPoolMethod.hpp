#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENCPoolMethod : uint8_t {
    None = 0,
    AutoRelease = 1,
    ManualRelease = 2,
    ManualRelease_OnComplete = 3,
    FreeInPool = 4,
    ENCPoolMethod_MAX = 5,
};
#pragma pack(pop)
