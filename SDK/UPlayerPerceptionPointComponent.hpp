#pragma once
#include <cstdint>
#include "UActorComponent.hpp"
class UAISenseConfig;
class APerceptionPoint;
class UPlayer_FootfallDataAsset;
#pragma pack(push, 1)
class UPlayerPerceptionPointComponent : public UActorComponent {
public:
    int32_t Priority; // 0xc8
    char pad_cc[0x4];
    TArray<UAISenseConfig*> SensesConfigList; // 0xd0
    APerceptionPoint* PerceptionPoint; // 0xe0
    UPlayer_FootfallDataAsset* FootfallDataAsset; // 0xe8
    char pad_f0[0x8];
    static UPlayerPerceptionPointComponent* StaticClass();
}; // Size: 0xf8
#pragma pack(pop)
