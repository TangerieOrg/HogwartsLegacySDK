#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EStencilRulesTypeMode : uint8_t {
    Default = 0,
    OnlySwap = 1,
    NeverSwap = 2,
    EStencilRulesTypeMode_MAX = 3,
};
#pragma pack(pop)
