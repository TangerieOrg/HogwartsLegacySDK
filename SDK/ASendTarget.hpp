#pragma once
#include <cstdint>
#include "ATargetPoint.hpp"
class USphereComponent;
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#pragma pack(push, 1)
class ASendTarget : public ATargetPoint {
public:
    USphereComponent* SphereComp; // 0x248
    uint8_t Priority; // 0x250
    bool bEnabled; // 0x251
    bool bDetectsCollision; // 0x252
    char pad_253[0x1];
    float Radius; // 0x254
    bool bDisableWhenHit; // 0x258
    bool bOnlyHitByTargetingActor; // 0x259
    char pad_25a[0x16];
    TArray<AActor*> TargetingActors; // 0x270
    static ASendTarget* StaticClass();
    void SetSendTargetPriority(uint8_t InPriority);
    void SetEnabled(bool bInEnabled);
    bool IsEnabled();
    uint8_t GetSendTargetPriority();
    void BeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult);
}; // Size: 0x280
#pragma pack(pop)
