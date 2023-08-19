#pragma once
#include <cstdint>
#include "ABP_Sanc_HubCorner_03_C.hpp"
#include "FAkExternalSourceInfo.hpp"
#include "FPointerToUberGraphFrame.hpp"
class UDeferredChildActorComponent;
class UConjurationWallAlignmentComponent;
struct FVector;
class UStaticMeshComponent;
class UBoxComponent;
class UAkAudioEvent;
class UTransformationFxInfoComponent;
#pragma pack(push, 1)
class ABP_Sanc_HubCorner_03_Dwiz_C : public ABP_Sanc_HubCorner_03_C {
public:
    FPointerToUberGraphFrame UberGraphFrame0; // 0x330
    UDeferredChildActorComponent* Deferred_Books01; // 0x338
    UDeferredChildActorComponent* Deferred_Dressing01; // 0x340
    UStaticMeshComponent* SM_Sanc_WallFill_02_Dwiz1; // 0x348
    UStaticMeshComponent* SM_Sanc_WallFill_02_Dwiz; // 0x350
    UStaticMeshComponent* SM_Sanc_Decal_01_Dwiz1; // 0x358
    UStaticMeshComponent* SM_Sanc_Bio_DressingDecal_Medium_01A2; // 0x360
    UStaticMeshComponent* SM_Sanc_Bio_DressingDecal_Medium_01A1; // 0x368
    UStaticMeshComponent* SM_Sanc_Decal_01_Dwiz; // 0x370
    UStaticMeshComponent* SM_Sanc_Wall_Border_Dwiz4; // 0x378
    UStaticMeshComponent* SM_Sanc_Wall_Border_Dwiz3; // 0x380
    UStaticMeshComponent* SM_Sanc_Wall_Border_Dwiz2; // 0x388
    UStaticMeshComponent* SM_Sanc_Alcove_01_Dwiz5; // 0x390
    UBoxComponent* Box1; // 0x398
    UBoxComponent* Box; // 0x3a0
    UConjurationWallAlignmentComponent* ConjurationWallAlignment1; // 0x3a8
    UConjurationWallAlignmentComponent* ConjurationWallAlignment; // 0x3b0
    UStaticMeshComponent* SM_Sanc_Alcove_01_Dwiz4; // 0x3b8
    UStaticMeshComponent* SM_Sanc_Alcove_01_Dwiz8; // 0x3c0
    UTransformationFxInfoComponent* TransformationFxInfo; // 0x3c8
    UStaticMeshComponent* SM_Sanc_Alcove_01_Dwiz9; // 0x3d0
    UStaticMeshComponent* SM_Sanc_Alcove_01_Dwiz7; // 0x3d8
    UStaticMeshComponent* SM_Sanc_Alcove_01_Dwiz6; // 0x3e0
    UStaticMeshComponent* SM_Sanc_Alcove_01_Dwiz3; // 0x3e8
    UStaticMeshComponent* SM_Sanc_Alcove_01_Dwiz2; // 0x3f0
    UStaticMeshComponent* SM_Sanc_Alcove_01_Dwiz1; // 0x3f8
    UAkAudioEvent* AkEvent; // 0x400
    static ABP_Sanc_HubCorner_03_Dwiz_C* StaticClass();
    void ObjectPhysicalResponseImpact(float ImpactIntensity, FName SpellName, FName ResponseConfigName, FVector& ImpactLocation);
    void ExecuteUbergraph_BP_Sanc_HubCorner_03_Dwiz(int32_t EntryPoint, TArray<FAkExternalSourceInfo>& Temp_struct_Variable);
}; // Size: 0x408
#pragma pack(pop)
