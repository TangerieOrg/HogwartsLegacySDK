#pragma once
#include <cstdint>
namespace ETimeDilationTarget {
#pragma pack(push, 1)
enum Type : uint8_t {
    World = 0,
    Self = 1,
    Owner = 2,
    Instigator = 3,
    TargetActor = 4,
    ETimeDilationTarget_MAX = 5,
};
#pragma pack(pop)
}
