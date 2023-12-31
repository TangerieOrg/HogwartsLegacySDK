#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum ERelativeTransformSpace : uint8_t {
    RTS_World = 0,
    RTS_Actor = 1,
    RTS_Component = 2,
    RTS_ParentBoneSpace = 3,
    RTS_MAX = 4,
};
#pragma pack(pop)
