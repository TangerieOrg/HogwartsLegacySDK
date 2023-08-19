#pragma once
#include <cstdint>
#include "FBoneReference.hpp"
#include "FSocketReference.hpp"
#pragma pack(push, 1)
struct FBoneSocketTarget {
    bool bUseSocket; // 0x0
    char pad_1[0x3];
    FBoneReference BoneReference; // 0x4
    char pad_14[0xc];
    FSocketReference SocketReference; // 0x20
}; // Size: 0x60
#pragma pack(pop)
