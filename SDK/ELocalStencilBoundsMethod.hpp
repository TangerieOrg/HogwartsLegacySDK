#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ELocalStencilBoundsMethod : uint8_t {
    Default = 0,
    Local = 1,
    World = 2,
    ELocalStencilBoundsMethod_MAX = 3,
};
#pragma pack(pop)
