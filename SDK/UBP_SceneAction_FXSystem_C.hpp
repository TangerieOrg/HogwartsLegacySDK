#pragma once
#include <cstdint>
#include "EAttachLocation\Type.hpp"
#include "E_ParticleCompletionMethod\Type.hpp"
#include "FFXOverride.hpp"
#include "FLinearColor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "USceneAction_Blueprint.hpp"
class UFXSystemAsset;
class UTransformProvider;
class UFXSystemComponent;
class UColorProvider;
class UObject;
class UBoolProvider;
class UFloatProvider;
#pragma pack(push, 1)
class UBP_SceneAction_FXSystem_C : public USceneAction_Blueprint {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xa8
    UFXSystemAsset* DefaultParticleSystem; // 0xb0
    UFXSystemComponent* FXComponent; // 0xb8
    TArray<FFXOverride> ParticleSystemOverrides; // 0xc0
    FName AttachPointName; // 0xd0
    char pad_d8[0x8];
    FTransform Transform; // 0xe0
    EAttachLocation::Type LocationType; // 0x110
    E_ParticleCompletionMethod::Type CompletionMethod; // 0x111
    char pad_112[0x146];
    int32_t Translucent_Sort_Priority; // 0x258
    char pad_25c[0x4];
    static UBP_SceneAction_FXSystem_C* StaticClass();
    void GetParticleSystem(UFXSystemAsset*& ParticleSystem, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, FFXOverride CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsMatch_ReturnValue);
    void OnComplete(bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
    void SpawnFXSystem(UFXSystemAsset* ParticleSystem, bool CallFunc_IsValid_ReturnValue, FString CallFunc_GetDisplayName_ReturnValue);
    bool IsProxyRequiredBP0();
    bool IsInstant0(bool CallFunc_EqualEqual_ByteByte_ReturnValue);
    FLinearColor GetActionColor0();
    void GetDisplayName0();
    void OnEnterInterval0(float Time, bool IsScrubbing);
    void OnExitInterval0(float Time, bool Cancelled, bool IsScrubbing);
    void OnInstant0(float Time, bool IsScrubbing);
    void OnSetTimeInsideInterval0(float Time, float LocalTime, bool IsScrubbing);
    void ExecuteUbergraph_BP_SceneAction_FXSystem(int32_t EntryPoint, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable, float K2Node_Event_Time_3, bool K2Node_Event_IsScrubbing_3, float K2Node_Event_Time_2, bool K2Node_Event_Cancelled, bool K2Node_Event_IsScrubbing_2, float K2Node_Event_Time_1, bool K2Node_Event_IsScrubbing_1, float K2Node_Event_Time, float K2Node_Event_LocalTime, bool K2Node_Event_IsScrubbing, int32_t Temp_int_Loop_Counter_Variable_1, bool CallFunc_IsValid_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue_1, TArray<UTransformProvider*>& CallFunc_Map_Values_Values, TArray<FName>& CallFunc_Map_Keys_Keys, int32_t CallFunc_Array_Length_ReturnValue, UObject* CallFunc_GetContext_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable_1, int32_t Temp_int_Array_Index_Variable_2, FName CallFunc_Array_Get_Item, UTransformProvider* CallFunc_Array_Get_Item_1, FTransform CallFunc_GetTransformBP_ReturnValue, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, UObject* CallFunc_GetContext_ReturnValue_1, UObject* CallFunc_GetContext_ReturnValue_2, TArray<UBoolProvider*>& CallFunc_Map_Values_Values_1, TArray<UFloatProvider*>& CallFunc_Map_Values_Values_2, TArray<FName>& CallFunc_Map_Keys_Keys_1, UFloatProvider* CallFunc_Array_Get_Item_2, FName CallFunc_Array_Get_Item_3, float CallFunc_GetFloatBP_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue_1, TArray<FName>& CallFunc_Map_Keys_Keys_2, int32_t Temp_int_Loop_Counter_Variable_2, int32_t CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, int32_t CallFunc_Add_IntInt_ReturnValue_2, int32_t Temp_int_Loop_Counter_Variable_3, UObject* CallFunc_GetContext_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_2, int32_t CallFunc_Add_IntInt_ReturnValue_3, int32_t Temp_int_Array_Index_Variable_3, TArray<UColorProvider*>& CallFunc_Map_Values_Values_3, FName CallFunc_Array_Get_Item_4, UColorProvider* CallFunc_Array_Get_Item_5, UBoolProvider* CallFunc_Array_Get_Item_6, FLinearColor CallFunc_GetColorBP_ReturnValue, bool CallFunc_GetBoolBP_ReturnValue, TArray<FName>& CallFunc_Map_Keys_Keys_3, int32_t CallFunc_Array_Length_ReturnValue_3, FName CallFunc_Array_Get_Item_7, bool CallFunc_Less_IntInt_ReturnValue_3);
}; // Size: 0x260
#pragma pack(pop)
