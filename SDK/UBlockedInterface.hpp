#pragma once
#include <cstdint>
#include "EBlockTiming.hpp"
#include "FGameplayTagContainer.hpp"
#include "FVector.hpp"
#include "UInterface.hpp"
class AActor;
class UInteractionArchitectAsset;
#pragma pack(push, 1)
class UBlockedInterface : public UInterface {
public:
    static UBlockedInterface* StaticClass();
    void OnBlocked(AActor* Instigator, UInteractionArchitectAsset* DataAsset, EBlockTiming BlockedTiming, FGameplayTagContainer MunitionTagContainer, FVector Throw, FVector ImpactDirection);
}; // Size: 0x28
#pragma pack(pop)
