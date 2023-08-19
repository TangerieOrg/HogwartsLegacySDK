#pragma once
#include <cstdint>
#include "FGameplayTagContainer.hpp"
#include "UDataAsset.hpp"
class UClass;
#pragma pack(push, 1)
class UAblReactionComponentConfig : public UDataAsset {
public:
    TArray<UClass*> ReactionsToResetDuration; // 0x30
    FGameplayTagContainer ResetReactionDurationTags; // 0x40
    UClass* DefaultFallingAbility; // 0x60
    UClass* DefaultRagdollAbility; // 0x68
    float RecentlyOnFireTime; // 0x70
    float InAirDistanceFromGround; // 0x74
    bool bDefaultCanReactToAllies; // 0x78
    char pad_79[0x7];
    static UAblReactionComponentConfig* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
