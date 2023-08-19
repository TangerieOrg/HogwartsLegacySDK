#pragma once
#include <cstdint>
#include "AActor.hpp"
class USphereComponent;
struct FVector;
class UPrimitiveComponent;
struct FHitResult;
#pragma pack(push, 1)
class ADevilsSnareDynamic : public AActor {
public:
    USphereComponent* SphereComponent; // 0x248
    TArray<AActor*> LightActorsInArea; // 0x250
    bool bPlayerIsUsingLumos; // 0x260
    char pad_261[0x3];
    float SphereRadius; // 0x264
    float OnFireRadiusExtension; // 0x268
    char pad_26c[0x14];
    static ADevilsSnareDynamic* StaticClass();
    bool UnslowPlayer();
    void TickDeactivated();
    void TickActivated();
    bool SlowPlayer(float SpeedLimit);
    void PlayerLumosStart();
    void PlayerLumosEnd();
    void OnOverlapSphereEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
    void OnOverlapSphereBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult);
    bool FindClosestLightSourcePos(FVector& SnarePos, FVector& OutPos);
    void BeginPlayDelayed();
}; // Size: 0x280
#pragma pack(pop)
