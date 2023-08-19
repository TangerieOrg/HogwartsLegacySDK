#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ETimeRigFadeEventType : uint8_t {
    None = 0,
    InitialFade = 1,
    FinalFade = 2,
    ETimeRigFadeEventType_MAX = 3,
};
#pragma pack(pop)
