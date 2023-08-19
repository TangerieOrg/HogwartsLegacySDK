#pragma once
#include <cstdint>
#include "FAnimGroupInfo.hpp"
#include "UBlueprint.hpp"
class USkeleton;
#pragma pack(push, 1)
class UAnimBlueprint : public UBlueprint {
public:
    char pad_a0[0x8];
    USkeleton* TargetSkeleton; // 0xa8
    TArray<FAnimGroupInfo> Groups; // 0xb0
    bool bUseMultiThreadedAnimationUpdate; // 0xc0
    bool bWarnAboutBlueprintUsage; // 0xc1
    char pad_c2[0x6];
    static UAnimBlueprint* StaticClass();
}; // Size: 0xc8
#pragma pack(pop)
