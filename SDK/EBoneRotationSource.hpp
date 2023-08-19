#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EBoneRotationSource : uint8_t {
    BRS_KeepComponentSpaceRotation = 0,
    BRS_KeepLocalSpaceRotation = 1,
    BRS_CopyFromTarget = 2,
    BRS_MAX = 3,
};
#pragma pack(pop)
