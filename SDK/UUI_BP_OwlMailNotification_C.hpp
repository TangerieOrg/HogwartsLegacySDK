#pragma once
#include <cstdint>
#include "FGeometry.hpp"
#include "FMailEntry.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UOwlMailNotification.hpp"
class UWidgetAnimation;
class UUMGSequencePlayer;
class UUI_BP_LegendItem_C;
class UObject;
class UImage;
class UPhoenixTextBlock;
class UUIManager;
#pragma pack(push, 1)
class UUI_BP_OwlMailNotification_C : public UOwlMailNotification {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x2e8
    UWidgetAnimation* ShowSenderNameTransition; // 0x2f0
    UWidgetAnimation* CloseEnvelope; // 0x2f8
    UWidgetAnimation* ResetEnvelope; // 0x300
    UWidgetAnimation* ShowSender; // 0x308
    UWidgetAnimation* FadeOut; // 0x310
    UWidgetAnimation* FadeIn; // 0x318
    UUI_BP_LegendItem_C* ReadLegend; // 0x320
    UImage* SenderIcon; // 0x328
    UPhoenixTextBlock* SenderName; // 0x330
    bool AwaitingInput; // 0x338
    char pad_339[0x7];
    TArray<FMailEntry> QueuedEntries; // 0x340
    FMailEntry CurrentMailEntry; // 0x350
    float CurrentCountdownTime; // 0x3a8
    float MaxCountdownTime; // 0x3ac
    bool isSenderShowing; // 0x3b0
    bool isAutoPlay; // 0x3b1
    char pad_3b2[0x6];
    static UUI_BP_OwlMailNotification_C* StaticClass();
    void SequenceEvent__ENTRYPOINTUI_BP_OwlMailNotification_1();
    void SequenceEvent__ENTRYPOINTUI_BP_OwlMailNotification_0();
    void QueueNotification(FMailEntry NewEntry, int32_t DisplayPriority, UUIManager* CallFunc_Get_ReturnValue, int32_t CallFunc_Array_Add_ReturnValue);
    void HideMailNotification();
    void ShowMailNotification(FMailEntry MailEntry, FString CallFunc_Conv_NameToString_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue_1, int32_t CallFunc_PostEventAtLocation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool CallFunc_AsyncFindIconTexture2D_ReturnValue);
    void OnInitialized();
    void ShowOwlMail(UObject* Caller);
    void WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_0();
    void WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_1();
    void DialogueLineComplete();
    void PreConstruct(bool IsDesignTime);
    void ReadMail();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnEnvelopeClosed();
    void CheckToShowNameTransition();
    void Destruct();
    void ExecuteUbergraph_UI_BP_OwlMailNotification(int32_t EntryPoint, UObject* K2Node_CustomEvent_Caller, int32_t CallFunc_Array_Length_ReturnValue, FMailEntry CallFunc_Array_Get_Item, bool CallFunc_Greater_IntInt_ReturnValue, int32_t CallFunc_PlayMailDialogLine_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue_1, FString CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue);
}; // Size: 0x3b8
#pragma pack(pop)
