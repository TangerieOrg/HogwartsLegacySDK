#include "E_AstronomyConstellations\Type.hpp"
#include "FLegendItemData.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
#include "UImage.hpp"
#include "UMaterialInstanceDynamic.hpp"
#include "UObject.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UPhoenixUserWidget.hpp"
#include "UTexture2D.hpp"
#include "UUI_BP_Astronomy_minigame_C.hpp"
#include "UUI_BP_Legend_Horizontal_Screen_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UWidgetAnimation.hpp"
UUI_BP_Astronomy_minigame_C* UUI_BP_Astronomy_minigame_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Actor/UI_BP_Astronomy_minigame.UI_BP_Astronomy_minigame_C");
    return (UUI_BP_Astronomy_minigame_C*)res;
}
TArray<FString> UUI_BP_Astronomy_minigame_C::GatherMenuReaderStrings0(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_Astronomy_minigame.UI_BP_Astronomy_minigame_C.GatherMenuReaderStrings"));
    struct Params_GatherMenuReaderStrings {
        int32_t DepthLevel; // 0x0
        char pad_4[0x4];
        TArray<FString> ReturnValue; // 0x8
        TArray<FString> TempGatheredStrings; // 0x18
        TArray<FString> CallFunc_GatherMenuReaderStrings_ReturnValue; // 0x28
        TArray<FString> CallFunc_GatherMenuReaderStrings_ReturnValue_1; // 0x38
    }; // Size: 0x48
    Params_GatherMenuReaderStrings params{};
    params.DepthLevel = (int32_t)DepthLevel;
    params.TempGatheredStrings = (TArray<FString>)TempGatheredStrings;
    params.CallFunc_GatherMenuReaderStrings_ReturnValue = (TArray<FString>)CallFunc_GatherMenuReaderStrings_ReturnValue;
    params.CallFunc_GatherMenuReaderStrings_ReturnValue_1 = (TArray<FString>)CallFunc_GatherMenuReaderStrings_ReturnValue_1;
    ProcessEvent(func, &params);
    CallFunc_GatherMenuReaderStrings_ReturnValue = params.CallFunc_GatherMenuReaderStrings_ReturnValue;
    CallFunc_GatherMenuReaderStrings_ReturnValue_1 = params.CallFunc_GatherMenuReaderStrings_ReturnValue_1;
    return (TArray<FString>)params.ReturnValue;
}
void UUI_BP_Astronomy_minigame_C::LerpInnerRing_Start(float CallFunc_GetRenderTransformAngle_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_Astronomy_minigame.UI_BP_Astronomy_minigame_C.LerpInnerRing_Start"));
    struct Params_LerpInnerRing_Start {
        float CallFunc_GetRenderTransformAngle_ReturnValue; // 0x0
    }; // Size: 0x4
    Params_LerpInnerRing_Start params{};
    params.CallFunc_GetRenderTransformAngle_ReturnValue = (float)CallFunc_GetRenderTransformAngle_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_Astronomy_minigame_C::LinesTexLoaded(UTexture2D* LoadedTexture, UObject* CallbackParam) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_Astronomy_minigame.UI_BP_Astronomy_minigame_C.LinesTexLoaded"));
    struct Params_LinesTexLoaded {
        UTexture2D* LoadedTexture; // 0x0
        UObject* CallbackParam; // 0x8
    }; // Size: 0x10
    Params_LinesTexLoaded params{};
    params.LoadedTexture = (UTexture2D*)LoadedTexture;
    params.CallbackParam = (UObject*)CallbackParam;
    ProcessEvent(func, &params);
}
void UUI_BP_Astronomy_minigame_C::LerpOuterRing_End() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_Astronomy_minigame.UI_BP_Astronomy_minigame_C.LerpOuterRing_End"));
    struct Params_LerpOuterRing_End {
    }; // Size: 0x0
    Params_LerpOuterRing_End params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Astronomy_minigame_C::ResetGlass() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_Astronomy_minigame.UI_BP_Astronomy_minigame_C.ResetGlass"));
    struct Params_ResetGlass {
    }; // Size: 0x0
    Params_ResetGlass params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Astronomy_minigame_C::LerpOuterRing_Start(float StartFOV, float EndFOV, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_GetRenderTransformAngle_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_Astronomy_minigame.UI_BP_Astronomy_minigame_C.LerpOuterRing_Start"));
    struct Params_LerpOuterRing_Start {
        float StartFOV; // 0x0
        float EndFOV; // 0x4
        float CallFunc_Subtract_FloatFloat_ReturnValue; // 0x8
        float CallFunc_GetRenderTransformAngle_ReturnValue; // 0xc
        float CallFunc_Subtract_FloatFloat_ReturnValue_1; // 0x10
    }; // Size: 0x14
    Params_LerpOuterRing_Start params{};
    params.StartFOV = (float)StartFOV;
    params.EndFOV = (float)EndFOV;
    params.CallFunc_Subtract_FloatFloat_ReturnValue = (float)CallFunc_Subtract_FloatFloat_ReturnValue;
    params.CallFunc_GetRenderTransformAngle_ReturnValue = (float)CallFunc_GetRenderTransformAngle_ReturnValue;
    params.CallFunc_Subtract_FloatFloat_ReturnValue_1 = (float)CallFunc_Subtract_FloatFloat_ReturnValue_1;
    ProcessEvent(func, &params);
}
void UUI_BP_Astronomy_minigame_C::ClearLegend() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_Astronomy_minigame.UI_BP_Astronomy_minigame_C.ClearLegend"));
    struct Params_ClearLegend {
    }; // Size: 0x0
    Params_ClearLegend params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Astronomy_minigame_C::LerpOuterRing_Step(float LerpProgress, float CallFunc_Lerp_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_Astronomy_minigame.UI_BP_Astronomy_minigame_C.LerpOuterRing_Step"));
    struct Params_LerpOuterRing_Step {
        float LerpProgress; // 0x0
        float CallFunc_Lerp_ReturnValue; // 0x4
    }; // Size: 0x8
    Params_LerpOuterRing_Step params{};
    params.LerpProgress = (float)LerpProgress;
    params.CallFunc_Lerp_ReturnValue = (float)CallFunc_Lerp_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_Astronomy_minigame_C::LerpInnerRing_End() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_Astronomy_minigame.UI_BP_Astronomy_minigame_C.LerpInnerRing_End"));
    struct Params_LerpInnerRing_End {
    }; // Size: 0x0
    Params_LerpInnerRing_End params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Astronomy_minigame_C::LerpInnerRing_Step(float LerpProgress, float CallFunc_Lerp_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_Astronomy_minigame.UI_BP_Astronomy_minigame_C.LerpInnerRing_Step"));
    struct Params_LerpInnerRing_Step {
        float LerpProgress; // 0x0
        float CallFunc_Lerp_ReturnValue; // 0x4
    }; // Size: 0x8
    Params_LerpInnerRing_Step params{};
    params.LerpProgress = (float)LerpProgress;
    params.CallFunc_Lerp_ReturnValue = (float)CallFunc_Lerp_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_Astronomy_minigame_C::RotateGlass(float Rotation, float CallFunc_GetRenderTransformAngle_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_Astronomy_minigame.UI_BP_Astronomy_minigame_C.RotateGlass"));
    struct Params_RotateGlass {
        float Rotation; // 0x0
        float CallFunc_GetRenderTransformAngle_ReturnValue; // 0x4
        float CallFunc_Add_FloatFloat_ReturnValue; // 0x8
    }; // Size: 0xc
    Params_RotateGlass params{};
    params.Rotation = (float)Rotation;
    params.CallFunc_GetRenderTransformAngle_ReturnValue = (float)CallFunc_GetRenderTransformAngle_ReturnValue;
    params.CallFunc_Add_FloatFloat_ReturnValue = (float)CallFunc_Add_FloatFloat_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_Astronomy_minigame_C::OnOutroStarted0(int32_t OutroType, float OutroDuration) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_Astronomy_minigame.UI_BP_Astronomy_minigame_C.OnOutroStarted"));
    struct Params_OnOutroStarted {
        int32_t OutroType; // 0x0
        float OutroDuration; // 0x4
    }; // Size: 0x8
    Params_OnOutroStarted params{};
    params.OutroType = (int32_t)OutroType;
    params.OutroDuration = (float)OutroDuration;
    ProcessEvent(func, &params);
}
void UUI_BP_Astronomy_minigame_C::RotateOuterRing(float Rotation, float CallFunc_GetRenderTransformAngle_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_Astronomy_minigame.UI_BP_Astronomy_minigame_C.RotateOuterRing"));
    struct Params_RotateOuterRing {
        float Rotation; // 0x0
        float CallFunc_GetRenderTransformAngle_ReturnValue; // 0x4
        float CallFunc_Add_FloatFloat_ReturnValue; // 0x8
    }; // Size: 0xc
    Params_RotateOuterRing params{};
    params.Rotation = (float)Rotation;
    params.CallFunc_GetRenderTransformAngle_ReturnValue = (float)CallFunc_GetRenderTransformAngle_ReturnValue;
    params.CallFunc_Add_FloatFloat_ReturnValue = (float)CallFunc_Add_FloatFloat_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_Astronomy_minigame_C::RotateInnerRing(float Rotation, float CallFunc_GetRenderTransformAngle_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_Astronomy_minigame.UI_BP_Astronomy_minigame_C.RotateInnerRing"));
    struct Params_RotateInnerRing {
        float Rotation; // 0x0
        float CallFunc_GetRenderTransformAngle_ReturnValue; // 0x4
        float CallFunc_Add_FloatFloat_ReturnValue; // 0x8
    }; // Size: 0xc
    Params_RotateInnerRing params{};
    params.Rotation = (float)Rotation;
    params.CallFunc_GetRenderTransformAngle_ReturnValue = (float)CallFunc_GetRenderTransformAngle_ReturnValue;
    params.CallFunc_Add_FloatFloat_ReturnValue = (float)CallFunc_Add_FloatFloat_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_Astronomy_minigame_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_Astronomy_minigame.UI_BP_Astronomy_minigame_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Astronomy_minigame_C::LinesSfxTexLoaded(UTexture2D* LoadedTexture, UObject* CallbackParam) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_Astronomy_minigame.UI_BP_Astronomy_minigame_C.LinesSfxTexLoaded"));
    struct Params_LinesSfxTexLoaded {
        UTexture2D* LoadedTexture; // 0x0
        UObject* CallbackParam; // 0x8
    }; // Size: 0x10
    Params_LinesSfxTexLoaded params{};
    params.LoadedTexture = (UTexture2D*)LoadedTexture;
    params.CallbackParam = (UObject*)CallbackParam;
    ProcessEvent(func, &params);
}
void UUI_BP_Astronomy_minigame_C::OnOutroEnded0(int32_t OutroType) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_Astronomy_minigame.UI_BP_Astronomy_minigame_C.OnOutroEnded"));
    struct Params_OnOutroEnded {
        int32_t OutroType; // 0x0
    }; // Size: 0x4
    Params_OnOutroEnded params{};
    params.OutroType = (int32_t)OutroType;
    ProcessEvent(func, &params);
}
void UUI_BP_Astronomy_minigame_C::PreConstruct(bool IsDesignTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_Astronomy_minigame.UI_BP_Astronomy_minigame_C.PreConstruct"));
    struct Params_PreConstruct {
        bool IsDesignTime; // 0x0
    }; // Size: 0x1
    Params_PreConstruct params{};
    params.IsDesignTime = (bool)IsDesignTime;
    ProcessEvent(func, &params);
}
void UUI_BP_Astronomy_minigame_C::Solved() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_Astronomy_minigame.UI_BP_Astronomy_minigame_C.Solved"));
    struct Params_Solved {
    }; // Size: 0x0
    Params_Solved params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Astronomy_minigame_C::ConstellationSfxTexLoaded(UTexture2D* LoadedTexture, UObject* CallbackParam) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_Astronomy_minigame.UI_BP_Astronomy_minigame_C.ConstellationSfxTexLoaded"));
    struct Params_ConstellationSfxTexLoaded {
        UTexture2D* LoadedTexture; // 0x0
        UObject* CallbackParam; // 0x8
    }; // Size: 0x10
    Params_ConstellationSfxTexLoaded params{};
    params.LoadedTexture = (UTexture2D*)LoadedTexture;
    params.CallbackParam = (UObject*)CallbackParam;
    ProcessEvent(func, &params);
}
void UUI_BP_Astronomy_minigame_C::ShowBackButton() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_Astronomy_minigame.UI_BP_Astronomy_minigame_C.ShowBackButton"));
    struct Params_ShowBackButton {
    }; // Size: 0x0
    Params_ShowBackButton params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Astronomy_minigame_C::ConstellationImageLoaded(UTexture2D* LoadedTexture, UObject* CallbackParam) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_Astronomy_minigame.UI_BP_Astronomy_minigame_C.ConstellationImageLoaded"));
    struct Params_ConstellationImageLoaded {
        UTexture2D* LoadedTexture; // 0x0
        UObject* CallbackParam; // 0x8
    }; // Size: 0x10
    Params_ConstellationImageLoaded params{};
    params.LoadedTexture = (UTexture2D*)LoadedTexture;
    params.CallbackParam = (UObject*)CallbackParam;
    ProcessEvent(func, &params);
}
void UUI_BP_Astronomy_minigame_C::Destruct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_Astronomy_minigame.UI_BP_Astronomy_minigame_C.Destruct"));
    struct Params_Destruct {
    }; // Size: 0x0
    Params_Destruct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Astronomy_minigame_C::OnIntroStarted0(int32_t IntroType, float IntroDuration) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_Astronomy_minigame.UI_BP_Astronomy_minigame_C.OnIntroStarted"));
    struct Params_OnIntroStarted {
        int32_t IntroType; // 0x0
        float IntroDuration; // 0x4
    }; // Size: 0x8
    Params_OnIntroStarted params{};
    params.IntroType = (int32_t)IntroType;
    params.IntroDuration = (float)IntroDuration;
    ProcessEvent(func, &params);
}
void UUI_BP_Astronomy_minigame_C::ExecuteUbergraph_UI_BP_Astronomy_minigame(int32_t EntryPoint, FString CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_1, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, UTexture2D* K2Node_CustomEvent_LoadedTexture_3, UObject* K2Node_CustomEvent_CallbackParam_3, FString CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1, FString CallFunc_Concat_StrStr_ReturnValue_2, bool K2Node_Event_IsDesignTime, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UTexture2D* K2Node_CustomEvent_LoadedTexture_2, UObject* K2Node_CustomEvent_CallbackParam_2, FString CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_2, FString CallFunc_Concat_StrStr_ReturnValue_3, TArray<FLegendItemData>& K2Node_MakeArray_Array, UTexture2D* K2Node_CustomEvent_LoadedTexture_1, UObject* K2Node_CustomEvent_CallbackParam_1) {}
