#pragma once
#include <cstdint>
#include "ATransfigurationStructureBase.hpp"
class USceneComponent;
class UObject;
class ABP_SelfArrangingBooks_C;
class USplineComponent;
class ABP_AmbientPathEffects_C;
#pragma pack(push, 1)
class ABP_SelfArrangingBookshelf_Parent_C : public ATransfigurationStructureBase {
public:
    USceneComponent* DefaultSceneRoot; // 0x2a8
    static ABP_SelfArrangingBookshelf_Parent_C* StaticClass();
    void SetUpSplineEffects(UObject* ChildActor, TArray<USplineComponent*>& SplineArray, int32_t CallFunc_Array_Length_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue_1, ABP_AmbientPathEffects_C* K2Node_DynamicCast_AsBP_Ambient_Path_Effects, bool K2Node_DynamicCast_bSuccess, ABP_AmbientPathEffects_C* K2Node_DynamicCast_AsBP_Ambient_Path_Effects_1, bool K2Node_DynamicCast_bSuccess_1, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, USplineComponent* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue);
    void SetUpBookChildActor(UObject* ChildActor, TArray<USplineComponent*>& SplineArray, int32_t Temp_int_Array_Index_Variable, int32_t CallFunc_Array_Length_ReturnValue, USplineComponent* CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue_1, ABP_SelfArrangingBooks_C* K2Node_DynamicCast_AsBP_Self_Arranging_Books, bool K2Node_DynamicCast_bSuccess, ABP_SelfArrangingBooks_C* K2Node_DynamicCast_AsBP_Self_Arranging_Books_1, bool K2Node_DynamicCast_bSuccess_1, int32_t Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue);
}; // Size: 0x2b0
#pragma pack(pop)
