#include "ABP_ActorLodRotationManager_C.hpp"
#include "ALODActorRotationManager.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
#include "USceneComponent.hpp"
ABP_ActorLodRotationManager_C* ABP_ActorLodRotationManager_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Levels/ProxyLODHarvest/BP_ActorLodRotationManager.BP_ActorLodRotationManager_C");
    return (ABP_ActorLodRotationManager_C*)res;
}
void ABP_ActorLodRotationManager_C::CheckAnyValidLod(bool& IsValid, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue) {}
void ABP_ActorLodRotationManager_C::ReceiveTick(float DeltaSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/ProxyLODHarvest/BP_ActorLodRotationManager.BP_ActorLodRotationManager_C.ReceiveTick"));
    struct Params_ReceiveTick {
        float DeltaSeconds; // 0x0
    }; // Size: 0x4
    Params_ReceiveTick params{};
    params.DeltaSeconds = (float)DeltaSeconds;
    ProcessEvent(func, &params);
}
void ABP_ActorLodRotationManager_C::ExecuteUbergraph_BP_ActorLodRotationManager(int32_t EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_CheckAnyActorRefValid_bTrue, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable_1, bool Temp_bool_IsClosed_Variable_1, bool Temp_bool_Has_Been_Initd_Variable_2, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable, float K2Node_Event_DeltaSeconds) {}
