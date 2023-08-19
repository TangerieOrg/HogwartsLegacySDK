#include "EInputEvent.hpp"
#include "EUMGInputAction.hpp"
#include "FLegendItemData.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UCreatureDefinition.hpp"
#include "UCreatureState.hpp"
#include "UFunction.hpp"
#include "UImage.hpp"
#include "UOverlay.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UScreen.hpp"
#include "UTexture2D.hpp"
#include "UUI_BP_CreatureAbandonWidget_C.hpp"
#include "UUI_BP_Legend_Horizontal_Tooltip_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UWidgetAnimation.hpp"
TArray<FString> UUI_BP_CreatureAbandonWidget_C::GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_1) {}
UUI_BP_CreatureAbandonWidget_C* UUI_BP_CreatureAbandonWidget_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Nurturing/Creatures/UI_BP_CreatureAbandonWidget.UI_BP_CreatureAbandonWidget_C");
    return (UUI_BP_CreatureAbandonWidget_C*)res;
}
bool UUI_BP_CreatureAbandonWidget_C::BlueprintOnUMGInputAction(EUMGInputAction InputAction, EInputEvent InputEvent, int32_t CallFunc_PostEventAtLocation_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureAbandonWidget.UI_BP_CreatureAbandonWidget_C.BlueprintOnUMGInputAction"));
    struct Params_BlueprintOnUMGInputAction {
        EUMGInputAction InputAction; // 0x0
        EInputEvent InputEvent; // 0x1
        bool ReturnValue; // 0x2
        char pad_3[0x1];
        int32_t CallFunc_PostEventAtLocation_ReturnValue; // 0x4
        int32_t CallFunc_PostEventAtLocation_ReturnValue_1; // 0x8
        bool CallFunc_EqualEqual_ByteByte_ReturnValue; // 0xc
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_1; // 0xd
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_2; // 0xe
    }; // Size: 0xf
    Params_BlueprintOnUMGInputAction params{};
    params.InputAction = (EUMGInputAction)InputAction;
    params.InputEvent = (EInputEvent)InputEvent;
    params.CallFunc_PostEventAtLocation_ReturnValue = (int32_t)CallFunc_PostEventAtLocation_ReturnValue;
    params.CallFunc_PostEventAtLocation_ReturnValue_1 = (int32_t)CallFunc_PostEventAtLocation_ReturnValue_1;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_1;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_2;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UUI_BP_CreatureAbandonWidget_C::I_SetCreatureState(UCreatureState* CreatureState) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureAbandonWidget.UI_BP_CreatureAbandonWidget_C.I_SetCreatureState"));
    struct Params_I_SetCreatureState {
        UCreatureState* CreatureState; // 0x0
    }; // Size: 0x8
    Params_I_SetCreatureState params{};
    params.CreatureState = (UCreatureState*)CreatureState;
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureAbandonWidget_C::SetCreatureState(UCreatureState* CreatureState, UTexture2D* Temp_object_Variable, UCreatureDefinition* CallFunc_GetDefinition_ReturnValue, bool CallFunc_IsEgg_ReturnValue, bool CallFunc_GetIsMale_ReturnValue, bool CallFunc_IsPregnant_ReturnValue, FString CallFunc_GetCreatureIconTextureName_IconTextureName, UTexture2D* Temp_object_Variable_1, bool Temp_bool_Variable, UTexture2D* K2Node_Select_Default, bool CallFunc_AsyncFindIconTexture2D_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureAbandonWidget.UI_BP_CreatureAbandonWidget_C.SetCreatureState"));
    struct Params_SetCreatureState {
        UCreatureState* CreatureState; // 0x0
        UTexture2D* Temp_object_Variable; // 0x8
        UCreatureDefinition* CallFunc_GetDefinition_ReturnValue; // 0x10
        bool CallFunc_IsEgg_ReturnValue; // 0x18
        bool CallFunc_GetIsMale_ReturnValue; // 0x19
        bool CallFunc_IsPregnant_ReturnValue; // 0x1a
        char pad_1b[0x5];
        FString CallFunc_GetCreatureIconTextureName_IconTextureName; // 0x20
        UTexture2D* Temp_object_Variable_1; // 0x30
        bool Temp_bool_Variable; // 0x38
        char pad_39[0x7];
        UTexture2D* K2Node_Select_Default; // 0x40
        bool CallFunc_AsyncFindIconTexture2D_ReturnValue; // 0x48
    }; // Size: 0x49
    Params_SetCreatureState params{};
    params.CreatureState = (UCreatureState*)CreatureState;
    params.Temp_object_Variable = (UTexture2D*)Temp_object_Variable;
    params.CallFunc_GetDefinition_ReturnValue = (UCreatureDefinition*)CallFunc_GetDefinition_ReturnValue;
    params.CallFunc_IsEgg_ReturnValue = (bool)CallFunc_IsEgg_ReturnValue;
    params.CallFunc_GetIsMale_ReturnValue = (bool)CallFunc_GetIsMale_ReturnValue;
    params.CallFunc_IsPregnant_ReturnValue = (bool)CallFunc_IsPregnant_ReturnValue;
    params.CallFunc_GetCreatureIconTextureName_IconTextureName = (FString)CallFunc_GetCreatureIconTextureName_IconTextureName;
    params.Temp_object_Variable_1 = (UTexture2D*)Temp_object_Variable_1;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.K2Node_Select_Default = (UTexture2D*)K2Node_Select_Default;
    params.CallFunc_AsyncFindIconTexture2D_ReturnValue = (bool)CallFunc_AsyncFindIconTexture2D_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureAbandonWidget_C::PreConstruct(bool IsDesignTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureAbandonWidget.UI_BP_CreatureAbandonWidget_C.PreConstruct"));
    struct Params_PreConstruct {
        bool IsDesignTime; // 0x0
    }; // Size: 0x1
    Params_PreConstruct params{};
    params.IsDesignTime = (bool)IsDesignTime;
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureAbandonWidget_C::OnOutroStarted(int32_t OutroType, float OutroDuration) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureAbandonWidget.UI_BP_CreatureAbandonWidget_C.OnOutroStarted"));
    struct Params_OnOutroStarted {
        int32_t OutroType; // 0x0
        float OutroDuration; // 0x4
    }; // Size: 0x8
    Params_OnOutroStarted params{};
    params.OutroType = (int32_t)OutroType;
    params.OutroDuration = (float)OutroDuration;
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureAbandonWidget_C::OnIntroStarted(int32_t IntroType, float IntroDuration) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureAbandonWidget.UI_BP_CreatureAbandonWidget_C.OnIntroStarted"));
    struct Params_OnIntroStarted {
        int32_t IntroType; // 0x0
        float IntroDuration; // 0x4
    }; // Size: 0x8
    Params_OnIntroStarted params{};
    params.IntroType = (int32_t)IntroType;
    params.IntroDuration = (float)IntroDuration;
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureAbandonWidget_C::OnOutroEnded(int32_t OutroType) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureAbandonWidget.UI_BP_CreatureAbandonWidget_C.OnOutroEnded"));
    struct Params_OnOutroEnded {
        int32_t OutroType; // 0x0
    }; // Size: 0x4
    Params_OnOutroEnded params{};
    params.OutroType = (int32_t)OutroType;
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureAbandonWidget_C::OnIntroEnded(int32_t IntroType) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureAbandonWidget.UI_BP_CreatureAbandonWidget_C.OnIntroEnded"));
    struct Params_OnIntroEnded {
        int32_t IntroType; // 0x0
    }; // Size: 0x4
    Params_OnIntroEnded params{};
    params.IntroType = (int32_t)IntroType;
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureAbandonWidget_C::ExecuteUbergraph_UI_BP_CreatureAbandonWidget(int32_t EntryPoint, int32_t K2Node_Event_IntroType, FLegendItemData K2Node_MakeStruct_LegendItemData, FLegendItemData K2Node_MakeStruct_LegendItemData_1, bool K2Node_Event_IsDesignTime, TArray<FLegendItemData>& K2Node_MakeArray_Array, int32_t K2Node_Event_IntroType_1, float K2Node_Event_IntroDuration, float CallFunc_Divide_FloatFloat_ReturnValue, int32_t K2Node_Event_OutroType_1, float K2Node_Event_OutroDuration, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, UCreatureState* K2Node_Event_CreatureState, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, int32_t K2Node_Event_OutroType) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureAbandonWidget.UI_BP_CreatureAbandonWidget_C.ExecuteUbergraph_UI_BP_CreatureAbandonWidget"));
    struct Params_ExecuteUbergraph_UI_BP_CreatureAbandonWidget {
        int32_t EntryPoint; // 0x0
        int32_t K2Node_Event_IntroType; // 0x4
        FLegendItemData K2Node_MakeStruct_LegendItemData; // 0x8
        FLegendItemData K2Node_MakeStruct_LegendItemData_1; // 0x38
        bool K2Node_Event_IsDesignTime; // 0x68
        char pad_69[0x7];
        TArray<FLegendItemData> K2Node_MakeArray_Array; // 0x70
        int32_t K2Node_Event_IntroType_1; // 0x80
        float K2Node_Event_IntroDuration; // 0x84
        float CallFunc_Divide_FloatFloat_ReturnValue; // 0x88
        int32_t K2Node_Event_OutroType_1; // 0x8c
        float K2Node_Event_OutroDuration; // 0x90
        char pad_94[0x4];
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue; // 0x98
        float CallFunc_Divide_FloatFloat_ReturnValue_1; // 0xa0
        char pad_a4[0x4];
        UCreatureState* K2Node_Event_CreatureState; // 0xa8
        UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue; // 0xb0
        int32_t K2Node_Event_OutroType; // 0xb8
    }; // Size: 0xbc
    Params_ExecuteUbergraph_UI_BP_CreatureAbandonWidget params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_IntroType = (int32_t)K2Node_Event_IntroType;
    params.K2Node_MakeStruct_LegendItemData = (FLegendItemData)K2Node_MakeStruct_LegendItemData;
    params.K2Node_MakeStruct_LegendItemData_1 = (FLegendItemData)K2Node_MakeStruct_LegendItemData_1;
    params.K2Node_Event_IsDesignTime = (bool)K2Node_Event_IsDesignTime;
    params.K2Node_MakeArray_Array = (TArray<FLegendItemData>)K2Node_MakeArray_Array;
    params.K2Node_Event_IntroType_1 = (int32_t)K2Node_Event_IntroType_1;
    params.K2Node_Event_IntroDuration = (float)K2Node_Event_IntroDuration;
    params.CallFunc_Divide_FloatFloat_ReturnValue = (float)CallFunc_Divide_FloatFloat_ReturnValue;
    params.K2Node_Event_OutroType_1 = (int32_t)K2Node_Event_OutroType_1;
    params.K2Node_Event_OutroDuration = (float)K2Node_Event_OutroDuration;
    params.CallFunc_PlayAnimationForward_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue;
    params.CallFunc_Divide_FloatFloat_ReturnValue_1 = (float)CallFunc_Divide_FloatFloat_ReturnValue_1;
    params.K2Node_Event_CreatureState = (UCreatureState*)K2Node_Event_CreatureState;
    params.CallFunc_PlayAnimationReverse_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationReverse_ReturnValue;
    params.K2Node_Event_OutroType = (int32_t)K2Node_Event_OutroType;
    ProcessEvent(func, &params);
    K2Node_MakeArray_Array = params.K2Node_MakeArray_Array;
}
void UUI_BP_CreatureAbandonWidget_C::OnClosed__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureAbandonWidget.UI_BP_CreatureAbandonWidget_C.OnClosed__DelegateSignature"));
    struct Params_OnClosed__DelegateSignature {
    }; // Size: 0x0
    Params_OnClosed__DelegateSignature params{};
    ProcessEvent(func, &params);
}
