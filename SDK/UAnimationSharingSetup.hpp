#pragma once
#include <cstdint>
#include "FAnimationSharingScalability.hpp"
#include "FPerSkeletonAnimationSharingSetup.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UAnimationSharingSetup : public UObject {
public:
    TArray<FPerSkeletonAnimationSharingSetup> SkeletonSetups; // 0x28
    FAnimationSharingScalability ScalabilitySettings; // 0x38
    static UAnimationSharingSetup* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
