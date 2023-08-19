#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EOverlapEffectsHandlerConditionLogic : uint8_t {
    And = 0,
    Or = 1,
    ExclusiveOr = 2,
    EOverlapEffectsHandlerConditionLogic_MAX = 3,
};
#pragma pack(pop)
