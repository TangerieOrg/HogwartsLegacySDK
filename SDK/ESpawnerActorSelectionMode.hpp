#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESpawnerActorSelectionMode : uint8_t {
    Undefined = 0,
    FirstClass = 1,
    MultipleClass = 2,
    RandomClass = 3,
    ESpawnerActorSelectionMode_MAX = 4,
};
#pragma pack(pop)
