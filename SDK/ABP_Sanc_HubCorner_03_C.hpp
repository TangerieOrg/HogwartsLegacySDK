#pragma once
#include <cstdint>
#include "ATransfigurationStructureBase.hpp"
#include "FPointerToUberGraphFrame.hpp"
class UCameraStackFramingLocationComponent;
class UOdcAuthoredObstacleSetupComponent;
class UOdcObstacleComponent;
class USplineComponent;
class USceneComponent;
class UObject;
class ABP_SelfArrangingBooks_C;
class UActorComponent;
#pragma pack(push, 1)
class ABP_Sanc_HubCorner_03_C : public ATransfigurationStructureBase {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x2a8
    UCameraStackFramingLocationComponent* CameraStackFramingLocation; // 0x2b0
    UOdcAuthoredObstacleSetupComponent* OdcAuthoredObstacleSetup01; // 0x2b8
    UOdcObstacleComponent* OdcObstacle; // 0x2c0
    UOdcAuthoredObstacleSetupComponent* OdcAuthoredObstacleSetup03; // 0x2c8
    UOdcAuthoredObstacleSetupComponent* OdcAuthoredObstacleSetup02; // 0x2d0
    USceneComponent* NavObstacleSetup; // 0x2d8
    USceneComponent* CornerWall_WallPiece_05; // 0x2e0
    USceneComponent* CornerWall_Column_04; // 0x2e8
    USceneComponent* CornerWall_WallPiece_04; // 0x2f0
    USceneComponent* CornerWall_Column_03; // 0x2f8
    USceneComponent* CornerWall_WallPiece_03; // 0x300
    USceneComponent* CornerWall_WallPiece_02; // 0x308
    USceneComponent* CornerWall_Column_02; // 0x310
    USceneComponent* CornerWall_Column_01; // 0x318
    USceneComponent* CornerWall_WallPiece_01; // 0x320
    USceneComponent* Scene; // 0x328
    static ABP_Sanc_HubCorner_03_C* StaticClass();
    void SetUpBookChildActor(UObject* ChildActor, TArray<USplineComponent*>& SplineArray, int32_t Temp_int_Array_Index_Variable, int32_t CallFunc_Array_Length_ReturnValue, USplineComponent* CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue_1, ABP_SelfArrangingBooks_C* K2Node_DynamicCast_AsBP_Self_Arranging_Books, bool K2Node_DynamicCast_bSuccess, ABP_SelfArrangingBooks_C* K2Node_DynamicCast_AsBP_Self_Arranging_Books_1, bool K2Node_DynamicCast_bSuccess_1, int32_t Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Sanc_HubCorner_03(int32_t EntryPoint, TArray<UActorComponent*>& K2Node_MakeArray_Array);
}; // Size: 0x330
#pragma pack(pop)
