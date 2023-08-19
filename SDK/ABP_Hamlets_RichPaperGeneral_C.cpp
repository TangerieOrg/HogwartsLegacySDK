#include "ABP_Hamlets_RichPaperGeneral_C.hpp"
#include "ABP_InventoryObject_C.hpp"
#include "ECalloutActions.hpp"
#include "ECalloutType.hpp"
#include "FCalloutInformation.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UChildActorComponent.hpp"
#include "UFunction.hpp"
ABP_Hamlets_RichPaperGeneral_C* ABP_Hamlets_RichPaperGeneral_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/InventoryObjects/Hamlets/BP_Hamlets_RichPaperGeneral.BP_Hamlets_RichPaperGeneral_C");
    return (ABP_Hamlets_RichPaperGeneral_C*)res;
}
void ABP_Hamlets_RichPaperGeneral_C::ReceiveBeginPlay0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/InventoryObjects/Hamlets/BP_Hamlets_RichPaperGeneral.BP_Hamlets_RichPaperGeneral_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_Hamlets_RichPaperGeneral_C::ExecuteUbergraph_BP_Hamlets_RichPaperGeneral(int32_t EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, int32_t Temp_int_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool Temp_bool_IsClosed_Variable, FCalloutInformation K2Node_MakeStruct_CalloutInformation) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/InventoryObjects/Hamlets/BP_Hamlets_RichPaperGeneral.BP_Hamlets_RichPaperGeneral_C.ExecuteUbergraph_BP_Hamlets_RichPaperGeneral"));
    struct Params_ExecuteUbergraph_BP_Hamlets_RichPaperGeneral {
        int32_t EntryPoint; // 0x0
        bool Temp_bool_Has_Been_Initd_Variable; // 0x4
        char pad_5[0x3];
        int32_t Temp_int_Variable; // 0x8
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0xc
        bool CallFunc_Less_IntInt_ReturnValue; // 0x10
        bool Temp_bool_IsClosed_Variable; // 0x11
        char pad_12[0x6];
        FCalloutInformation K2Node_MakeStruct_CalloutInformation; // 0x18
    }; // Size: 0x70
    Params_ExecuteUbergraph_BP_Hamlets_RichPaperGeneral params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.Temp_bool_Has_Been_Initd_Variable = (bool)Temp_bool_Has_Been_Initd_Variable;
    params.Temp_int_Variable = (int32_t)Temp_int_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.Temp_bool_IsClosed_Variable = (bool)Temp_bool_IsClosed_Variable;
    params.K2Node_MakeStruct_CalloutInformation = (FCalloutInformation)K2Node_MakeStruct_CalloutInformation;
    ProcessEvent(func, &params);
}
