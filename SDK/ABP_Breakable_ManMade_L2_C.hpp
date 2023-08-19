#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FPointerToUberGraphFrame.hpp"
class UChildActorComponent;
class USceneComponent;
class UObjectStateInfo;
#pragma pack(push, 1)
class ABP_Breakable_ManMade_L2_C : public AActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x248
    UChildActorComponent* BP_Int_BCProps_CloseCrate_Medium_001; // 0x250
    UChildActorComponent* BP_Int_BCProps_OpenCrate_Small_002; // 0x258
    UChildActorComponent* BP_Int_BCProps_CloseCrate_Large_002; // 0x260
    UChildActorComponent* BP_Prop_Barrel_Breakable_A; // 0x268
    UChildActorComponent* BP_Prop_Barrel_Breakable_A_1; // 0x270
    UChildActorComponent* BP_Int_BCProps_WoodPile_Large_001; // 0x278
    UChildActorComponent* BP_OPP_FlourSack; // 0x280
    UChildActorComponent* BP_BanditCamp_BreakableFloor; // 0x288
    USceneComponent* DefaultSceneRoot; // 0x290
    static ABP_Breakable_ManMade_L2_C* StaticClass();
    void ReceiveBeginPlay0();
    void ExecuteUbergraph_BP_Breakable_ManMade_L2(int32_t EntryPoint, int32_t Temp_int_Loop_Counter_Variable, int32_t Temp_int_Array_Index_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, TArray<UChildActorComponent*>& K2Node_MakeArray_Array, int32_t CallFunc_Array_Length_ReturnValue, UChildActorComponent* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
}; // Size: 0x298
#pragma pack(pop)
