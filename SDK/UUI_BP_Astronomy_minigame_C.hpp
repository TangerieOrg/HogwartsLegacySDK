#pragma once
#include <cstdint>
#include "E_AstronomyConstellations\Type.hpp"
#include "FLegendItemData.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UPhoenixUserWidget.hpp"
class UWidgetAnimation;
class UUMGSequencePlayer;
class UImage;
class UPhoenixTextBlock;
class UUI_BP_Legend_Horizontal_Screen_C;
class UTexture2D;
class UObject;
class UMaterialInstanceDynamic;
#pragma pack(push, 1)
class UUI_BP_Astronomy_minigame_C : public UPhoenixUserWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x328
    UWidgetAnimation* OutroAnimation; // 0x330
    UWidgetAnimation* IntroAnimation; // 0x338
    UWidgetAnimation* SolvedAnimation; // 0x340
    UImage* Constellation_Image; // 0x348
    UImage* Constellation_SFX; // 0x350
    UPhoenixTextBlock* ConstellationNameText; // 0x358
    UImage* Glass; // 0x360
    UImage* Inner_Ring; // 0x368
    UUI_BP_Legend_Horizontal_Screen_C* Legend_Horizontal_Screen; // 0x370
    UImage* Lines_Image; // 0x378
    UImage* Lines_SFX; // 0x380
    UImage* Outer_Ring; // 0x388
    UImage* outside_Left; // 0x390
    UImage* outside_Right; // 0x398
    E_AstronomyConstellations::Type Constellation; // 0x3a0
    char pad_3a1[0x3];
    float InnerLerpStart; // 0x3a4
    float OuterLerpStart; // 0x3a8
    float OuterLerpEnd; // 0x3ac
    TArray<FLegendItemData> DefaultLegendItemData; // 0x3b0
    TArray<FLegendItemData> CompletedLegendItemData; // 0x3c0
    static UUI_BP_Astronomy_minigame_C* StaticClass();
    TArray<FString> GatherMenuReaderStrings0(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_1);
    void LerpOuterRing_End();
    void LerpOuterRing_Start(float StartFOV, float EndFOV, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_GetRenderTransformAngle_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1);
    void LerpOuterRing_Step(float LerpProgress, float CallFunc_Lerp_ReturnValue);
    void LerpInnerRing_End();
    void LerpInnerRing_Start(float CallFunc_GetRenderTransformAngle_ReturnValue);
    void LerpInnerRing_Step(float LerpProgress, float CallFunc_Lerp_ReturnValue);
    void ResetGlass();
    void RotateGlass(float Rotation, float CallFunc_GetRenderTransformAngle_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue);
    void RotateOuterRing(float Rotation, float CallFunc_GetRenderTransformAngle_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue);
    void RotateInnerRing(float Rotation, float CallFunc_GetRenderTransformAngle_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue);
    void Construct();
    void LinesSfxTexLoaded(UTexture2D* LoadedTexture, UObject* CallbackParam);
    void PreConstruct(bool IsDesignTime);
    void Solved();
    void ConstellationSfxTexLoaded(UTexture2D* LoadedTexture, UObject* CallbackParam);
    void ClearLegend();
    void ShowBackButton();
    void LinesTexLoaded(UTexture2D* LoadedTexture, UObject* CallbackParam);
    void ConstellationImageLoaded(UTexture2D* LoadedTexture, UObject* CallbackParam);
    void Destruct();
    void OnOutroStarted0(int32_t OutroType, float OutroDuration);
    void OnOutroEnded0(int32_t OutroType);
    void OnIntroStarted0(int32_t IntroType, float IntroDuration);
    void ExecuteUbergraph_UI_BP_Astronomy_minigame(int32_t EntryPoint, FString CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_1, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, UTexture2D* K2Node_CustomEvent_LoadedTexture_3, UObject* K2Node_CustomEvent_CallbackParam_3, FString CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1, FString CallFunc_Concat_StrStr_ReturnValue_2, bool K2Node_Event_IsDesignTime, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UTexture2D* K2Node_CustomEvent_LoadedTexture_2, UObject* K2Node_CustomEvent_CallbackParam_2, FString CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_2, FString CallFunc_Concat_StrStr_ReturnValue_3, TArray<FLegendItemData>& K2Node_MakeArray_Array, UTexture2D* K2Node_CustomEvent_LoadedTexture_1, UObject* K2Node_CustomEvent_CallbackParam_1);
}; // Size: 0x3d0
#pragma pack(pop)
