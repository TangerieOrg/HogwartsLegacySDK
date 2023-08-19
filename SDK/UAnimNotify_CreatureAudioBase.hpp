#pragma once
#include <cstdint>
#include "ECreatureImpactSize.hpp"
#include "FGameplayTagContainer.hpp"
#include "UAnimNotify.hpp"
#pragma pack(push, 1)
class UAnimNotify_CreatureAudioBase : public UAnimNotify {
public:
    FGameplayTagContainer LookupTags; // 0x38
    FName SpawnBaseName; // 0x58
    FName SocketName; // 0x60
    ECreatureImpactSize ImpactSize; // 0x68
    float KickupDirection; // 0x6c
    float KickupRotation; // 0x70
    char pad_74[0x4];
    static UAnimNotify_CreatureAudioBase* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
