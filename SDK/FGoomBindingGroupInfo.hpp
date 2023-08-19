#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FGoomBindingGroupInfo {
    int32_t RenRootCount; // 0x0
    int32_t RenLODCount; // 0x4
    int32_t SimRootCount; // 0x8
    int32_t SimLODCount; // 0xc
}; // Size: 0x10
#pragma pack(pop)
