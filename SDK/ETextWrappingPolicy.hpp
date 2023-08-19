#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ETextWrappingPolicy : uint8_t {
    DefaultWrapping = 0,
    AllowPerCharacterWrapping = 1,
    ETextWrappingPolicy_MAX = 2,
};
#pragma pack(pop)
