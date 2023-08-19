#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EHoudiniHandleType : uint8_t {
    Xform = 0,
    Bounder = 1,
    Unsupported = 2,
    EHoudiniHandleType_MAX = 3,
};
#pragma pack(pop)
