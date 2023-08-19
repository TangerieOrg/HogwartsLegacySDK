#include "APlayerController.hpp"
#include "ECreditEntryType.hpp"
#include "EInputEvent.hpp"
#include "EUMGInputAction.hpp"
#include "FCreditEntry.hpp"
#include "FGeometry.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FTimespan.hpp"
#include "UBinkMediaPlayer.hpp"
#include "UCanvasPanel.hpp"
#include "UClass.hpp"
#include "UFileMediaSource.hpp"
#include "UFunction.hpp"
#include "UImage.hpp"
#include "ULegendItem.hpp"
#include "UPhoenixCreditEntryWidget.hpp"
#include "UPhoenixCreditsScreen.hpp"
#include "UUI_BP_Credits_C.hpp"
#include "UUI_BP_LegendItem_C.hpp"
#include "UUserWidget.hpp"
#include "UWidgetAnimation.hpp"
UUI_BP_Credits_C* UUI_BP_Credits_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Credits/UI_BP_Credits.UI_BP_Credits_C");
    return (UUI_BP_Credits_C*)res;
}
UPhoenixCreditEntryWidget* UUI_BP_Credits_C::CreateCreditEntry0(FCreditEntry CreditEntry, ECreditEntryType Temp_byte_Variable, UClass* Temp_class_Variable, UClass* Temp_class_Variable_1, UClass* Temp_class_Variable_2, UClass* Temp_class_Variable_3, UClass* Temp_class_Variable_4, UClass* Temp_class_Variable_5, UClass* Temp_class_Variable_6, UClass* Temp_class_Variable_7, APlayerController* CallFunc_GetPlayerControllerFromID_ReturnValue, UClass* K2Node_Select_Default, UUserWidget* CallFunc_Create_ReturnValue, UPhoenixCreditEntryWidget* K2Node_DynamicCast_AsPhoenix_Credit_Entry_Widget, bool K2Node_DynamicCast_bSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Credits/UI_BP_Credits.UI_BP_Credits_C.CreateCreditEntry"));
    struct Params_CreateCreditEntry {
        FCreditEntry CreditEntry; // 0x0
        UPhoenixCreditEntryWidget* ReturnValue; // 0x28
        ECreditEntryType Temp_byte_Variable; // 0x30
        char pad_31[0x7];
        UClass* Temp_class_Variable; // 0x38
        UClass* Temp_class_Variable_1; // 0x40
        UClass* Temp_class_Variable_2; // 0x48
        UClass* Temp_class_Variable_3; // 0x50
        UClass* Temp_class_Variable_4; // 0x58
        UClass* Temp_class_Variable_5; // 0x60
        UClass* Temp_class_Variable_6; // 0x68
        UClass* Temp_class_Variable_7; // 0x70
        APlayerController* CallFunc_GetPlayerControllerFromID_ReturnValue; // 0x78
        UClass* K2Node_Select_Default; // 0x80
        UUserWidget* CallFunc_Create_ReturnValue; // 0x88
        UPhoenixCreditEntryWidget* K2Node_DynamicCast_AsPhoenix_Credit_Entry_Widget; // 0x90
        bool K2Node_DynamicCast_bSuccess; // 0x98
    }; // Size: 0x99
    Params_CreateCreditEntry params{};
    params.CreditEntry = (FCreditEntry)CreditEntry;
    params.Temp_byte_Variable = (ECreditEntryType)Temp_byte_Variable;
    params.Temp_class_Variable = (UClass*)Temp_class_Variable;
    params.Temp_class_Variable_1 = (UClass*)Temp_class_Variable_1;
    params.Temp_class_Variable_2 = (UClass*)Temp_class_Variable_2;
    params.Temp_class_Variable_3 = (UClass*)Temp_class_Variable_3;
    params.Temp_class_Variable_4 = (UClass*)Temp_class_Variable_4;
    params.Temp_class_Variable_5 = (UClass*)Temp_class_Variable_5;
    params.Temp_class_Variable_6 = (UClass*)Temp_class_Variable_6;
    params.Temp_class_Variable_7 = (UClass*)Temp_class_Variable_7;
    params.CallFunc_GetPlayerControllerFromID_ReturnValue = (APlayerController*)CallFunc_GetPlayerControllerFromID_ReturnValue;
    params.K2Node_Select_Default = (UClass*)K2Node_Select_Default;
    params.CallFunc_Create_ReturnValue = (UUserWidget*)CallFunc_Create_ReturnValue;
    params.K2Node_DynamicCast_AsPhoenix_Credit_Entry_Widget = (UPhoenixCreditEntryWidget*)K2Node_DynamicCast_AsPhoenix_Credit_Entry_Widget;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    ProcessEvent(func, &params);
    return (UPhoenixCreditEntryWidget*)params.ReturnValue;
}
void UUI_BP_Credits_C::StopBackgroundBink() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Credits/UI_BP_Credits.UI_BP_Credits_C.StopBackgroundBink"));
    struct Params_StopBackgroundBink {
    }; // Size: 0x0
    Params_StopBackgroundBink params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Credits_C::ExecuteUbergraph_UI_BP_Credits(int32_t EntryPoint) {}
