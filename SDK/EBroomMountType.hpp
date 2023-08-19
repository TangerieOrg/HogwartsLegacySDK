#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EBroomMountType : uint8_t {
    FromIdleMount = 0,
    FromWalkMount = 1,
    FromJogMount = 2,
    FromSwimming = 3,
    FromFalling = 4,
    InstantMount = 5,
    EBroomMountType_MAX = 6,
};
#pragma pack(pop)
