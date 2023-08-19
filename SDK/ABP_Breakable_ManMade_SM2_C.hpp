#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FPointerToUberGraphFrame.hpp"
class UChildActorComponent;
class USceneComponent;
class UObjectStateInfo;
#pragma pack(push, 1)
class ABP_Breakable_ManMade_SM2_C : public AActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x248
    UChildActorComponent* BP_Prop_Barrel_Breakable_A; // 0x250
    UChildActorComponent* BP_Int_BCProps_WoodPile_Large_001; // 0x258
    UChildActorComponent* BP_Int_BCProps_Bucket_Small_001; // 0x260
    USceneComponent* DefaultSceneRoot; // 0x268
    static ABP_Breakable_ManMade_SM2_C* StaticClass();
    void ReceiveBeginPlay0();
    void ExecuteUbergraph_BP_Breakable_ManMade_SM2(int32_t EntryPoint, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, TArray<UChildActorComponent*>& K2Node_MakeArray_Array, UChildActorComponent* CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
}; // Size: 0x270
#pragma pack(pop)
