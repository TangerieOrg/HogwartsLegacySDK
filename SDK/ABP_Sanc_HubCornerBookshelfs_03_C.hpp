#pragma once
#include <cstdint>
#include "ATransfigurationStructureBase.hpp"
class UCameraStackFramingLocationComponent;
class USceneComponent;
class UObject;
class ABP_SelfArrangingBooks_C;
class USplineComponent;
class ABP_AmbientPathEffects_C;
#pragma pack(push, 1)
class ABP_Sanc_HubCornerBookshelfs_03_C : public ATransfigurationStructureBase {
public:
    UCameraStackFramingLocationComponent* CameraStackFramingLocation; // 0x2a8
    USceneComponent* CornerShelves_Mzoo_BirdCage; // 0x2b0
    USceneComponent* CornerShelves_ShelfPiece_04; // 0x2b8
    USceneComponent* CornerShelves_ShelfPiece_03a; // 0x2c0
    USceneComponent* CornerShelves_ShelfPiece_03; // 0x2c8
    USceneComponent* CornerShelves_ShelfPiece_02; // 0x2d0
    USceneComponent* CornerShelves_ShelfPiece_01; // 0x2d8
    USceneComponent* Scene; // 0x2e0
    static ABP_Sanc_HubCornerBookshelfs_03_C* StaticClass();
    void SetUpSplineEffects(UObject* ChildActor, TArray<USplineComponent*>& SplineArray, int32_t CallFunc_Array_Length_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue_1, ABP_AmbientPathEffects_C* K2Node_DynamicCast_AsBP_Ambient_Path_Effects, bool K2Node_DynamicCast_bSuccess, ABP_AmbientPathEffects_C* K2Node_DynamicCast_AsBP_Ambient_Path_Effects_1, bool K2Node_DynamicCast_bSuccess_1, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, USplineComponent* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue);
    void SetUpBookChildActor(UObject* ChildActor, TArray<USplineComponent*>& SplineArray, int32_t Temp_int_Array_Index_Variable, int32_t CallFunc_Array_Length_ReturnValue, USplineComponent* CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue_1, ABP_SelfArrangingBooks_C* K2Node_DynamicCast_AsBP_Self_Arranging_Books, bool K2Node_DynamicCast_bSuccess, ABP_SelfArrangingBooks_C* K2Node_DynamicCast_AsBP_Self_Arranging_Books_1, bool K2Node_DynamicCast_bSuccess_1, int32_t Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue);
}; // Size: 0x2e8
#pragma pack(pop)
