#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "EForbiddenAreaSetting.hpp"
#include "FForbiddenAreaSpecificNPC.hpp"
class UBoxComponent;
#pragma pack(push, 1)
class AForbiddenAreaVolume : public AActor {
public:
    UBoxComponent* CollisionComponent; // 0x248
    char pad_250[0x30];
    bool bIsActive; // 0x280
    bool bDisableCompanion; // 0x281
    EForbiddenAreaSetting FilterSetting; // 0x282
    char pad_283[0x5];
    TArray<FForbiddenAreaSpecificNPC> SpecificNPCs; // 0x288
    TArray<AActor*> Locators; // 0x298
    static AForbiddenAreaVolume* StaticClass();
    void SetActive(bool bActive);
    void OnEndOverlap(AActor* SelfActor, AActor* OtherActor);
    void OnBeginOverlap(AActor* SelfActor, AActor* OtherActor);
    void Deactivate();
    void Activate();
}; // Size: 0x2a8
#pragma pack(pop)
