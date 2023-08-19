#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FVector.hpp"
class UCreatureFeedFloatingComponent;
class ACreature_Character;
#pragma pack(push, 1)
class ACreatureFeed : public AActor {
public:
    float StartFeedAnimDistance; // 0x248
    bool bUsePelletStartingScaleInAnim; // 0x24c
    char pad_24d[0x3];
    float MaxWaitTime; // 0x250
    char pad_254[0x4];
    UCreatureFeedFloatingComponent* FeedFloatingComponent; // 0x258
    char pad_260[0x8];
    ACreature_Character* SelectedCreature; // 0x268
    char pad_270[0x18];
    static ACreatureFeed* StaticClass();
    void OnStartedVanishing();
    void InitializeRelease(ACreature_Character* SelectedCreature);
    void FloatToCreature(FVector ReleaseVelocity);
}; // Size: 0x288
#pragma pack(pop)
