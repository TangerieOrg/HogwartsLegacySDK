#pragma once
#include <cstdint>
#include "EInputEvent.hpp"
#include "EUMGInputAction.hpp"
#include "FLegendItemData.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UScreen.hpp"
class UWidgetAnimation;
class UCreatureState;
class UUI_BP_Legend_Horizontal_Tooltip_C;
class UPhoenixTextBlock;
class UTexture2D;
class UOverlay;
class UImage;
class UCreatureDefinition;
class UUMGSequencePlayer;
#pragma pack(push, 1)
class UUI_BP_CreatureAbandonWidget_C : public UScreen {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x370
    UWidgetAnimation* AnimateIn; // 0x378
    UPhoenixTextBlock* AreYouSureText; // 0x380
    UOverlay* boxBorder; // 0x388
    UImage* CreatureGenderIcon; // 0x390
    UImage* CreatureImage; // 0x398
    UPhoenixTextBlock* CreatureNameText; // 0x3a0
    UPhoenixTextBlock* menuBoxTitle; // 0x3a8
    UUI_BP_Legend_Horizontal_Tooltip_C* PopupLegend; // 0x3b0
    UImage* PregnancyIcon; // 0x3b8
    char pad_3c0[0x10];
    static UUI_BP_CreatureAbandonWidget_C* StaticClass();
    TArray<FString> GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_1);
    bool BlueprintOnUMGInputAction(EUMGInputAction InputAction, EInputEvent InputEvent, int32_t CallFunc_PostEventAtLocation_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2);
    void SetCreatureState(UCreatureState* CreatureState, UTexture2D* Temp_object_Variable, UCreatureDefinition* CallFunc_GetDefinition_ReturnValue, bool CallFunc_IsEgg_ReturnValue, bool CallFunc_GetIsMale_ReturnValue, bool CallFunc_IsPregnant_ReturnValue, FString CallFunc_GetCreatureIconTextureName_IconTextureName, UTexture2D* Temp_object_Variable_1, bool Temp_bool_Variable, UTexture2D* K2Node_Select_Default, bool CallFunc_AsyncFindIconTexture2D_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void OnIntroStarted(int32_t IntroType, float IntroDuration);
    void OnOutroStarted(int32_t OutroType, float OutroDuration);
    void I_SetCreatureState(UCreatureState* CreatureState);
    void OnOutroEnded(int32_t OutroType);
    void OnIntroEnded(int32_t IntroType);
    void ExecuteUbergraph_UI_BP_CreatureAbandonWidget(int32_t EntryPoint, int32_t K2Node_Event_IntroType, FLegendItemData K2Node_MakeStruct_LegendItemData, FLegendItemData K2Node_MakeStruct_LegendItemData_1, bool K2Node_Event_IsDesignTime, TArray<FLegendItemData>& K2Node_MakeArray_Array, int32_t K2Node_Event_IntroType_1, float K2Node_Event_IntroDuration, float CallFunc_Divide_FloatFloat_ReturnValue, int32_t K2Node_Event_OutroType_1, float K2Node_Event_OutroDuration, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, UCreatureState* K2Node_Event_CreatureState, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, int32_t K2Node_Event_OutroType);
    void OnClosed__DelegateSignature();
}; // Size: 0x3d0
#pragma pack(pop)
