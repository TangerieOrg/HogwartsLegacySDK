#pragma once
#include <cstdint>
#include "EHighContrastGameplayBucket.hpp"
#include "UFXAutoTriggerRequiredActorsBase.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerRequiredActorsExternalBucketHighContrast : public UFXAutoTriggerRequiredActorsBase {
public:
    EHighContrastGameplayBucket Bucket; // 0x28
    char pad_29[0x7];
    static UFXAutoTriggerRequiredActorsExternalBucketHighContrast* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
