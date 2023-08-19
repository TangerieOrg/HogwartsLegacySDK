#pragma once
#include <cstdint>
#include "ATransfigurationStructureBase.hpp"
#include "FPointerToUberGraphFrame.hpp"
class UChildActorComponent;
class UStaticMeshComponent;
class USceneComponent;
class UDecalComponent;
class UOdcObstacleComponent;
class UOdcAuthoredObstacleSetupComponent;
class UActorComponent;
#pragma pack(push, 1)
class ABP_Sanc_TerrariumForestStart_Parent_C : public ATransfigurationStructureBase {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x2a8
    UChildActorComponent* BP_Sanc_FreeStandingClock_Forest; // 0x2b0
    UStaticMeshComponent* Collision2; // 0x2b8
    USceneComponent* SK_Sanc_Forest_Wall:BanisterM3_L; // 0x2c0
    USceneComponent* SK_Sanc_Forest_Wall:BanisterR3_L; // 0x2c8
    USceneComponent* SK_Sanc_Forest_Wall:BanisterR2_L; // 0x2d0
    USceneComponent* SK_Sanc_Forest_Wall:BanisterM2_L; // 0x2d8
    USceneComponent* SK_Sanc_Forest_Wall:BanisterR1_L; // 0x2e0
    USceneComponent* SK_Sanc_Forest_Wall:BanisterM1_L; // 0x2e8
    USceneComponent* SK_Sanc_Forest_Wall:BanisterR3_R; // 0x2f0
    USceneComponent* SK_Sanc_Forest_Wall:BanisterM3_R; // 0x2f8
    USceneComponent* SK_Sanc_Forest_Wall:BanisterR2_R; // 0x300
    USceneComponent* SK_Sanc_Forest_Wall:BanisterM2_R; // 0x308
    USceneComponent* SK_Sanc_Forest_Wall:BanisterR1_R; // 0x310
    USceneComponent* SK_Sanc_Forest_Wall:BanisterM1_R; // 0x318
    UStaticMeshComponent* SM_Sanc_TerrariumForestBaseStart_Potnr; // 0x320
    USceneComponent* Base; // 0x328
    USceneComponent* SM_Sanc_Column_10_1; // 0x330
    USceneComponent* SM_Sanc_Column_10; // 0x338
    USceneComponent* SM_Sanc_Column_09_1; // 0x340
    USceneComponent* SM_Sanc_Column_09; // 0x348
    USceneComponent* SM_Sanc_TerrariumForestStart_06; // 0x350
    USceneComponent* SM_Sanc_TerrariumForestStart_05; // 0x358
    USceneComponent* SM_Sanc_TerrariumForestStart_04; // 0x360
    USceneComponent* SM_Sanc_TerrariumForestStart_03; // 0x368
    USceneComponent* SM_Sanc_TerrariumForestStart_02; // 0x370
    USceneComponent* SM_Sanc_TerrariumForestStart_01; // 0x378
    USceneComponent* SM_Sanc_TerrariumForestStart; // 0x380
    USceneComponent* SM_Sanc_Wall_10x2_LF_02K; // 0x388
    USceneComponent* SM_Sanc_Wall_10x2_LF_02J; // 0x390
    USceneComponent* SM_Sanc_Wall_10x2_LF_02I; // 0x398
    USceneComponent* SM_Sanc_Wall_10x2_LF_02H; // 0x3a0
    USceneComponent* SM_Sanc_Wall_10x2_LF_02G; // 0x3a8
    USceneComponent* SM_Sanc_Wall_10x2_LF_02F; // 0x3b0
    USceneComponent* SM_Sanc_Wall_10x2_LF_02E; // 0x3b8
    USceneComponent* SM_Sanc_Wall_10x2_LF_02D; // 0x3c0
    USceneComponent* SM_Sanc_Wall_10x2_LF_02C; // 0x3c8
    USceneComponent* SM_Sanc_Wall_10x2_LF_02B; // 0x3d0
    USceneComponent* SM_Sanc_Wall_10x2_LF_02A; // 0x3d8
    USceneComponent* SM_Sanc_Wall_10x2_LF_02; // 0x3e0
    USceneComponent* SM_Sanc_Wall_10x2_RT_02K; // 0x3e8
    USceneComponent* SM_Sanc_Wall_10x2_RT_02J; // 0x3f0
    USceneComponent* SM_Sanc_Wall_10x2_RT_02I; // 0x3f8
    USceneComponent* SM_Sanc_Wall_10x2_RT_02H; // 0x400
    USceneComponent* SM_Sanc_Wall_10x2_RT_02G; // 0x408
    USceneComponent* SM_Sanc_Wall_10x2_RT_02F; // 0x410
    USceneComponent* SM_Sanc_Wall_10x2_RT_02E; // 0x418
    USceneComponent* SM_Sanc_Wall_10x2_RT_02D; // 0x420
    USceneComponent* SM_Sanc_Wall_10x2_RT_02C; // 0x428
    USceneComponent* SM_Sanc_Wall_10x2_RT_02B; // 0x430
    USceneComponent* SM_Sanc_Wall_10x2_RT_02A; // 0x438
    USceneComponent* SM_Sanc_Wall_10x2_RT_02; // 0x440
    USceneComponent* SM_Sanc_TerrariumForestClockHand_03; // 0x448
    USceneComponent* SM_Sanc_TerrariumForestClockHand_02; // 0x450
    USceneComponent* SM_Sanc_TerrariumForestClockHand_01; // 0x458
    USceneComponent* SM_Sanc_TerrariumForestClockStart_02; // 0x460
    USceneComponent* SM_Sanc_TerrariumForestClockStart_01; // 0x468
    USceneComponent* SM_Sanc_TerrariumForestClockStart; // 0x470
    USceneComponent* Clock; // 0x478
    USceneComponent* RearWall_Right; // 0x480
    USceneComponent* RearWall_Left; // 0x488
    USceneComponent* RearWall_Centre; // 0x490
    UStaticMeshComponent* SM_Sanc_Bio_DressingDecal_Medium_01A2; // 0x498
    UStaticMeshComponent* SM_Sanc_Bio_DressingDecal_Medium_01A1; // 0x4a0
    UStaticMeshComponent* SM_Sanc_Bio_DressingDecal_Medium_01A; // 0x4a8
    UDecalComponent* Decal14; // 0x4b0
    UDecalComponent* Decal11; // 0x4b8
    UDecalComponent* Decal10; // 0x4c0
    UDecalComponent* Decal9; // 0x4c8
    UOdcObstacleComponent* OdcObstacle; // 0x4d0
    UOdcAuthoredObstacleSetupComponent* OdcAuthoredObstacleSetup; // 0x4d8
    UStaticMeshComponent* Collision1; // 0x4e0
    UStaticMeshComponent* SM_Sanc_TerrariumForestStart_02A; // 0x4e8
    USceneComponent* DefaultSceneRoot; // 0x4f0
    static ABP_Sanc_TerrariumForestStart_Parent_C* StaticClass();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Sanc_TerrariumForestStart_Parent(int32_t EntryPoint, TArray<UActorComponent*>& K2Node_MakeArray_Array);
}; // Size: 0x4f8
#pragma pack(pop)
