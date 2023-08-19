#pragma once
#include <cstdint>
#include "FGameplayTagContainer.hpp"
#include "UObject.hpp"
class AActor;
#pragma pack(push, 1)
class UAblReactionData : public UObject {
public:
    char pad_28[0x88];
    FGameplayTagContainer MunitionTags; // 0xb0
    char pad_d0[0x8];
    bool bDestroyEffectComponentOnReactionEnd; // 0xd8
    char pad_d9[0x7];
    static UAblReactionData* StaticClass();
    bool IsPassive();
    AActor* GetTarget();
    AActor* GetInstigator();
    FName GetChannelName();
}; // Size: 0xe0
#pragma pack(pop)
