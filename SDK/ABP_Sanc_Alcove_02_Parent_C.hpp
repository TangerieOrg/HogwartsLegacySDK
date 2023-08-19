#pragma once
#include <cstdint>
#include "ATransfigurationStructureBase.hpp"
#include "FPointerToUberGraphFrame.hpp"
class UTransformationFxInfoComponent;
class UOdcAuthoredObstacleSetupComponent;
class UPhysicalResponseComponent;
class USceneComponent;
class UOdcObstacleComponent;
class UActorComponent;
#pragma pack(push, 1)
class ABP_Sanc_Alcove_02_Parent_C : public ATransfigurationStructureBase {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x2a8
    UTransformationFxInfoComponent* TransformationFxInfo; // 0x2b0
    UPhysicalResponseComponent* PhysicalResponse; // 0x2b8
    UPhysicalResponseComponent* PhysicalResponse1; // 0x2c0
    USceneComponent* Alcove_Plinth; // 0x2c8
    USceneComponent* Alcove_Statue; // 0x2d0
    USceneComponent* Alcove_Base_R; // 0x2d8
    USceneComponent* Alcove_Base_L; // 0x2e0
    USceneComponent* Alcove_Arch_R; // 0x2e8
    USceneComponent* Alcove_Arch_L; // 0x2f0
    UOdcAuthoredObstacleSetupComponent* OdcAuthoredObstacleSetup; // 0x2f8
    UOdcObstacleComponent* OdcObstacle; // 0x300
    USceneComponent* DefaultSceneRoot; // 0x308
    static ABP_Sanc_Alcove_02_Parent_C* StaticClass();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Sanc_Alcove_02_Parent(int32_t EntryPoint, TArray<UActorComponent*>& K2Node_MakeArray_Array);
}; // Size: 0x310
#pragma pack(pop)
