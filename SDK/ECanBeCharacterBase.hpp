#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum ECanBeCharacterBase : uint8_t {
    ECB_No = 0,
    ECB_Yes = 1,
    ECB_Owner = 2,
    ECB_MAX = 3,
};
#pragma pack(pop)
