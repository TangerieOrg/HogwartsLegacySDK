#include "AActor.hpp"
#include "ABP_HM_OutsideLantern_C.hpp"
#include "ABP_LightFixture_Master_C.hpp"
#include "ETimelineDirection\Type.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FTimerHandle.hpp"
#include "UFunction.hpp"
#include "UPointLightComponent.hpp"
#include "USpotLightComponent.hpp"
#include "UTimelineComponent.hpp"
void ABP_HM_OutsideLantern_C::Brighten() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogsmeade/Blueprints/LightingFixtures/BP_HM_OutsideLantern.BP_HM_OutsideLantern_C.Brighten"));
    struct Params_Brighten {
    }; // Size: 0x0
    Params_Brighten params{};
    ProcessEvent(func, &params);
}
void ABP_HM_OutsideLantern_C::SwitchOff(AActor* SwitchActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogsmeade/Blueprints/LightingFixtures/BP_HM_OutsideLantern.BP_HM_OutsideLantern_C.SwitchOff"));
    struct Params_SwitchOff {
        AActor* SwitchActor; // 0x0
    }; // Size: 0x8
    Params_SwitchOff params{};
    params.SwitchActor = (AActor*)SwitchActor;
    ProcessEvent(func, &params);
}
ABP_HM_OutsideLantern_C* ABP_HM_OutsideLantern_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogsmeade/Blueprints/LightingFixtures/BP_HM_OutsideLantern.BP_HM_OutsideLantern_C");
    return (ABP_HM_OutsideLantern_C*)res;
}
void ABP_HM_OutsideLantern_C::Timeline_0__FinishedFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogsmeade/Blueprints/LightingFixtures/BP_HM_OutsideLantern.BP_HM_OutsideLantern_C.Timeline_0__FinishedFunc"));
    struct Params_Timeline_0__FinishedFunc {
    }; // Size: 0x0
    Params_Timeline_0__FinishedFunc params{};
    ProcessEvent(func, &params);
}
void ABP_HM_OutsideLantern_C::SwitchOn(AActor* SwitchActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogsmeade/Blueprints/LightingFixtures/BP_HM_OutsideLantern.BP_HM_OutsideLantern_C.SwitchOn"));
    struct Params_SwitchOn {
        AActor* SwitchActor; // 0x0
    }; // Size: 0x8
    Params_SwitchOn params{};
    params.SwitchActor = (AActor*)SwitchActor;
    ProcessEvent(func, &params);
}
void ABP_HM_OutsideLantern_C::Timeline_0__UpdateFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogsmeade/Blueprints/LightingFixtures/BP_HM_OutsideLantern.BP_HM_OutsideLantern_C.Timeline_0__UpdateFunc"));
    struct Params_Timeline_0__UpdateFunc {
    }; // Size: 0x0
    Params_Timeline_0__UpdateFunc params{};
    ProcessEvent(func, &params);
}
void ABP_HM_OutsideLantern_C::ExecuteUbergraph_BP_HM_OutsideLantern(int32_t EntryPoint, int32_t Temp_int_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue_1, int32_t Temp_int_Array_Index_Variable_1, TArray<UPointLightComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, AActor* K2Node_Event_SwitchActor_1, UPointLightComponent* CallFunc_Array_Get_Item, UPointLightComponent* CallFunc_Array_Get_Item_1, int32_t CallFunc_Array_Length_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, AActor* K2Node_Event_SwitchActor, int32_t Temp_int_Loop_Counter_Variable_1, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_2, FTimerHandle CallFunc_K2_SetTimer_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue_2, int32_t CallFunc_Array_Add_ReturnValue, float CallFunc_Array_Get_Item_2, float CallFunc_Lerp_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogsmeade/Blueprints/LightingFixtures/BP_HM_OutsideLantern.BP_HM_OutsideLantern_C.ExecuteUbergraph_BP_HM_OutsideLantern"));
    struct Params_ExecuteUbergraph_BP_HM_OutsideLantern {
        int32_t EntryPoint; // 0x0
        int32_t Temp_int_Variable; // 0x4
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x8
        bool CallFunc_EqualEqual_ByteByte_ReturnValue; // 0xc
        char pad_d[0x3];
        int32_t Temp_int_Array_Index_Variable; // 0x10
        int32_t Temp_int_Loop_Counter_Variable; // 0x14
        int32_t CallFunc_Add_IntInt_ReturnValue_1; // 0x18
        int32_t Temp_int_Array_Index_Variable_1; // 0x1c
        TArray<UPointLightComponent*> CallFunc_K2_GetComponentsByClass_ReturnValue; // 0x20
        AActor* K2Node_Event_SwitchActor_1; // 0x30
        UPointLightComponent* CallFunc_Array_Get_Item; // 0x38
        UPointLightComponent* CallFunc_Array_Get_Item_1; // 0x40
        int32_t CallFunc_Array_Length_ReturnValue; // 0x48
        int32_t CallFunc_Array_Length_ReturnValue_1; // 0x4c
        bool CallFunc_Less_IntInt_ReturnValue; // 0x50
        char pad_51[0x3];
        int32_t CallFunc_Array_Length_ReturnValue_2; // 0x54
        bool CallFunc_Less_IntInt_ReturnValue_1; // 0x58
        char pad_59[0x7];
        AActor* K2Node_Event_SwitchActor; // 0x60
        int32_t Temp_int_Loop_Counter_Variable_1; // 0x68
        float CallFunc_Add_FloatFloat_ReturnValue; // 0x6c
        bool CallFunc_Less_IntInt_ReturnValue_2; // 0x70
        char pad_71[0x7];
        FTimerHandle CallFunc_K2_SetTimer_ReturnValue; // 0x78
        int32_t CallFunc_Add_IntInt_ReturnValue_2; // 0x80
        int32_t CallFunc_Array_Add_ReturnValue; // 0x84
        float CallFunc_Array_Get_Item_2; // 0x88
        float CallFunc_Lerp_ReturnValue; // 0x8c
    }; // Size: 0x90
    Params_ExecuteUbergraph_BP_HM_OutsideLantern params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.Temp_int_Variable = (int32_t)Temp_int_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Add_IntInt_ReturnValue_1 = (int32_t)CallFunc_Add_IntInt_ReturnValue_1;
    params.Temp_int_Array_Index_Variable_1 = (int32_t)Temp_int_Array_Index_Variable_1;
    params.CallFunc_K2_GetComponentsByClass_ReturnValue = (TArray<UPointLightComponent*>)CallFunc_K2_GetComponentsByClass_ReturnValue;
    params.K2Node_Event_SwitchActor_1 = (AActor*)K2Node_Event_SwitchActor_1;
    params.CallFunc_Array_Get_Item = (UPointLightComponent*)CallFunc_Array_Get_Item;
    params.CallFunc_Array_Get_Item_1 = (UPointLightComponent*)CallFunc_Array_Get_Item_1;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Array_Length_ReturnValue_1 = (int32_t)CallFunc_Array_Length_ReturnValue_1;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_Array_Length_ReturnValue_2 = (int32_t)CallFunc_Array_Length_ReturnValue_2;
    params.CallFunc_Less_IntInt_ReturnValue_1 = (bool)CallFunc_Less_IntInt_ReturnValue_1;
    params.K2Node_Event_SwitchActor = (AActor*)K2Node_Event_SwitchActor;
    params.Temp_int_Loop_Counter_Variable_1 = (int32_t)Temp_int_Loop_Counter_Variable_1;
    params.CallFunc_Add_FloatFloat_ReturnValue = (float)CallFunc_Add_FloatFloat_ReturnValue;
    params.CallFunc_Less_IntInt_ReturnValue_2 = (bool)CallFunc_Less_IntInt_ReturnValue_2;
    params.CallFunc_K2_SetTimer_ReturnValue = (FTimerHandle)CallFunc_K2_SetTimer_ReturnValue;
    params.CallFunc_Add_IntInt_ReturnValue_2 = (int32_t)CallFunc_Add_IntInt_ReturnValue_2;
    params.CallFunc_Array_Add_ReturnValue = (int32_t)CallFunc_Array_Add_ReturnValue;
    params.CallFunc_Array_Get_Item_2 = (float)CallFunc_Array_Get_Item_2;
    params.CallFunc_Lerp_ReturnValue = (float)CallFunc_Lerp_ReturnValue;
    ProcessEvent(func, &params);
    CallFunc_K2_GetComponentsByClass_ReturnValue = params.CallFunc_K2_GetComponentsByClass_ReturnValue;
}
void ABP_HM_OutsideLantern_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogsmeade/Blueprints/LightingFixtures/BP_HM_OutsideLantern.BP_HM_OutsideLantern_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
