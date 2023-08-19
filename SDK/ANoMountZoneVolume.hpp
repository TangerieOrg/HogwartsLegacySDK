#pragma once
#include <cstdint>
#include "AMountZoneVolumeBase.hpp"
#include "ENoMountZoneError.hpp"
#include "ENoMountZoneVersion.hpp"
class UStaticMeshComponent;
class UModel;
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#pragma pack(push, 1)
class ANoMountZoneVolume : public AMountZoneVolumeBase {
public:
    UStaticMeshComponent* ShieldMesh; // 0x3b8
    ENoMountZoneError NoMountZoneError; // 0x3c0
    bool bGenerateShieldMesh; // 0x3c1
    bool bAlternateStencilValues; // 0x3c2
    ENoMountZoneVersion Version; // 0x3c3
    char pad_3c4[0x34];
    UModel* ConversionTempModel; // 0x3f8
    static ANoMountZoneVolume* StaticClass();
    void OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
    void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult);
}; // Size: 0x400
#pragma pack(pop)
