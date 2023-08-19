#pragma once
#include <cstdint>
#include "AActor.hpp"
class UBoxComponent;
#pragma pack(push, 1)
class ACompanionTeleportVolume : public AActor {
public:
    UBoxComponent* CollisionComponent; // 0x248
    char pad_250[0x1c];
    bool bIsAlwaysActive; // 0x26c
    bool bTriggerOnEnter; // 0x26d
    char pad_26e[0x1a];
    TArray<AActor*> Locators; // 0x288
    static ACompanionTeleportVolume* StaticClass();
    void SetTemporarilyActive(bool bActive, float Timeout);
    void SetActive(bool bActive);
    void OnEndOverlap(AActor* SelfActor, AActor* OtherActor);
    void OnBeginOverlap(AActor* SelfActor, AActor* OtherActor);
}; // Size: 0x298
#pragma pack(pop)
