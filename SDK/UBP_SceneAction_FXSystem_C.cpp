#include "EAttachLocation\Type.hpp"
#include "E_ParticleCompletionMethod\Type.hpp"
#include "FFXOverride.hpp"
#include "FLinearColor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UBP_SceneAction_FXSystem_C.hpp"
#include "UBoolProvider.hpp"
#include "UColorProvider.hpp"
#include "UFXSystemAsset.hpp"
#include "UFXSystemComponent.hpp"
#include "UFloatProvider.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "USceneAction_Blueprint.hpp"
#include "UTransformProvider.hpp"
void UBP_SceneAction_FXSystem_C::GetDisplayName0() {}
void UBP_SceneAction_FXSystem_C::OnEnterInterval0(float Time, bool IsScrubbing) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Cinematics/SceneActions/ParticleSystem/BP_SceneAction_FXSystem.BP_SceneAction_FXSystem_C.OnEnterInterval"));
    struct Params_OnEnterInterval {
        float Time; // 0x0
        bool IsScrubbing; // 0x4
    }; // Size: 0x5
    Params_OnEnterInterval params{};
    params.Time = (float)Time;
    params.IsScrubbing = (bool)IsScrubbing;
    ProcessEvent(func, &params);
}
UBP_SceneAction_FXSystem_C* UBP_SceneAction_FXSystem_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Cinematics/SceneActions/ParticleSystem/BP_SceneAction_FXSystem.BP_SceneAction_FXSystem_C");
    return (UBP_SceneAction_FXSystem_C*)res;
}
void UBP_SceneAction_FXSystem_C::OnInstant0(float Time, bool IsScrubbing) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Cinematics/SceneActions/ParticleSystem/BP_SceneAction_FXSystem.BP_SceneAction_FXSystem_C.OnInstant"));
    struct Params_OnInstant {
        float Time; // 0x0
        bool IsScrubbing; // 0x4
    }; // Size: 0x5
    Params_OnInstant params{};
    params.Time = (float)Time;
    params.IsScrubbing = (bool)IsScrubbing;
    ProcessEvent(func, &params);
}
void UBP_SceneAction_FXSystem_C::GetParticleSystem(UFXSystemAsset*& ParticleSystem, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, FFXOverride CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsMatch_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Cinematics/SceneActions/ParticleSystem/BP_SceneAction_FXSystem.BP_SceneAction_FXSystem_C.GetParticleSystem"));
    struct Params_GetParticleSystem {
        UFXSystemAsset* ParticleSystem; // 0x0
        int32_t Temp_int_Array_Index_Variable; // 0x8
        int32_t Temp_int_Loop_Counter_Variable; // 0xc
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x10
        char pad_14[0x4];
        FFXOverride CallFunc_Array_Get_Item; // 0x18
        int32_t CallFunc_Array_Length_ReturnValue; // 0x30
        bool CallFunc_Less_IntInt_ReturnValue; // 0x34
        bool CallFunc_IsMatch_ReturnValue; // 0x35
    }; // Size: 0x36
    Params_GetParticleSystem params{};
    params.ParticleSystem = (UFXSystemAsset*)ParticleSystem;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_Array_Get_Item = (FFXOverride)CallFunc_Array_Get_Item;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_IsMatch_ReturnValue = (bool)CallFunc_IsMatch_ReturnValue;
    ProcessEvent(func, &params);
    ParticleSystem = params.ParticleSystem;
}
void UBP_SceneAction_FXSystem_C::OnComplete(bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Cinematics/SceneActions/ParticleSystem/BP_SceneAction_FXSystem.BP_SceneAction_FXSystem_C.OnComplete"));
    struct Params_OnComplete {
        bool CallFunc_IsValid_ReturnValue; // 0x0
        bool K2Node_SwitchEnum_CmpSuccess; // 0x1
    }; // Size: 0x2
    Params_OnComplete params{};
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.K2Node_SwitchEnum_CmpSuccess = (bool)K2Node_SwitchEnum_CmpSuccess;
    ProcessEvent(func, &params);
}
FLinearColor UBP_SceneAction_FXSystem_C::GetActionColor0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Cinematics/SceneActions/ParticleSystem/BP_SceneAction_FXSystem.BP_SceneAction_FXSystem_C.GetActionColor"));
    struct Params_GetActionColor {
        FLinearColor ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetActionColor params{};
    ProcessEvent(func, &params);
    return (FLinearColor)params.ReturnValue;
}
void UBP_SceneAction_FXSystem_C::SpawnFXSystem(UFXSystemAsset* ParticleSystem, bool CallFunc_IsValid_ReturnValue, FString CallFunc_GetDisplayName_ReturnValue) {}
bool UBP_SceneAction_FXSystem_C::IsProxyRequiredBP0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Cinematics/SceneActions/ParticleSystem/BP_SceneAction_FXSystem.BP_SceneAction_FXSystem_C.IsProxyRequiredBP"));
    struct Params_IsProxyRequiredBP {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsProxyRequiredBP params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UBP_SceneAction_FXSystem_C::IsInstant0(bool CallFunc_EqualEqual_ByteByte_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Cinematics/SceneActions/ParticleSystem/BP_SceneAction_FXSystem.BP_SceneAction_FXSystem_C.IsInstant"));
    struct Params_IsInstant {
        bool ReturnValue; // 0x0
        bool CallFunc_EqualEqual_ByteByte_ReturnValue; // 0x1
    }; // Size: 0x2
    Params_IsInstant params{};
    params.CallFunc_EqualEqual_ByteByte_ReturnValue = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UBP_SceneAction_FXSystem_C::OnExitInterval0(float Time, bool Cancelled, bool IsScrubbing) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Cinematics/SceneActions/ParticleSystem/BP_SceneAction_FXSystem.BP_SceneAction_FXSystem_C.OnExitInterval"));
    struct Params_OnExitInterval {
        float Time; // 0x0
        bool Cancelled; // 0x4
        bool IsScrubbing; // 0x5
    }; // Size: 0x6
    Params_OnExitInterval params{};
    params.Time = (float)Time;
    params.Cancelled = (bool)Cancelled;
    params.IsScrubbing = (bool)IsScrubbing;
    ProcessEvent(func, &params);
}
void UBP_SceneAction_FXSystem_C::OnSetTimeInsideInterval0(float Time, float LocalTime, bool IsScrubbing) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Cinematics/SceneActions/ParticleSystem/BP_SceneAction_FXSystem.BP_SceneAction_FXSystem_C.OnSetTimeInsideInterval"));
    struct Params_OnSetTimeInsideInterval {
        float Time; // 0x0
        float LocalTime; // 0x4
        bool IsScrubbing; // 0x8
    }; // Size: 0x9
    Params_OnSetTimeInsideInterval params{};
    params.Time = (float)Time;
    params.LocalTime = (float)LocalTime;
    params.IsScrubbing = (bool)IsScrubbing;
    ProcessEvent(func, &params);
}
void UBP_SceneAction_FXSystem_C::ExecuteUbergraph_BP_SceneAction_FXSystem(int32_t EntryPoint, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable, float K2Node_Event_Time_3, bool K2Node_Event_IsScrubbing_3, float K2Node_Event_Time_2, bool K2Node_Event_Cancelled, bool K2Node_Event_IsScrubbing_2, float K2Node_Event_Time_1, bool K2Node_Event_IsScrubbing_1, float K2Node_Event_Time, float K2Node_Event_LocalTime, bool K2Node_Event_IsScrubbing, int32_t Temp_int_Loop_Counter_Variable_1, bool CallFunc_IsValid_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue_1, TArray<UTransformProvider*>& CallFunc_Map_Values_Values, TArray<FName>& CallFunc_Map_Keys_Keys, int32_t CallFunc_Array_Length_ReturnValue, UObject* CallFunc_GetContext_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable_1, int32_t Temp_int_Array_Index_Variable_2, FName CallFunc_Array_Get_Item, UTransformProvider* CallFunc_Array_Get_Item_1, FTransform CallFunc_GetTransformBP_ReturnValue, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, UObject* CallFunc_GetContext_ReturnValue_1, UObject* CallFunc_GetContext_ReturnValue_2, TArray<UBoolProvider*>& CallFunc_Map_Values_Values_1, TArray<UFloatProvider*>& CallFunc_Map_Values_Values_2, TArray<FName>& CallFunc_Map_Keys_Keys_1, UFloatProvider* CallFunc_Array_Get_Item_2, FName CallFunc_Array_Get_Item_3, float CallFunc_GetFloatBP_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue_1, TArray<FName>& CallFunc_Map_Keys_Keys_2, int32_t Temp_int_Loop_Counter_Variable_2, int32_t CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, int32_t CallFunc_Add_IntInt_ReturnValue_2, int32_t Temp_int_Loop_Counter_Variable_3, UObject* CallFunc_GetContext_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_2, int32_t CallFunc_Add_IntInt_ReturnValue_3, int32_t Temp_int_Array_Index_Variable_3, TArray<UColorProvider*>& CallFunc_Map_Values_Values_3, FName CallFunc_Array_Get_Item_4, UColorProvider* CallFunc_Array_Get_Item_5, UBoolProvider* CallFunc_Array_Get_Item_6, FLinearColor CallFunc_GetColorBP_ReturnValue, bool CallFunc_GetBoolBP_ReturnValue, TArray<FName>& CallFunc_Map_Keys_Keys_3, int32_t CallFunc_Array_Length_ReturnValue_3, FName CallFunc_Array_Get_Item_7, bool CallFunc_Less_IntInt_ReturnValue_3) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Cinematics/SceneActions/ParticleSystem/BP_SceneAction_FXSystem.BP_SceneAction_FXSystem_C.ExecuteUbergraph_BP_SceneAction_FXSystem"));
    struct Params_ExecuteUbergraph_BP_SceneAction_FXSystem {
        int32_t EntryPoint; // 0x0
        int32_t Temp_int_Loop_Counter_Variable; // 0x4
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x8
        int32_t Temp_int_Array_Index_Variable; // 0xc
        float K2Node_Event_Time_3; // 0x10
        bool K2Node_Event_IsScrubbing_3; // 0x14
        char pad_15[0x3];
        float K2Node_Event_Time_2; // 0x18
        bool K2Node_Event_Cancelled; // 0x1c
        bool K2Node_Event_IsScrubbing_2; // 0x1d
        char pad_1e[0x2];
        float K2Node_Event_Time_1; // 0x20
        bool K2Node_Event_IsScrubbing_1; // 0x24
        char pad_25[0x3];
        float K2Node_Event_Time; // 0x28
        float K2Node_Event_LocalTime; // 0x2c
        bool K2Node_Event_IsScrubbing; // 0x30
        char pad_31[0x3];
        int32_t Temp_int_Loop_Counter_Variable_1; // 0x34
        bool CallFunc_IsValid_ReturnValue; // 0x38
        char pad_39[0x3];
        int32_t CallFunc_Add_IntInt_ReturnValue_1; // 0x3c
        TArray<UTransformProvider*> CallFunc_Map_Values_Values; // 0x40
        TArray<FName> CallFunc_Map_Keys_Keys; // 0x50
        int32_t CallFunc_Array_Length_ReturnValue; // 0x60
        char pad_64[0x4];
        UObject* CallFunc_GetContext_ReturnValue; // 0x68
        bool CallFunc_Less_IntInt_ReturnValue; // 0x70
        char pad_71[0x3];
        int32_t Temp_int_Array_Index_Variable_1; // 0x74
        int32_t Temp_int_Array_Index_Variable_2; // 0x78
        FName CallFunc_Array_Get_Item; // 0x7c
        char pad_84[0x4];
        UTransformProvider* CallFunc_Array_Get_Item_1; // 0x88
        FTransform CallFunc_GetTransformBP_ReturnValue; // 0x90
        FVector CallFunc_BreakTransform_Location; // 0xc0
        FRotator CallFunc_BreakTransform_Rotation; // 0xcc
        FVector CallFunc_BreakTransform_Scale; // 0xd8
        char pad_e4[0x4];
        UObject* CallFunc_GetContext_ReturnValue_1; // 0xe8
        UObject* CallFunc_GetContext_ReturnValue_2; // 0xf0
        TArray<UBoolProvider*> CallFunc_Map_Values_Values_1; // 0xf8
        TArray<UFloatProvider*> CallFunc_Map_Values_Values_2; // 0x108
        TArray<FName> CallFunc_Map_Keys_Keys_1; // 0x118
        UFloatProvider* CallFunc_Array_Get_Item_2; // 0x128
        FName CallFunc_Array_Get_Item_3; // 0x130
        float CallFunc_GetFloatBP_ReturnValue; // 0x138
        int32_t CallFunc_Array_Length_ReturnValue_1; // 0x13c
        TArray<FName> CallFunc_Map_Keys_Keys_2; // 0x140
        int32_t Temp_int_Loop_Counter_Variable_2; // 0x150
        int32_t CallFunc_Array_Length_ReturnValue_2; // 0x154
        bool CallFunc_Less_IntInt_ReturnValue_1; // 0x158
        char pad_159[0x3];
        int32_t CallFunc_Add_IntInt_ReturnValue_2; // 0x15c
        int32_t Temp_int_Loop_Counter_Variable_3; // 0x160
        char pad_164[0x4];
        UObject* CallFunc_GetContext_ReturnValue_3; // 0x168
        bool CallFunc_Less_IntInt_ReturnValue_2; // 0x170
        char pad_171[0x3];
        int32_t CallFunc_Add_IntInt_ReturnValue_3; // 0x174
        int32_t Temp_int_Array_Index_Variable_3; // 0x178
        char pad_17c[0x4];
        TArray<UColorProvider*> CallFunc_Map_Values_Values_3; // 0x180
        FName CallFunc_Array_Get_Item_4; // 0x190
        UColorProvider* CallFunc_Array_Get_Item_5; // 0x198
        UBoolProvider* CallFunc_Array_Get_Item_6; // 0x1a0
        FLinearColor CallFunc_GetColorBP_ReturnValue; // 0x1a8
        bool CallFunc_GetBoolBP_ReturnValue; // 0x1b8
        char pad_1b9[0x7];
        TArray<FName> CallFunc_Map_Keys_Keys_3; // 0x1c0
        int32_t CallFunc_Array_Length_ReturnValue_3; // 0x1d0
        FName CallFunc_Array_Get_Item_7; // 0x1d4
        bool CallFunc_Less_IntInt_ReturnValue_3; // 0x1dc
    }; // Size: 0x1dd
    Params_ExecuteUbergraph_BP_SceneAction_FXSystem params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.K2Node_Event_Time_3 = (float)K2Node_Event_Time_3;
    params.K2Node_Event_IsScrubbing_3 = (bool)K2Node_Event_IsScrubbing_3;
    params.K2Node_Event_Time_2 = (float)K2Node_Event_Time_2;
    params.K2Node_Event_Cancelled = (bool)K2Node_Event_Cancelled;
    params.K2Node_Event_IsScrubbing_2 = (bool)K2Node_Event_IsScrubbing_2;
    params.K2Node_Event_Time_1 = (float)K2Node_Event_Time_1;
    params.K2Node_Event_IsScrubbing_1 = (bool)K2Node_Event_IsScrubbing_1;
    params.K2Node_Event_Time = (float)K2Node_Event_Time;
    params.K2Node_Event_LocalTime = (float)K2Node_Event_LocalTime;
    params.K2Node_Event_IsScrubbing = (bool)K2Node_Event_IsScrubbing;
    params.Temp_int_Loop_Counter_Variable_1 = (int32_t)Temp_int_Loop_Counter_Variable_1;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_Add_IntInt_ReturnValue_1 = (int32_t)CallFunc_Add_IntInt_ReturnValue_1;
    params.CallFunc_Map_Values_Values = (TArray<UTransformProvider*>)CallFunc_Map_Values_Values;
    params.CallFunc_Map_Keys_Keys = (TArray<FName>)CallFunc_Map_Keys_Keys;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_GetContext_ReturnValue = (UObject*)CallFunc_GetContext_ReturnValue;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.Temp_int_Array_Index_Variable_1 = (int32_t)Temp_int_Array_Index_Variable_1;
    params.Temp_int_Array_Index_Variable_2 = (int32_t)Temp_int_Array_Index_Variable_2;
    params.CallFunc_Array_Get_Item = (FName)CallFunc_Array_Get_Item;
    params.CallFunc_Array_Get_Item_1 = (UTransformProvider*)CallFunc_Array_Get_Item_1;
    params.CallFunc_GetTransformBP_ReturnValue = (FTransform)CallFunc_GetTransformBP_ReturnValue;
    params.CallFunc_BreakTransform_Location = (FVector)CallFunc_BreakTransform_Location;
    params.CallFunc_BreakTransform_Rotation = (FRotator)CallFunc_BreakTransform_Rotation;
    params.CallFunc_BreakTransform_Scale = (FVector)CallFunc_BreakTransform_Scale;
    params.CallFunc_GetContext_ReturnValue_1 = (UObject*)CallFunc_GetContext_ReturnValue_1;
    params.CallFunc_GetContext_ReturnValue_2 = (UObject*)CallFunc_GetContext_ReturnValue_2;
    params.CallFunc_Map_Values_Values_1 = (TArray<UBoolProvider*>)CallFunc_Map_Values_Values_1;
    params.CallFunc_Map_Values_Values_2 = (TArray<UFloatProvider*>)CallFunc_Map_Values_Values_2;
    params.CallFunc_Map_Keys_Keys_1 = (TArray<FName>)CallFunc_Map_Keys_Keys_1;
    params.CallFunc_Array_Get_Item_2 = (UFloatProvider*)CallFunc_Array_Get_Item_2;
    params.CallFunc_Array_Get_Item_3 = (FName)CallFunc_Array_Get_Item_3;
    params.CallFunc_GetFloatBP_ReturnValue = (float)CallFunc_GetFloatBP_ReturnValue;
    params.CallFunc_Array_Length_ReturnValue_1 = (int32_t)CallFunc_Array_Length_ReturnValue_1;
    params.CallFunc_Map_Keys_Keys_2 = (TArray<FName>)CallFunc_Map_Keys_Keys_2;
    params.Temp_int_Loop_Counter_Variable_2 = (int32_t)Temp_int_Loop_Counter_Variable_2;
    params.CallFunc_Array_Length_ReturnValue_2 = (int32_t)CallFunc_Array_Length_ReturnValue_2;
    params.CallFunc_Less_IntInt_ReturnValue_1 = (bool)CallFunc_Less_IntInt_ReturnValue_1;
    params.CallFunc_Add_IntInt_ReturnValue_2 = (int32_t)CallFunc_Add_IntInt_ReturnValue_2;
    params.Temp_int_Loop_Counter_Variable_3 = (int32_t)Temp_int_Loop_Counter_Variable_3;
    params.CallFunc_GetContext_ReturnValue_3 = (UObject*)CallFunc_GetContext_ReturnValue_3;
    params.CallFunc_Less_IntInt_ReturnValue_2 = (bool)CallFunc_Less_IntInt_ReturnValue_2;
    params.CallFunc_Add_IntInt_ReturnValue_3 = (int32_t)CallFunc_Add_IntInt_ReturnValue_3;
    params.Temp_int_Array_Index_Variable_3 = (int32_t)Temp_int_Array_Index_Variable_3;
    params.CallFunc_Map_Values_Values_3 = (TArray<UColorProvider*>)CallFunc_Map_Values_Values_3;
    params.CallFunc_Array_Get_Item_4 = (FName)CallFunc_Array_Get_Item_4;
    params.CallFunc_Array_Get_Item_5 = (UColorProvider*)CallFunc_Array_Get_Item_5;
    params.CallFunc_Array_Get_Item_6 = (UBoolProvider*)CallFunc_Array_Get_Item_6;
    params.CallFunc_GetColorBP_ReturnValue = (FLinearColor)CallFunc_GetColorBP_ReturnValue;
    params.CallFunc_GetBoolBP_ReturnValue = (bool)CallFunc_GetBoolBP_ReturnValue;
    params.CallFunc_Map_Keys_Keys_3 = (TArray<FName>)CallFunc_Map_Keys_Keys_3;
    params.CallFunc_Array_Length_ReturnValue_3 = (int32_t)CallFunc_Array_Length_ReturnValue_3;
    params.CallFunc_Array_Get_Item_7 = (FName)CallFunc_Array_Get_Item_7;
    params.CallFunc_Less_IntInt_ReturnValue_3 = (bool)CallFunc_Less_IntInt_ReturnValue_3;
    ProcessEvent(func, &params);
    CallFunc_Map_Values_Values = params.CallFunc_Map_Values_Values;
    CallFunc_Map_Keys_Keys_2 = params.CallFunc_Map_Keys_Keys_2;
    CallFunc_Map_Keys_Keys = params.CallFunc_Map_Keys_Keys;
    CallFunc_Map_Values_Values_1 = params.CallFunc_Map_Values_Values_1;
    CallFunc_Map_Keys_Keys_3 = params.CallFunc_Map_Keys_Keys_3;
    CallFunc_Map_Values_Values_2 = params.CallFunc_Map_Values_Values_2;
    CallFunc_Map_Values_Values_3 = params.CallFunc_Map_Values_Values_3;
    CallFunc_Map_Keys_Keys_1 = params.CallFunc_Map_Keys_Keys_1;
}
