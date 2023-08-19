#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EFieldIntegerType : uint8_t {
    Integer_DynamicState = 0,
    Integer_ActivateDisabled = 1,
    Integer_CollisionGroup = 2,
    Integer_PositionAnimated = 3,
    Integer_PositionStatic = 4,
    Integer_TargetMax = 5,
    Integer_MAX = 6,
};
#pragma pack(pop)
