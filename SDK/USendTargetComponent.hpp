#pragma once
#include <cstdint>
#include "USphereComponent.hpp"
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#pragma pack(push, 1)
class USendTargetComponent : public USphereComponent {
public:
    uint8_t Priority; // 0x4a0
    bool bEnabled; // 0x4a1
    bool bDetectsCollision; // 0x4a2
    char pad_4a3[0x1];
    float Radius; // 0x4a4
    float Damage; // 0x4a8
    bool bDisableWhenHit; // 0x4ac
    bool bOnlyHitByTargetingActor; // 0x4ad
    char pad_4ae[0x12];
    TArray<AActor*> TargetingActors; // 0x4c0
    static USendTargetComponent* StaticClass();
    void SetSendTargetPriority(uint8_t InPriority);
    void SetEnabled(bool bInEnabled);
    bool IsEnabled();
    uint8_t GetSendTargetPriority();
    void BeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult);
}; // Size: 0x4d0
#pragma pack(pop)
