#pragma once
#include <cstdint>
#include "EAnimGroupRole\Type.hpp"
#include "EAnimSyncGroupScope.hpp"
#pragma pack(push, 1)
struct FAnimationGroupReference {
    FName GroupName; // 0x0
    EAnimGroupRole::Type GroupRole; // 0x8
    EAnimSyncGroupScope GroupScope; // 0x9
    char pad_a[0x2];
}; // Size: 0xc
#pragma pack(pop)
