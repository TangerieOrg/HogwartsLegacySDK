#pragma once
#include <cstdint>
#include "EHighContrastGameplayBucket.hpp"
class UObject;
#pragma pack(push, 1)
struct FHighContrastGameplayBucketPrimitiveState {
    UObject* State; // 0x0
    EHighContrastGameplayBucket Bucket; // 0x8
    char pad_9[0x7];
}; // Size: 0x10
#pragma pack(pop)
