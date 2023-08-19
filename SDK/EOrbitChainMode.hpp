#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EOrbitChainMode : uint8_t {
    EOChainMode_Add = 0,
    EOChainMode_Scale = 1,
    EOChainMode_Link = 2,
    EOChainMode_MAX = 3,
};
#pragma pack(pop)