void UUI_BP_Credits_C::OnIntroStarted(int32_t IntroType, float IntroDuration) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Credits/UI_BP_Credits.UI_BP_Credits_C.OnIntroStarted"));
    struct Params_OnIntroStarted {
        int32_t IntroType; // 0x0
        float IntroDuration; // 0x4
    }; // Size: 0x8
    Params_OnIntroStarted params{};
    params.IntroType = (int32_t)IntroType;
    params.IntroDuration = (float)IntroDuration;
    ProcessEvent(func, &params);
}
void UUI_BP_Credits_C::PlayBackgroundBink(bool CallFunc_Play_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Credits/UI_BP_Credits.UI_BP_Credits_C.PlayBackgroundBink"));
    struct Params_PlayBackgroundBink {
        bool CallFunc_Play_ReturnValue; // 0x0
    }; // Size: 0x1
    Params_PlayBackgroundBink params{};
    params.CallFunc_Play_ReturnValue = (bool)CallFunc_Play_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_Credits_C::OpenBackgroundBink(FTimespan CallFunc_MakeTimespan_ReturnValue, bool CallFunc_Seek_ReturnValue, FString CallFunc_GetUrl_ReturnValue, bool CallFunc_SetLooping_ReturnValue, FString CallFunc_Replace_ReturnValue, bool CallFunc_OpenUrl_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Credits/UI_BP_Credits.UI_BP_Credits_C.OpenBackgroundBink"));
    struct Params_OpenBackgroundBink {
        FTimespan CallFunc_MakeTimespan_ReturnValue; // 0x0
        bool CallFunc_Seek_ReturnValue; // 0x8
        char pad_9[0x7];
        FString CallFunc_GetUrl_ReturnValue; // 0x10
        bool CallFunc_SetLooping_ReturnValue; // 0x20
        char pad_21[0x7];
        FString CallFunc_Replace_ReturnValue; // 0x28
        bool CallFunc_OpenUrl_ReturnValue; // 0x38
    }; // Size: 0x39
    Params_OpenBackgroundBink params{};
    params.CallFunc_MakeTimespan_ReturnValue = (FTimespan)CallFunc_MakeTimespan_ReturnValue;
    params.CallFunc_Seek_ReturnValue = (bool)CallFunc_Seek_ReturnValue;
    params.CallFunc_GetUrl_ReturnValue = (FString)CallFunc_GetUrl_ReturnValue;
    params.CallFunc_SetLooping_ReturnValue = (bool)CallFunc_SetLooping_ReturnValue;
    params.CallFunc_Replace_ReturnValue = (FString)CallFunc_Replace_ReturnValue;
    params.CallFunc_OpenUrl_ReturnValue = (bool)CallFunc_OpenUrl_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_Credits_C::Complete_64AC697A4153810645293EB464E62412() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Credits/UI_BP_Credits.UI_BP_Credits_C.Complete_64AC697A4153810645293EB464E62412"));
    struct Params_Complete_64AC697A4153810645293EB464E62412 {
    }; // Size: 0x0
    Params_Complete_64AC697A4153810645293EB464E62412 params{};
    ProcessEvent(func, &params);
}
TArray<FString> UUI_BP_Credits_C::GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Credits/UI_BP_Credits.UI_BP_Credits_C.GatherMenuReaderStrings"));
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
bool UUI_BP_Credits_C::BlueprintOnUMGInputAction(EUMGInputAction InputAction, EInputEvent InputEvent, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, bool CallFunc_EqualEqual_ByteByte_ReturnValue_5) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Credits/UI_BP_Credits.UI_BP_Credits_C.BlueprintOnUMGInputAction"));
    struct Params_BlueprintOnUMGInputAction {
        EUMGInputAction InputAction; // 0x0
        EInputEvent InputEvent; // 0x1
        bool ReturnValue; // 0x2
        bool CallFunc_EqualEqual_ByteByte_ReturnValue; // 0x3
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_1; // 0x4
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_2; // 0x5
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_3; // 0x6
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_4; // 0x7
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_5; // 0x8
    }; // Size: 0x9
    Params_BlueprintOnUMGInputAction params{};
    params.InputAction = (EUMGInputAction)InputAction;
    params.InputEvent = (EInputEvent)InputEvent;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_1;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_2;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_3;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_4 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_4;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_5 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_5;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UUI_BP_Credits_C::CurtainRaised_831EC33243A07371A780879EE1AAC9C0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Credits/UI_BP_Credits.UI_BP_Credits_C.CurtainRaised_831EC33243A07371A780879EE1AAC9C0"));
    struct Params_CurtainRaised_831EC33243A07371A780879EE1AAC9C0 {
    }; // Size: 0x0
    Params_CurtainRaised_831EC33243A07371A780879EE1AAC9C0 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Credits_C::Tick(FGeometry MyGeometry, float InDeltaTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Credits/UI_BP_Credits.UI_BP_Credits_C.Tick"));
    struct Params_Tick {
        FGeometry MyGeometry; // 0x0
        float InDeltaTime; // 0x38
    }; // Size: 0x3c
    Params_Tick params{};
    params.MyGeometry = (FGeometry)MyGeometry;
    params.InDeltaTime = (float)InDeltaTime;
    ProcessEvent(func, &params);
}
void UUI_BP_Credits_C::OnOutroStarted(int32_t OutroType, float OutroDuration) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Credits/UI_BP_Credits.UI_BP_Credits_C.OnOutroStarted"));
    struct Params_OnOutroStarted {
        int32_t OutroType; // 0x0
        float OutroDuration; // 0x4
    }; // Size: 0x8
    Params_OnOutroStarted params{};
    params.OutroType = (int32_t)OutroType;
    params.OutroDuration = (float)OutroDuration;
    ProcessEvent(func, &params);
}
void UUI_BP_Credits_C::CreditsEnded__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Credits/UI_BP_Credits.UI_BP_Credits_C.CreditsEnded__DelegateSignature"));
    struct Params_CreditsEnded__DelegateSignature {
    }; // Size: 0x0
    Params_CreditsEnded__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Credits_C::OnOutroEnded(int32_t OutroType) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Credits/UI_BP_Credits.UI_BP_Credits_C.OnOutroEnded"));
    struct Params_OnOutroEnded {
        int32_t OutroType; // 0x0
    }; // Size: 0x4
    Params_OnOutroEnded params{};
    params.OutroType = (int32_t)OutroType;
    ProcessEvent(func, &params);
}
void UUI_BP_Credits_C::ShowSkipPrompt() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Credits/UI_BP_Credits.UI_BP_Credits_C.ShowSkipPrompt"));
    struct Params_ShowSkipPrompt {
    }; // Size: 0x0
    Params_ShowSkipPrompt params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Credits_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Credits/UI_BP_Credits.UI_BP_Credits_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Credits_C::Destruct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Credits/UI_BP_Credits.UI_BP_Credits_C.Destruct"));
    struct Params_Destruct {
    }; // Size: 0x0
    Params_Destruct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Credits_C::CreditsMovieEnded() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Credits/UI_BP_Credits.UI_BP_Credits_C.CreditsMovieEnded"));
    struct Params_CreditsMovieEnded {
    }; // Size: 0x0
    Params_CreditsMovieEnded params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Credits_C::SkipReleased(ULegendItem* LegendItem, bool HoldWasCompleted) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Credits/UI_BP_Credits.UI_BP_Credits_C.SkipReleased"));
    struct Params_SkipReleased {
        ULegendItem* LegendItem; // 0x0
        bool HoldWasCompleted; // 0x8
    }; // Size: 0x9
    Params_SkipReleased params{};
    params.LegendItem = (ULegendItem*)LegendItem;
    params.HoldWasCompleted = (bool)HoldWasCompleted;
    ProcessEvent(func, &params);
}
void UUI_BP_Credits_C::OnMediaOpened(FString OpenedUrl) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Credits/UI_BP_Credits.UI_BP_Credits_C.OnMediaOpened"));
    struct Params_OnMediaOpened {
        FString OpenedUrl; // 0x0
    }; // Size: 0x10
    Params_OnMediaOpened params{};
    params.OpenedUrl = (FString)OpenedUrl;
    ProcessEvent(func, &params);
}
