#pragma once
#include <cstdint>
#include "ATransfigurationObjectBase.hpp"
#include "FAkExternalSourceInfo.hpp"
#include "FPointerToUberGraphFrame.hpp"
class UDecalComponent;
class USceneComponent;
struct FVector;
class UBoxComponent;
class UPhysicalResponseComponent;
class UStaticMeshComponent;
class UConjurationSnappingWallComponent;
class UConjurationSurfaceShapeComponent;
#pragma pack(push, 1)
class ABP_Sanc_FrolicsomeFelinePlates_C : public ATransfigurationObjectBase {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x2a8
    UDecalComponent* SideStandingBrownCat1; // 0x2b0
    UDecalComponent* LyingBrownKitten4; // 0x2b8
    UBoxComponent* BoxCollision; // 0x2c0
    USceneComponent* Plate1; // 0x2c8
    USceneComponent* Plate5; // 0x2d0
    USceneComponent* Plate2; // 0x2d8
    USceneComponent* Plate4; // 0x2e0
    UStaticMeshComponent* StaticMeshComponent0; // 0x2e8
    UStaticMeshComponent* StaticMeshComponent1; // 0x2f0
    UStaticMeshComponent* StaticMeshComponent2; // 0x2f8
    UStaticMeshComponent* StaticMeshComponent3; // 0x300
    UStaticMeshComponent* StaticMeshComponent5; // 0x308
    UStaticMeshComponent* StaticMeshComponent4; // 0x310
    UPhysicalResponseComponent* PhysicalResponse6; // 0x318
    UPhysicalResponseComponent* PhysicalResponse5; // 0x320
    UPhysicalResponseComponent* PhysicalResponse4; // 0x328
    UPhysicalResponseComponent* PhysicalResponse3; // 0x330
    UPhysicalResponseComponent* PhysicalResponse2; // 0x338
    UPhysicalResponseComponent* PhysicalResponse1; // 0x340
    UStaticMeshComponent* StaticMeshComponent6; // 0x348
    UPhysicalResponseComponent* PhysicalResponse; // 0x350
    UDecalComponent* SittingGreyKitten6; // 0x358
    UDecalComponent* SittingGreyCat; // 0x360
    UDecalComponent* SittingGreyKitten7; // 0x368
    UDecalComponent* LyingGreyCat1; // 0x370
    UDecalComponent* SittingGreyKitten2; // 0x378
    UDecalComponent* LyingBrownKitten2; // 0x380
    UDecalComponent* SittingGreyKitten4; // 0x388
    UDecalComponent* SittingYellowCat2; // 0x390
    UConjurationSnappingWallComponent* ConjurationSnappingWall; // 0x398
    UConjurationSurfaceShapeComponent* ConjurationSurfaceShape; // 0x3a0
    USceneComponent* Scene1; // 0x3a8
    static ABP_Sanc_FrolicsomeFelinePlates_C* StaticClass();
    void ObjectConjured();
    void ObjectTransformationCancelled();
    void ObjectTransformationConfirmed();
    void ObjectVanished();
    void ObjectTransformationStarted();
    void ObjectPhysicalResponseImpact(float ImpactIntensity, FName SpellName, FName ResponseConfigName, FVector& ImpactLocation);
    void ExecuteUbergraph_BP_Sanc_FrolicsomeFelinePlates(int32_t EntryPoint, TArray<FAkExternalSourceInfo>& Temp_struct_Variable);
}; // Size: 0x3b0
#pragma pack(pop)
