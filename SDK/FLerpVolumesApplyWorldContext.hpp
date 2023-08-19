#pragma once
#include <cstdint>
class UWorld;
class AActor;
#pragma pack(push, 1)
struct FLerpVolumesApplyWorldContext {
    UWorld* World; // 0x0
    AActor* sender; // 0x8
    AActor* Receiver; // 0x10
    char pad_18[0xa0];
    int32_t Mode; // 0xb8
    char pad_bc[0x4];
}; // Size: 0xc0
#pragma pack(pop)
