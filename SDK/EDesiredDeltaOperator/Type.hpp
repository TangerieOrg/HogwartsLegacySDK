#pragma once
#include <cstdint>
namespace EDesiredDeltaOperator {
#pragma pack(push, 1)
enum Type : uint8_t {
    And = 0,
    Or = 1,
    StrafeRules = 2,
    EDesiredDeltaOperator_MAX = 3,
};
#pragma pack(pop)
}
