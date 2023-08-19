#pragma once
#include <cstdint>
namespace ESpeedInclusivity {
#pragma pack(push, 1)
enum Type : uint8_t {
    Inclusive = 0,
    InclusiveMinOnly = 1,
    InclusiveMaxOnly = 2,
    NotInclusive = 3,
    ESpeedInclusivity_MAX = 4,
};
#pragma pack(pop)
}
