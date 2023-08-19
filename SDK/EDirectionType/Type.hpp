#pragma once
#include <cstdint>
namespace EDirectionType {
#pragma pack(push, 1)
enum Type : uint8_t {
    ImpactDirection = 0,
    CalculatedWorldDirection = 1,
    EDirectionType_MAX = 2,
};
#pragma pack(pop)
}
