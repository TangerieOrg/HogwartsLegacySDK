#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
class ADynamicObjectVolume;
class UStaticMeshComponent;
class UPrimitiveComponent;
struct FHitResult;
#pragma pack(push, 1)
class ASpiderWeb_Spawner : public AActor {
public:
    ADynamicObjectVolume* SpawnerVolume; // 0x248
    float SpawnTime; // 0x250
    bool bDestroyOnSpawn; // 0x254
    bool bIgnoreType; // 0x255
    char pad_256[0x2];
    FString IgnoreTypeName; // 0x258
    bool bBurning; // 0x268
    bool bFrozen; // 0x269
    char pad_26a[0x2];
    FName SpawnGroupName; // 0x26c
    int32_t SpawnNum; // 0x274
    char pad_278[0x18];
    static ASpiderWeb_Spawner* StaticClass();
    bool WebThaw();
    void WebHit();
    void WebFreeze();
    void WebBurn();
    void SpawnSpiders();
    void SetSpawner(ADynamicObjectVolume* newSpawner);
    bool OnSpawnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
    bool OnSpawnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult);
    bool IsSpider(AActor* checkActor);
    FTransform GetRelativeTransform(UStaticMeshComponent* StaticMesh, FVector FireLocation);
}; // Size: 0x290
#pragma pack(pop)
