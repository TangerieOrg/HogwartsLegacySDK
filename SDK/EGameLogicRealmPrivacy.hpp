#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EGameLogicRealmPrivacy : uint8_t {
    Public = 0,
    Private = 1,
    EGameLogicRealmPrivacy_MAX = 2,
};
#pragma pack(pop)
