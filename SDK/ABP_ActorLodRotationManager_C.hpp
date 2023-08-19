#pragma once
#include <cstdint>
#include "ALODActorRotationManager.hpp"
#include "FPointerToUberGraphFrame.hpp"
class USceneComponent;
#pragma pack(push, 1)
class ABP_ActorLodRotationManager_C : public ALODActorRotationManager {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x248
    USceneComponent* DefaultSceneRoot; // 0x250
    TArray<void*> LODs; // 0x258
    static ABP_ActorLodRotationManager_C* StaticClass();
    void CheckAnyValidLod(bool& IsValid, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_ActorLodRotationManager(int32_t EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_CheckAnyActorRefValid_bTrue, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable_1, bool Temp_bool_IsClosed_Variable_1, bool Temp_bool_Has_Been_Initd_Variable_2, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable, float K2Node_Event_DeltaSeconds);
}; // Size: 0x268
#pragma pack(pop)
