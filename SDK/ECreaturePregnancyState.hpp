#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ECreaturePregnancyState : uint8_t {
    NotPregnant = 0,
    Gestation = 1,
    Incubation = 2,
    ECreaturePregnancyState_MAX = 3,
};
#pragma pack(pop)
