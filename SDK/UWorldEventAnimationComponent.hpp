#pragma once
#include <cstdint>
#include "UActorComponent.hpp"
class UAnimationAsset;
#pragma pack(push, 1)
class UWorldEventAnimationComponent : public UActorComponent {
public:
    char pad_c8[0x8];
    static UWorldEventAnimationComponent* StaticClass();
    void SetAnimation(UAnimationAsset* InAnimation);
    void RemoveComponent();
    UAnimationAsset* GetAnimation();
}; // Size: 0xd0
#pragma pack(pop)
