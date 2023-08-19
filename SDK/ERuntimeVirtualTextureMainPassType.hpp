#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ERuntimeVirtualTextureMainPassType : uint8_t {
    Never = 0,
    Exclusive = 1,
    Always = 2,
    ERuntimeVirtualTextureMainPassType_MAX = 3,
};
#pragma pack(pop)
