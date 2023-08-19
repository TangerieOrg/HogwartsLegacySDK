#pragma once
#include <cstdint>
class UClass;
class UAvaMotionWarpWindowFinder;
#pragma pack(push, 1)
struct FAvaRootMotionWarper {
    TArray<UClass*> DefaultMotionWarpWindowFinders; // 0x0
    char pad_10[0x8];
    TArray<UAvaMotionWarpWindowFinder*> MotionWarpWindowFinders; // 0x18
    char pad_28[0x50];
}; // Size: 0x78
#pragma pack(pop)
