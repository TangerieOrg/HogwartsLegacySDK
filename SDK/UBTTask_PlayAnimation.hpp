#pragma once
#include <cstdint>
#include "UBTTaskNode.hpp"
class UAnimationAsset;
class UBehaviorTreeComponent;
class USkeletalMeshComponent;
#pragma pack(push, 1)
class UBTTask_PlayAnimation : public UBTTaskNode {
public:
    UAnimationAsset* AnimationToPlay; // 0x70
    uint8_t bLooping : 1; // 0x78
    uint8_t bNonBlocking : 1; // 0x78
    uint8_t pad_bitfield_78_2 : 6;
    char pad_79[0x7];
    UBehaviorTreeComponent* MyOwnerComp; // 0x80
    USkeletalMeshComponent* CachedSkelMesh; // 0x88
    char pad_90[0x20];
    static UBTTask_PlayAnimation* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)
