#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EControlRigComponentSpace : uint8_t {
    WorldSpace = 0,
    ActorSpace = 1,
    ComponentSpace = 2,
    RigSpace = 3,
    LocalSpace = 4,
    Max = 5,
};
#pragma pack(pop)
