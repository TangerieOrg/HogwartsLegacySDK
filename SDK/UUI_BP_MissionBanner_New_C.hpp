#pragma once
#include <cstdint>
#include "BannerUpdateType.hpp"
#include "EMiniMapSizeOption.hpp"
#include "EUIPlatformInputDevice.hpp"
#include "FFormatArgumentData.hpp"
#include "FLinearColor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UMissionBannerWidget.hpp"
class UExpandableArea;
class UWidgetAnimation;
class UBorder;
class UImage;
class UScaleBox;
class UUI_BP_LegendItem_C;
class UUI_BP_MissionCompleteBanner_C;
class UVerticalBox;
class UInvalidationBox;
class UUI_BP_MissionBannerCheckbox_C;
class UPhoenixTextBlock;
class UPhoenixRichTextBlock;
class UHorizontalBox;
class UUserWidget;
class UObject;
class UTexture2D;
class UUMGSequencePlayer;
#pragma pack(push, 1)
class UUI_BP_MissionBanner_New_C : public UMissionBannerWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x530
    UWidgetAnimation* CollapseStepsDesc; // 0x538
    UWidgetAnimation* ExpandStepsDesc; // 0x540
    UWidgetAnimation* HideMissionAvailable; // 0x548
    UWidgetAnimation* ShowMissionAvailable; // 0x550
    UWidgetAnimation* HIdeFullBanner; // 0x558
    UWidgetAnimation* showFullBanner; // 0x560
    UWidgetAnimation* hideStepBanner; // 0x568
    UWidgetAnimation* showStepBanner; // 0x570
    UBorder* availableBanner; // 0x578
    UScaleBox* bottomDividerBox; // 0x580
    UImage* currentMissionIcon; // 0x588
    UScaleBox* dpadBracket; // 0x590
    UExpandableArea* ExpandableDesc; // 0x598
    UUI_BP_LegendItem_C* ExpandLegend; // 0x5a0
    UBorder* fullBanner; // 0x5a8
    UInvalidationBox* InvalidationBox_FullBanner; // 0x5b0
    UInvalidationBox* InvalidationBox_MissionCompleteBanner; // 0x5b8
    UScaleBox* kbmBracket; // 0x5c0
    UVerticalBox* mainVerticalBox; // 0x5c8
    UUI_BP_MissionBannerCheckbox_C* missionBannerCheckbox; // 0x5d0
    UPhoenixTextBlock* MissionBannerHeaderText; // 0x5d8
    UUI_BP_MissionCompleteBanner_C* MissionCompleteBanner; // 0x5e0
    UPhoenixRichTextBlock* MissionDesc_Text; // 0x5e8
    UImage* MissionIcon; // 0x5f0
    UPhoenixTextBlock* MissionTitleText; // 0x5f8
    UVerticalBox* ObjectiveList; // 0x600
    UBorder* stepBanner; // 0x608
    UPhoenixTextBlock* StepTitleText; // 0x610
    UScaleBox* topDividerBox; // 0x618
    UHorizontalBox* TQPrompt; // 0x620
    float StepBannerDuration; // 0x628
    float FullBannerDuration; // 0x62c
    TArray<UWidgetAnimation*> BannerAnimationQueue; // 0x630
    TArray<float> BannerDelayQueue; // 0x640
    bool IsBannerAnimationPlaying; // 0x650
    char pad_651[0x3];
    float QueueCompleteDelay; // 0x654
    float FullBannerPreDelay; // 0x658
    char pad_65c[0x4];
    TArray<UUserWidget*> OwnerQueue; // 0x660
    float MissionAvailableDuration; // 0x670
    char pad_674[0x4];
    TArray<FString> LastStepObjectives; // 0x678
    bool DescExpanded; // 0x688
    char pad_689[0x3];
    float ExpandDelayDuration; // 0x68c
    float PositionY; // 0x690
    char pad_694[0x4];
    UUI_BP_MissionBannerCheckbox_C* CheckboxWidget; // 0x698
    static UUI_BP_MissionBanner_New_C* StaticClass();
    void SequenceEvent__ENTRYPOINTUI_BP_MissionBanner_New_1();
    void SequenceEvent__ENTRYPOINTUI_BP_MissionBanner_New_0();
    void ToggleButtonBracket(EUIPlatformInputDevice CallFunc_GetUIPlatformInputDevice_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
    void ToggleStepBannerExpand(bool Expand);
    void GetMissionIconName(FName MissionID, FString& IconName, FString FinalName, FString CallFunc_Conv_NameToString_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_IconExistsInTable_ReturnValue, FString CallFunc_Split_LeftS, FString CallFunc_Split_RightS, bool CallFunc_Split_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
    void IsSameStepAsLast(TArray<FString>& objectiveText, bool& Same, int32_t CallFunc_Array_Length_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue_1, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_GetChildrenCount_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue);
    void ProgressStepAnimQueue(UUserWidget* Owner, float Delay, UWidgetAnimation* Animation, UUserWidget* CallFunc_Array_Get_Item, float CallFunc_Array_Get_Item_1, UWidgetAnimation* CallFunc_Array_Get_Item_2, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
    void QueueStepAnimation(UWidgetAnimation* NewAnimation, float PreAnimationDelay, UUserWidget* AnimationOwner, bool CallFunc_IsValid_ReturnValue, int32_t CallFunc_Array_Add_ReturnValue, int32_t CallFunc_Array_Add_ReturnValue_1, int32_t CallFunc_Array_Add_ReturnValue_2, int32_t CallFunc_Array_Add_ReturnValue_3);
    void ShowBPMissionBanner(BannerUpdateType updateType, FName updateTitle, FName bannerText, FName bannerText2, bool bShowTrackMission, TArray<FString>& objectiveText, TArray<bool>& objectiveChecked, TArray<bool>& objectiveCheckChanged, TArray<int32_t>& objectiveRuntimeValue1, TArray<int32_t>& objectiveRuntimeValue2);
    void ShowBPStepBanner(BannerUpdateType updateType, FName updateTitle, FName bannerText, FName bannerText2, bool bShowTrackMission, TArray<FString>& objectiveText, TArray<bool>& objectiveChecked, TArray<bool>& objectiveCheckChanged, TArray<int32_t>& objectiveRuntimeValue1, TArray<int32_t>& objectiveRuntimeValue2, FString MissionDescription, FString MissionTypeIcon, FString MissionObjectiveIcon, FLinearColor ObjectiveTintColor);
    void WidgetAnimationEvt_showFullBanner_K2Node_WidgetAnimationEvent_1();
    void WidgetAnimationEvt_HIdeFullBanner_K2Node_WidgetAnimationEvent_2();
    void WidgetAnimationEvt_showStepBanner_K2Node_WidgetAnimationEvent_4();
    void WidgetAnimationEvt_hideStepBanner_K2Node_WidgetAnimationEvent_5();
    void ShowBPCelebrationBanner(BannerUpdateType updateType, FName updateTitle, FName bannerText, FName bannerText2, bool bShowTrackMission, TArray<FString>& objectiveText, TArray<bool>& objectiveChecked, TArray<bool>& objectiveCheckChanged, TArray<int32_t>& objectiveRuntimeValue1, TArray<int32_t>& objectiveRuntimeValue2);
    void ProcessNextBannerAnimation(UWidgetAnimation* NextAnimation, float Delay, UUserWidget* Owner);
    void HandleStepBannerQueueComplete();
    void LoadMissionSteps(TArray<FString>& NewStepArray, TArray<bool>& IsCheckedArray, TArray<bool>& StateChangedArray, TArray<int32_t>& RuntimeValueArray1, TArray<int32_t>& RuntimeValueArray2, FString ObjectiveIcon, FLinearColor IconTint);
    void CheckboxAnimComplete();
    void UpdateExistingStepBanner(TArray<FString>& objectiveText, TArray<bool>& objectiveChecked, TArray<bool>& objectiveCheckChanged, TArray<int32_t>& objectiveRuntimeValue1, TArray<int32_t>& objectiveRuntimeValue2);
    void OnInitialized();
    void ShowMissionCompleteEvent();
    void HideMissionCompleteEvent();
    void WidgetAnimationEvt_ShowMissionAvailable_K2Node_WidgetAnimationEvent_0();
    void WidgetAnimationEvt_HideMissionAvailable_K2Node_WidgetAnimationEvent_3();
    void WidgetAnimationEvt_showFullBanner_K2Node_WidgetAnimationEvent_6();
    void WidgetAnimationEvt_showStepBanner_K2Node_WidgetAnimationEvent_7();
    void WidgetAnimationEvt_ShowMissionAvailable_K2Node_WidgetAnimationEvent_11();
    void ExpandSteps();
    void WidgetAnimationEvt_ExpandStepsDesc_K2Node_WidgetAnimationEvent_8();
    void Destruct();
    void Construct();
    void StartExpandHold();
    void CancelExpandHold();
    void RepositionAfterMinimapScaleAdjust(EMiniMapSizeOption MiniMapSize);
    void EventAdjustMinimapSize(UObject* Caller, float float);
    void UpdateColorBlindColors(FLinearColor ObjectiveTintColor);
    void RefreshButtonCallouts(UObject* Caller);
    void MissionCardLoaded(UTexture2D* LoadedTexture, UObject* CallbackParam);
    void ExecuteUbergraph_UI_BP_MissionBanner_New(int32_t EntryPoint, int32_t Temp_int_Array_Index_Variable, UWidgetAnimation* K2Node_CustomEvent_NextAnimation, float K2Node_CustomEvent_Delay, UUserWidget* K2Node_CustomEvent_Owner, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, TArray<FString>& K2Node_CustomEvent_NewStepArray, TArray<bool>& K2Node_CustomEvent_IsCheckedArray, TArray<bool>& K2Node_CustomEvent_StateChangedArray, TArray<int32_t>& K2Node_CustomEvent_RuntimeValueArray1, TArray<int32_t>& K2Node_CustomEvent_RuntimeValueArray2, FString K2Node_CustomEvent_ObjectiveIcon, FLinearColor K2Node_CustomEvent_IconTint, int32_t CallFunc_Array_Get_Item, int32_t CallFunc_Array_Get_Item_1, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, bool CallFunc_Array_Get_Item_2, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Array_Get_Item_3, FString CallFunc_Array_Get_Item_4, bool CallFunc_BooleanAND_ReturnValue);
}; // Size: 0x6a0
#pragma pack(pop)
