#pragma once
#include <cstdint>
#include "FOverlapEffectsVelocityTracker.hpp"
#include "FVector.hpp"
#include "UActorComponent.hpp"
class UOverlapEffectsDataAsset;
class UOverlapEffectsHandler;
class AActor;
struct FHitResult;
#pragma pack(push, 1)
class UOverlapEffectsComponent : public UActorComponent {
public:
    UOverlapEffectsDataAsset* HandlerDefinitions; // 0xc8
    TArray<UOverlapEffectsHandler*> OverlapHandlers; // 0xd0
    float CameraCutoffDistance; // 0xe0
    FName TrueSpeedRTPC; // 0xe4
    float TeleportThreshold; // 0xec
    float TrueSpeedRTPCThreshold; // 0xf0
    uint8_t bUseCameraCutoffDistance : 1; // 0xf4
    uint8_t bSetTrueSpeedRTPC : 1; // 0xf4
    uint8_t bEnabled : 1; // 0xf4
    uint8_t pad_bitfield_f4_3 : 5;
    char pad_f5[0x3];
    int32_t LiveEvents; // 0xf8
    FOverlapEffectsVelocityTracker VelocityTracker; // 0xfc
    float LastTrueSpeed; // 0x130
    bool bProcessEvents; // 0x134
    char pad_135[0x3];
    static UOverlapEffectsComponent* StaticClass();
    void ProcessHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, FHitResult& Hit);
    void ProcessEndOverlap(AActor* OverlappedActor, AActor* OtherActor);
    void ProcessBeginOverlap(AActor* OverlappedActor, AActor* OtherActor);
}; // Size: 0x138
#pragma pack(pop)
