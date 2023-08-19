#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EAblAddLinearImpulseDirectionType : uint8_t {
    Global = 0,
    Local = 1,
    ImpactDirection = 2,
    EAblAddLinearImpulseDirectionType_MAX = 3,
};
#pragma pack(pop)
