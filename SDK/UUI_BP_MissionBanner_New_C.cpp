#include "BannerUpdateType.hpp"
#include "EMiniMapSizeOption.hpp"
#include "EUIPlatformInputDevice.hpp"
#include "FFormatArgumentData.hpp"
#include "FLinearColor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UBorder.hpp"
#include "UExpandableArea.hpp"
#include "UFunction.hpp"
#include "UHorizontalBox.hpp"
#include "UImage.hpp"
#include "UInvalidationBox.hpp"
#include "UMissionBannerWidget.hpp"
#include "UObject.hpp"
#include "UPhoenixRichTextBlock.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UScaleBox.hpp"
#include "UTexture2D.hpp"
#include "UUI_BP_LegendItem_C.hpp"
#include "UUI_BP_MissionBannerCheckbox_C.hpp"
#include "UUI_BP_MissionBanner_New_C.hpp"
#include "UUI_BP_MissionCompleteBanner_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UUserWidget.hpp"
#include "UVerticalBox.hpp"
#include "UWidgetAnimation.hpp"
void UUI_BP_MissionBanner_New_C::ExecuteUbergraph_UI_BP_MissionBanner_New(int32_t EntryPoint, int32_t Temp_int_Array_Index_Variable, UWidgetAnimation* K2Node_CustomEvent_NextAnimation, float K2Node_CustomEvent_Delay, UUserWidget* K2Node_CustomEvent_Owner, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, TArray<FString>& K2Node_CustomEvent_NewStepArray, TArray<bool>& K2Node_CustomEvent_IsCheckedArray, TArray<bool>& K2Node_CustomEvent_StateChangedArray, TArray<int32_t>& K2Node_CustomEvent_RuntimeValueArray1, TArray<int32_t>& K2Node_CustomEvent_RuntimeValueArray2, FString K2Node_CustomEvent_ObjectiveIcon, FLinearColor K2Node_CustomEvent_IconTint, int32_t CallFunc_Array_Get_Item, int32_t CallFunc_Array_Get_Item_1, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, bool CallFunc_Array_Get_Item_2, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Array_Get_Item_3, FString CallFunc_Array_Get_Item_4, bool CallFunc_BooleanAND_ReturnValue) {}
void UUI_BP_MissionBanner_New_C::HandleStepBannerQueueComplete() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Mission/UI_BP_MissionBanner_New.UI_BP_MissionBanner_New_C.HandleStepBannerQueueComplete"));
    struct Params_HandleStepBannerQueueComplete {
    }; // Size: 0x0
    Params_HandleStepBannerQueueComplete params{};
    ProcessEvent(func, &params);
}
UUI_BP_MissionBanner_New_C* UUI_BP_MissionBanner_New_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/HUD/Mission/UI_BP_MissionBanner_New.UI_BP_MissionBanner_New_C");
    return (UUI_BP_MissionBanner_New_C*)res;
}
void UUI_BP_MissionBanner_New_C::EventAdjustMinimapSize(UObject* Caller, float float) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Mission/UI_BP_MissionBanner_New.UI_BP_MissionBanner_New_C.EventAdjustMinimapSize"));
    struct Params_EventAdjustMinimapSize {
        UObject* Caller; // 0x0
        float float; // 0x8
    }; // Size: 0xc
    Params_EventAdjustMinimapSize params{};
    params.Caller = (UObject*)Caller;
    params.float = (float)float;
    ProcessEvent(func, &params);
}
void UUI_BP_MissionBanner_New_C::WidgetAnimationEvt_HideMissionAvailable_K2Node_WidgetAnimationEvent_3() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Mission/UI_BP_MissionBanner_New.UI_BP_MissionBanner_New_C.WidgetAnimationEvt_HideMissionAvailable_K2Node_WidgetAnimationEvent_3"));
    struct Params_WidgetAnimationEvt_HideMissionAvailable_K2Node_WidgetAnimationEvent_3 {
    }; // Size: 0x0
    Params_WidgetAnimationEvt_HideMissionAvailable_K2Node_WidgetAnimationEvent_3 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_MissionBanner_New_C::SequenceEvent__ENTRYPOINTUI_BP_MissionBanner_New_1() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Mission/UI_BP_MissionBanner_New.UI_BP_MissionBanner_New_C.SequenceEvent__ENTRYPOINTUI_BP_MissionBanner_New_1"));
    struct Params_SequenceEvent__ENTRYPOINTUI_BP_MissionBanner_New_1 {
    }; // Size: 0x0
    Params_SequenceEvent__ENTRYPOINTUI_BP_MissionBanner_New_1 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_MissionBanner_New_C::CancelExpandHold() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Mission/UI_BP_MissionBanner_New.UI_BP_MissionBanner_New_C.CancelExpandHold"));
    struct Params_CancelExpandHold {
    }; // Size: 0x0
    Params_CancelExpandHold params{};
    ProcessEvent(func, &params);
}
void UUI_BP_MissionBanner_New_C::WidgetAnimationEvt_showFullBanner_K2Node_WidgetAnimationEvent_1() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Mission/UI_BP_MissionBanner_New.UI_BP_MissionBanner_New_C.WidgetAnimationEvt_showFullBanner_K2Node_WidgetAnimationEvent_1"));
    struct Params_WidgetAnimationEvt_showFullBanner_K2Node_WidgetAnimationEvent_1 {
    }; // Size: 0x0
    Params_WidgetAnimationEvt_showFullBanner_K2Node_WidgetAnimationEvent_1 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_MissionBanner_New_C::SequenceEvent__ENTRYPOINTUI_BP_MissionBanner_New_0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Mission/UI_BP_MissionBanner_New.UI_BP_MissionBanner_New_C.SequenceEvent__ENTRYPOINTUI_BP_MissionBanner_New_0"));
    struct Params_SequenceEvent__ENTRYPOINTUI_BP_MissionBanner_New_0 {
    }; // Size: 0x0
    Params_SequenceEvent__ENTRYPOINTUI_BP_MissionBanner_New_0 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_MissionBanner_New_C::GetMissionIconName(FName MissionID, FString& IconName, FString FinalName, FString CallFunc_Conv_NameToString_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_IconExistsInTable_ReturnValue, FString CallFunc_Split_LeftS, FString CallFunc_Split_RightS, bool CallFunc_Split_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Mission/UI_BP_MissionBanner_New.UI_BP_MissionBanner_New_C.GetMissionIconName"));
    struct Params_GetMissionIconName {
        FName MissionID; // 0x0
        FString IconName; // 0x8
        FString FinalName; // 0x18
        FString CallFunc_Conv_NameToString_ReturnValue; // 0x28
        FString CallFunc_Concat_StrStr_ReturnValue; // 0x38
        bool CallFunc_IconExistsInTable_ReturnValue; // 0x48
        char pad_49[0x7];
        FString CallFunc_Split_LeftS; // 0x50
        FString CallFunc_Split_RightS; // 0x60
        bool CallFunc_Split_ReturnValue; // 0x70
        bool CallFunc_Not_PreBool_ReturnValue; // 0x71
    }; // Size: 0x72
    Params_GetMissionIconName params{};
    params.MissionID = (FName)MissionID;
    params.IconName = (FString)IconName;
    params.FinalName = (FString)FinalName;
    params.CallFunc_Conv_NameToString_ReturnValue = (FString)CallFunc_Conv_NameToString_ReturnValue;
    params.CallFunc_Concat_StrStr_ReturnValue = (FString)CallFunc_Concat_StrStr_ReturnValue;
    params.CallFunc_IconExistsInTable_ReturnValue = (bool)CallFunc_IconExistsInTable_ReturnValue;
    params.CallFunc_Split_LeftS = (FString)CallFunc_Split_LeftS;
    params.CallFunc_Split_RightS = (FString)CallFunc_Split_RightS;
    params.CallFunc_Split_ReturnValue = (bool)CallFunc_Split_ReturnValue;
    params.CallFunc_Not_PreBool_ReturnValue = (bool)CallFunc_Not_PreBool_ReturnValue;
    ProcessEvent(func, &params);
    IconName = params.IconName;
}
void UUI_BP_MissionBanner_New_C::ToggleButtonBracket(EUIPlatformInputDevice CallFunc_GetUIPlatformInputDevice_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Mission/UI_BP_MissionBanner_New.UI_BP_MissionBanner_New_C.ToggleButtonBracket"));
    struct Params_ToggleButtonBracket {
        EUIPlatformInputDevice CallFunc_GetUIPlatformInputDevice_ReturnValue; // 0x0
        bool CallFunc_EqualEqual_ByteByte_ReturnValue; // 0x1
    }; // Size: 0x2
    Params_ToggleButtonBracket params{};
    params.CallFunc_GetUIPlatformInputDevice_ReturnValue = (EUIPlatformInputDevice)CallFunc_GetUIPlatformInputDevice_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_MissionBanner_New_C::UpdateColorBlindColors(FLinearColor ObjectiveTintColor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Mission/UI_BP_MissionBanner_New.UI_BP_MissionBanner_New_C.UpdateColorBlindColors"));
    struct Params_UpdateColorBlindColors {
        FLinearColor ObjectiveTintColor; // 0x0
    }; // Size: 0x10
    Params_UpdateColorBlindColors params{};
    params.ObjectiveTintColor = (FLinearColor)ObjectiveTintColor;
    ProcessEvent(func, &params);
}
void UUI_BP_MissionBanner_New_C::WidgetAnimationEvt_ShowMissionAvailable_K2Node_WidgetAnimationEvent_11() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Mission/UI_BP_MissionBanner_New.UI_BP_MissionBanner_New_C.WidgetAnimationEvt_ShowMissionAvailable_K2Node_WidgetAnimationEvent_11"));
    struct Params_WidgetAnimationEvt_ShowMissionAvailable_K2Node_WidgetAnimationEvent_11 {
    }; // Size: 0x0
    Params_WidgetAnimationEvt_ShowMissionAvailable_K2Node_WidgetAnimationEvent_11 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_MissionBanner_New_C::ToggleStepBannerExpand(bool Expand) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Mission/UI_BP_MissionBanner_New.UI_BP_MissionBanner_New_C.ToggleStepBannerExpand"));
    struct Params_ToggleStepBannerExpand {
        bool Expand; // 0x0
    }; // Size: 0x1
    Params_ToggleStepBannerExpand params{};
    params.Expand = (bool)Expand;
    ProcessEvent(func, &params);
}
void UUI_BP_MissionBanner_New_C::StartExpandHold() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Mission/UI_BP_MissionBanner_New.UI_BP_MissionBanner_New_C.StartExpandHold"));
    struct Params_StartExpandHold {
    }; // Size: 0x0
    Params_StartExpandHold params{};
    ProcessEvent(func, &params);
}
void UUI_BP_MissionBanner_New_C::LoadMissionSteps(TArray<FString>& NewStepArray, TArray<bool>& IsCheckedArray, TArray<bool>& StateChangedArray, TArray<int32_t>& RuntimeValueArray1, TArray<int32_t>& RuntimeValueArray2, FString ObjectiveIcon, FLinearColor IconTint) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Mission/UI_BP_MissionBanner_New.UI_BP_MissionBanner_New_C.LoadMissionSteps"));
    struct Params_LoadMissionSteps {
        TArray<FString> NewStepArray; // 0x0
        TArray<bool> IsCheckedArray; // 0x10
        TArray<bool> StateChangedArray; // 0x20
        TArray<int32_t> RuntimeValueArray1; // 0x30
        TArray<int32_t> RuntimeValueArray2; // 0x40
        FString ObjectiveIcon; // 0x50
        FLinearColor IconTint; // 0x60
    }; // Size: 0x70
    Params_LoadMissionSteps params{};
    params.NewStepArray = (TArray<FString>)NewStepArray;
    params.IsCheckedArray = (TArray<bool>)IsCheckedArray;
    params.StateChangedArray = (TArray<bool>)StateChangedArray;
    params.RuntimeValueArray1 = (TArray<int32_t>)RuntimeValueArray1;
    params.RuntimeValueArray2 = (TArray<int32_t>)RuntimeValueArray2;
    params.ObjectiveIcon = (FString)ObjectiveIcon;
    params.IconTint = (FLinearColor)IconTint;
    ProcessEvent(func, &params);
    NewStepArray = params.NewStepArray;
    RuntimeValueArray1 = params.RuntimeValueArray1;
    IsCheckedArray = params.IsCheckedArray;
    StateChangedArray = params.StateChangedArray;
    RuntimeValueArray2 = params.RuntimeValueArray2;
}
void UUI_BP_MissionBanner_New_C::IsSameStepAsLast(TArray<FString>& objectiveText, bool& Same, int32_t CallFunc_Array_Length_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue_1, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_GetChildrenCount_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Mission/UI_BP_MissionBanner_New.UI_BP_MissionBanner_New_C.IsSameStepAsLast"));
    struct Params_IsSameStepAsLast {
        TArray<FString> objectiveText; // 0x0
        bool Same; // 0x10
        char pad_11[0x3];
        int32_t CallFunc_Array_Length_ReturnValue; // 0x14
        int32_t CallFunc_Array_Length_ReturnValue_1; // 0x18
        int32_t Temp_int_Array_Index_Variable; // 0x1c
        int32_t Temp_int_Loop_Counter_Variable; // 0x20
        int32_t CallFunc_GetChildrenCount_ReturnValue; // 0x24
        bool CallFunc_Less_IntInt_ReturnValue; // 0x28
        bool CallFunc_EqualEqual_IntInt_ReturnValue; // 0x29
        char pad_2a[0x2];
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x2c
    }; // Size: 0x30
    Params_IsSameStepAsLast params{};
    params.objectiveText = (TArray<FString>)objectiveText;
    params.Same = (bool)Same;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Array_Length_ReturnValue_1 = (int32_t)CallFunc_Array_Length_ReturnValue_1;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_GetChildrenCount_ReturnValue = (int32_t)CallFunc_GetChildrenCount_ReturnValue;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_EqualEqual_IntInt_ReturnValue = (bool)CallFunc_EqualEqual_IntInt_ReturnValue;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    ProcessEvent(func, &params);
    objectiveText = params.objectiveText;
    Same = params.Same;
}
void UUI_BP_MissionBanner_New_C::ShowBPCelebrationBanner(BannerUpdateType updateType, FName updateTitle, FName bannerText, FName bannerText2, bool bShowTrackMission, TArray<FString>& objectiveText, TArray<bool>& objectiveChecked, TArray<bool>& objectiveCheckChanged, TArray<int32_t>& objectiveRuntimeValue1, TArray<int32_t>& objectiveRuntimeValue2) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Mission/UI_BP_MissionBanner_New.UI_BP_MissionBanner_New_C.ShowBPCelebrationBanner"));
    struct Params_ShowBPCelebrationBanner {
        BannerUpdateType updateType; // 0x0
        char pad_1[0x3];
        FName updateTitle; // 0x4
        FName bannerText; // 0xc
        FName bannerText2; // 0x14
        bool bShowTrackMission; // 0x1c
        char pad_1d[0x3];
        TArray<FString> objectiveText; // 0x20
        TArray<bool> objectiveChecked; // 0x30
        TArray<bool> objectiveCheckChanged; // 0x40
        TArray<int32_t> objectiveRuntimeValue1; // 0x50
        TArray<int32_t> objectiveRuntimeValue2; // 0x60
    }; // Size: 0x70
    Params_ShowBPCelebrationBanner params{};
    params.updateType = (BannerUpdateType)updateType;
    params.updateTitle = (FName)updateTitle;
    params.bannerText = (FName)bannerText;
    params.bannerText2 = (FName)bannerText2;
    params.bShowTrackMission = (bool)bShowTrackMission;
    params.objectiveText = (TArray<FString>)objectiveText;
    params.objectiveChecked = (TArray<bool>)objectiveChecked;
    params.objectiveCheckChanged = (TArray<bool>)objectiveCheckChanged;
    params.objectiveRuntimeValue1 = (TArray<int32_t>)objectiveRuntimeValue1;
    params.objectiveRuntimeValue2 = (TArray<int32_t>)objectiveRuntimeValue2;
    ProcessEvent(func, &params);
    objectiveRuntimeValue1 = params.objectiveRuntimeValue1;
    objectiveCheckChanged = params.objectiveCheckChanged;
    objectiveText = params.objectiveText;
    objectiveRuntimeValue2 = params.objectiveRuntimeValue2;
    objectiveChecked = params.objectiveChecked;
}
void UUI_BP_MissionBanner_New_C::WidgetAnimationEvt_showStepBanner_K2Node_WidgetAnimationEvent_4() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Mission/UI_BP_MissionBanner_New.UI_BP_MissionBanner_New_C.WidgetAnimationEvt_showStepBanner_K2Node_WidgetAnimationEvent_4"));
    struct Params_WidgetAnimationEvt_showStepBanner_K2Node_WidgetAnimationEvent_4 {
    }; // Size: 0x0
    Params_WidgetAnimationEvt_showStepBanner_K2Node_WidgetAnimationEvent_4 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_MissionBanner_New_C::ProgressStepAnimQueue(UUserWidget* Owner, float Delay, UWidgetAnimation* Animation, UUserWidget* CallFunc_Array_Get_Item, float CallFunc_Array_Get_Item_1, UWidgetAnimation* CallFunc_Array_Get_Item_2, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Mission/UI_BP_MissionBanner_New.UI_BP_MissionBanner_New_C.ProgressStepAnimQueue"));
    struct Params_ProgressStepAnimQueue {
        UUserWidget* Owner; // 0x0
        float Delay; // 0x8
        char pad_c[0x4];
        UWidgetAnimation* Animation; // 0x10
        UUserWidget* CallFunc_Array_Get_Item; // 0x18
        float CallFunc_Array_Get_Item_1; // 0x20
        char pad_24[0x4];
        UWidgetAnimation* CallFunc_Array_Get_Item_2; // 0x28
        int32_t CallFunc_Array_Length_ReturnValue; // 0x30
        bool CallFunc_Greater_IntInt_ReturnValue; // 0x34
    }; // Size: 0x35
    Params_ProgressStepAnimQueue params{};
    params.Owner = (UUserWidget*)Owner;
    params.Delay = (float)Delay;
    params.Animation = (UWidgetAnimation*)Animation;
    params.CallFunc_Array_Get_Item = (UUserWidget*)CallFunc_Array_Get_Item;
    params.CallFunc_Array_Get_Item_1 = (float)CallFunc_Array_Get_Item_1;
    params.CallFunc_Array_Get_Item_2 = (UWidgetAnimation*)CallFunc_Array_Get_Item_2;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Greater_IntInt_ReturnValue = (bool)CallFunc_Greater_IntInt_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_MissionBanner_New_C::QueueStepAnimation(UWidgetAnimation* NewAnimation, float PreAnimationDelay, UUserWidget* AnimationOwner, bool CallFunc_IsValid_ReturnValue, int32_t CallFunc_Array_Add_ReturnValue, int32_t CallFunc_Array_Add_ReturnValue_1, int32_t CallFunc_Array_Add_ReturnValue_2, int32_t CallFunc_Array_Add_ReturnValue_3) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Mission/UI_BP_MissionBanner_New.UI_BP_MissionBanner_New_C.QueueStepAnimation"));
    struct Params_QueueStepAnimation {
        UWidgetAnimation* NewAnimation; // 0x0
        float PreAnimationDelay; // 0x8
        char pad_c[0x4];
        UUserWidget* AnimationOwner; // 0x10
        bool CallFunc_IsValid_ReturnValue; // 0x18
        char pad_19[0x3];
        int32_t CallFunc_Array_Add_ReturnValue; // 0x1c
        int32_t CallFunc_Array_Add_ReturnValue_1; // 0x20
        int32_t CallFunc_Array_Add_ReturnValue_2; // 0x24
        int32_t CallFunc_Array_Add_ReturnValue_3; // 0x28
    }; // Size: 0x2c
    Params_QueueStepAnimation params{};
    params.NewAnimation = (UWidgetAnimation*)NewAnimation;
    params.PreAnimationDelay = (float)PreAnimationDelay;
    params.AnimationOwner = (UUserWidget*)AnimationOwner;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_Array_Add_ReturnValue = (int32_t)CallFunc_Array_Add_ReturnValue;
    params.CallFunc_Array_Add_ReturnValue_1 = (int32_t)CallFunc_Array_Add_ReturnValue_1;
    params.CallFunc_Array_Add_ReturnValue_2 = (int32_t)CallFunc_Array_Add_ReturnValue_2;
    params.CallFunc_Array_Add_ReturnValue_3 = (int32_t)CallFunc_Array_Add_ReturnValue_3;
    ProcessEvent(func, &params);
}
void UUI_BP_MissionBanner_New_C::ShowBPMissionBanner(BannerUpdateType updateType, FName updateTitle, FName bannerText, FName bannerText2, bool bShowTrackMission, TArray<FString>& objectiveText, TArray<bool>& objectiveChecked, TArray<bool>& objectiveCheckChanged, TArray<int32_t>& objectiveRuntimeValue1, TArray<int32_t>& objectiveRuntimeValue2) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Mission/UI_BP_MissionBanner_New.UI_BP_MissionBanner_New_C.ShowBPMissionBanner"));
    struct Params_ShowBPMissionBanner {
        BannerUpdateType updateType; // 0x0
        char pad_1[0x3];
        FName updateTitle; // 0x4
        FName bannerText; // 0xc
        FName bannerText2; // 0x14
        bool bShowTrackMission; // 0x1c
        char pad_1d[0x3];
        TArray<FString> objectiveText; // 0x20
        TArray<bool> objectiveChecked; // 0x30
        TArray<bool> objectiveCheckChanged; // 0x40
        TArray<int32_t> objectiveRuntimeValue1; // 0x50
        TArray<int32_t> objectiveRuntimeValue2; // 0x60
    }; // Size: 0x70
    Params_ShowBPMissionBanner params{};
    params.updateType = (BannerUpdateType)updateType;
    params.updateTitle = (FName)updateTitle;
    params.bannerText = (FName)bannerText;
    params.bannerText2 = (FName)bannerText2;
    params.bShowTrackMission = (bool)bShowTrackMission;
    params.objectiveText = (TArray<FString>)objectiveText;
    params.objectiveChecked = (TArray<bool>)objectiveChecked;
    params.objectiveCheckChanged = (TArray<bool>)objectiveCheckChanged;
    params.objectiveRuntimeValue1 = (TArray<int32_t>)objectiveRuntimeValue1;
    params.objectiveRuntimeValue2 = (TArray<int32_t>)objectiveRuntimeValue2;
    ProcessEvent(func, &params);
    objectiveChecked = params.objectiveChecked;
    objectiveText = params.objectiveText;
    objectiveCheckChanged = params.objectiveCheckChanged;
    objectiveRuntimeValue1 = params.objectiveRuntimeValue1;
    objectiveRuntimeValue2 = params.objectiveRuntimeValue2;
}
void UUI_BP_MissionBanner_New_C::ShowBPStepBanner(BannerUpdateType updateType, FName updateTitle, FName bannerText, FName bannerText2, bool bShowTrackMission, TArray<FString>& objectiveText, TArray<bool>& objectiveChecked, TArray<bool>& objectiveCheckChanged, TArray<int32_t>& objectiveRuntimeValue1, TArray<int32_t>& objectiveRuntimeValue2, FString MissionDescription, FString MissionTypeIcon, FString MissionObjectiveIcon, FLinearColor ObjectiveTintColor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Mission/UI_BP_MissionBanner_New.UI_BP_MissionBanner_New_C.ShowBPStepBanner"));
    struct Params_ShowBPStepBanner {
        BannerUpdateType updateType; // 0x0
        char pad_1[0x3];
        FName updateTitle; // 0x4
        FName bannerText; // 0xc
        FName bannerText2; // 0x14
        bool bShowTrackMission; // 0x1c
        char pad_1d[0x3];
        TArray<FString> objectiveText; // 0x20
        TArray<bool> objectiveChecked; // 0x30
        TArray<bool> objectiveCheckChanged; // 0x40
        TArray<int32_t> objectiveRuntimeValue1; // 0x50
        TArray<int32_t> objectiveRuntimeValue2; // 0x60
        FString MissionDescription; // 0x70
        FString MissionTypeIcon; // 0x80
        FString MissionObjectiveIcon; // 0x90
        FLinearColor ObjectiveTintColor; // 0xa0
    }; // Size: 0xb0
    Params_ShowBPStepBanner params{};
    params.updateType = (BannerUpdateType)updateType;
    params.updateTitle = (FName)updateTitle;
    params.bannerText = (FName)bannerText;
    params.bannerText2 = (FName)bannerText2;
    params.bShowTrackMission = (bool)bShowTrackMission;
    params.objectiveText = (TArray<FString>)objectiveText;
    params.objectiveChecked = (TArray<bool>)objectiveChecked;
    params.objectiveCheckChanged = (TArray<bool>)objectiveCheckChanged;
    params.objectiveRuntimeValue1 = (TArray<int32_t>)objectiveRuntimeValue1;
    params.objectiveRuntimeValue2 = (TArray<int32_t>)objectiveRuntimeValue2;
    params.MissionDescription = (FString)MissionDescription;
    params.MissionTypeIcon = (FString)MissionTypeIcon;
    params.MissionObjectiveIcon = (FString)MissionObjectiveIcon;
    params.ObjectiveTintColor = (FLinearColor)ObjectiveTintColor;
    ProcessEvent(func, &params);
    objectiveText = params.objectiveText;
    objectiveRuntimeValue1 = params.objectiveRuntimeValue1;
    objectiveChecked = params.objectiveChecked;
    objectiveCheckChanged = params.objectiveCheckChanged;
    objectiveRuntimeValue2 = params.objectiveRuntimeValue2;
}
void UUI_BP_MissionBanner_New_C::WidgetAnimationEvt_HIdeFullBanner_K2Node_WidgetAnimationEvent_2() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Mission/UI_BP_MissionBanner_New.UI_BP_MissionBanner_New_C.WidgetAnimationEvt_HIdeFullBanner_K2Node_WidgetAnimationEvent_2"));
    struct Params_WidgetAnimationEvt_HIdeFullBanner_K2Node_WidgetAnimationEvent_2 {
    }; // Size: 0x0
    Params_WidgetAnimationEvt_HIdeFullBanner_K2Node_WidgetAnimationEvent_2 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_MissionBanner_New_C::UpdateExistingStepBanner(TArray<FString>& objectiveText, TArray<bool>& objectiveChecked, TArray<bool>& objectiveCheckChanged, TArray<int32_t>& objectiveRuntimeValue1, TArray<int32_t>& objectiveRuntimeValue2) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Mission/UI_BP_MissionBanner_New.UI_BP_MissionBanner_New_C.UpdateExistingStepBanner"));
    struct Params_UpdateExistingStepBanner {
        TArray<FString> objectiveText; // 0x0
        TArray<bool> objectiveChecked; // 0x10
        TArray<bool> objectiveCheckChanged; // 0x20
        TArray<int32_t> objectiveRuntimeValue1; // 0x30
        TArray<int32_t> objectiveRuntimeValue2; // 0x40
    }; // Size: 0x50
    Params_UpdateExistingStepBanner params{};
    params.objectiveText = (TArray<FString>)objectiveText;
    params.objectiveChecked = (TArray<bool>)objectiveChecked;
    params.objectiveCheckChanged = (TArray<bool>)objectiveCheckChanged;
    params.objectiveRuntimeValue1 = (TArray<int32_t>)objectiveRuntimeValue1;
    params.objectiveRuntimeValue2 = (TArray<int32_t>)objectiveRuntimeValue2;
    ProcessEvent(func, &params);
    objectiveText = params.objectiveText;
    objectiveChecked = params.objectiveChecked;
    objectiveRuntimeValue1 = params.objectiveRuntimeValue1;
    objectiveCheckChanged = params.objectiveCheckChanged;
    objectiveRuntimeValue2 = params.objectiveRuntimeValue2;
}
void UUI_BP_MissionBanner_New_C::WidgetAnimationEvt_hideStepBanner_K2Node_WidgetAnimationEvent_5() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Mission/UI_BP_MissionBanner_New.UI_BP_MissionBanner_New_C.WidgetAnimationEvt_hideStepBanner_K2Node_WidgetAnimationEvent_5"));
    struct Params_WidgetAnimationEvt_hideStepBanner_K2Node_WidgetAnimationEvent_5 {
    }; // Size: 0x0
    Params_WidgetAnimationEvt_hideStepBanner_K2Node_WidgetAnimationEvent_5 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_MissionBanner_New_C::WidgetAnimationEvt_ShowMissionAvailable_K2Node_WidgetAnimationEvent_0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Mission/UI_BP_MissionBanner_New.UI_BP_MissionBanner_New_C.WidgetAnimationEvt_ShowMissionAvailable_K2Node_WidgetAnimationEvent_0"));
    struct Params_WidgetAnimationEvt_ShowMissionAvailable_K2Node_WidgetAnimationEvent_0 {
    }; // Size: 0x0
    Params_WidgetAnimationEvt_ShowMissionAvailable_K2Node_WidgetAnimationEvent_0 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_MissionBanner_New_C::ProcessNextBannerAnimation(UWidgetAnimation* NextAnimation, float Delay, UUserWidget* Owner) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Mission/UI_BP_MissionBanner_New.UI_BP_MissionBanner_New_C.ProcessNextBannerAnimation"));
    struct Params_ProcessNextBannerAnimation {
        UWidgetAnimation* NextAnimation; // 0x0
        float Delay; // 0x8
        char pad_c[0x4];
        UUserWidget* Owner; // 0x10
    }; // Size: 0x18
    Params_ProcessNextBannerAnimation params{};
    params.NextAnimation = (UWidgetAnimation*)NextAnimation;
    params.Delay = (float)Delay;
    params.Owner = (UUserWidget*)Owner;
    ProcessEvent(func, &params);
}
void UUI_BP_MissionBanner_New_C::CheckboxAnimComplete() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Mission/UI_BP_MissionBanner_New.UI_BP_MissionBanner_New_C.CheckboxAnimComplete"));
    struct Params_CheckboxAnimComplete {
    }; // Size: 0x0
    Params_CheckboxAnimComplete params{};
    ProcessEvent(func, &params);
}
void UUI_BP_MissionBanner_New_C::OnInitialized() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Mission/UI_BP_MissionBanner_New.UI_BP_MissionBanner_New_C.OnInitialized"));
    struct Params_OnInitialized {
    }; // Size: 0x0
    Params_OnInitialized params{};
    ProcessEvent(func, &params);
}
void UUI_BP_MissionBanner_New_C::ShowMissionCompleteEvent() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Mission/UI_BP_MissionBanner_New.UI_BP_MissionBanner_New_C.ShowMissionCompleteEvent"));
    struct Params_ShowMissionCompleteEvent {
    }; // Size: 0x0
    Params_ShowMissionCompleteEvent params{};
    ProcessEvent(func, &params);
}
void UUI_BP_MissionBanner_New_C::RefreshButtonCallouts(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Mission/UI_BP_MissionBanner_New.UI_BP_MissionBanner_New_C.RefreshButtonCallouts"));
    struct Params_RefreshButtonCallouts {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_RefreshButtonCallouts params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UUI_BP_MissionBanner_New_C::HideMissionCompleteEvent() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Mission/UI_BP_MissionBanner_New.UI_BP_MissionBanner_New_C.HideMissionCompleteEvent"));
    struct Params_HideMissionCompleteEvent {
    }; // Size: 0x0
    Params_HideMissionCompleteEvent params{};
    ProcessEvent(func, &params);
}
void UUI_BP_MissionBanner_New_C::WidgetAnimationEvt_showFullBanner_K2Node_WidgetAnimationEvent_6() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Mission/UI_BP_MissionBanner_New.UI_BP_MissionBanner_New_C.WidgetAnimationEvt_showFullBanner_K2Node_WidgetAnimationEvent_6"));
    struct Params_WidgetAnimationEvt_showFullBanner_K2Node_WidgetAnimationEvent_6 {
    }; // Size: 0x0
    Params_WidgetAnimationEvt_showFullBanner_K2Node_WidgetAnimationEvent_6 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_MissionBanner_New_C::RepositionAfterMinimapScaleAdjust(EMiniMapSizeOption MiniMapSize) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Mission/UI_BP_MissionBanner_New.UI_BP_MissionBanner_New_C.RepositionAfterMinimapScaleAdjust"));
    struct Params_RepositionAfterMinimapScaleAdjust {
        EMiniMapSizeOption MiniMapSize; // 0x0
    }; // Size: 0x1
    Params_RepositionAfterMinimapScaleAdjust params{};
    params.MiniMapSize = (EMiniMapSizeOption)MiniMapSize;
    ProcessEvent(func, &params);
}
void UUI_BP_MissionBanner_New_C::WidgetAnimationEvt_showStepBanner_K2Node_WidgetAnimationEvent_7() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Mission/UI_BP_MissionBanner_New.UI_BP_MissionBanner_New_C.WidgetAnimationEvt_showStepBanner_K2Node_WidgetAnimationEvent_7"));
    struct Params_WidgetAnimationEvt_showStepBanner_K2Node_WidgetAnimationEvent_7 {
    }; // Size: 0x0
    Params_WidgetAnimationEvt_showStepBanner_K2Node_WidgetAnimationEvent_7 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_MissionBanner_New_C::ExpandSteps() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Mission/UI_BP_MissionBanner_New.UI_BP_MissionBanner_New_C.ExpandSteps"));
    struct Params_ExpandSteps {
    }; // Size: 0x0
    Params_ExpandSteps params{};
    ProcessEvent(func, &params);
}
void UUI_BP_MissionBanner_New_C::WidgetAnimationEvt_ExpandStepsDesc_K2Node_WidgetAnimationEvent_8() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Mission/UI_BP_MissionBanner_New.UI_BP_MissionBanner_New_C.WidgetAnimationEvt_ExpandStepsDesc_K2Node_WidgetAnimationEvent_8"));
    struct Params_WidgetAnimationEvt_ExpandStepsDesc_K2Node_WidgetAnimationEvent_8 {
    }; // Size: 0x0
    Params_WidgetAnimationEvt_ExpandStepsDesc_K2Node_WidgetAnimationEvent_8 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_MissionBanner_New_C::Destruct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Mission/UI_BP_MissionBanner_New.UI_BP_MissionBanner_New_C.Destruct"));
    struct Params_Destruct {
    }; // Size: 0x0
    Params_Destruct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_MissionBanner_New_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Mission/UI_BP_MissionBanner_New.UI_BP_MissionBanner_New_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_MissionBanner_New_C::MissionCardLoaded(UTexture2D* LoadedTexture, UObject* CallbackParam) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Mission/UI_BP_MissionBanner_New.UI_BP_MissionBanner_New_C.MissionCardLoaded"));
    struct Params_MissionCardLoaded {
        UTexture2D* LoadedTexture; // 0x0
        UObject* CallbackParam; // 0x8
    }; // Size: 0x10
    Params_MissionCardLoaded params{};
    params.LoadedTexture = (UTexture2D*)LoadedTexture;
    params.CallbackParam = (UObject*)CallbackParam;
    ProcessEvent(func, &params);
}
