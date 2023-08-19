#pragma once
#include <cstdint>
#include "EInputEvent.hpp"
#include "EUMGInputAction.hpp"
#include "FFormatArgumentData.hpp"
#include "FGeometry.hpp"
#include "FHermesBPDelegateHandle.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UPhoenixUserWidget.hpp"
class UCanvasPanel;
class UWidgetAnimation;
class UPhoenixTextBlock;
class UUI_BP_LegendItem_C;
class UOverlay;
class UPhoenixImage;
class UUI_BP_BroomHUD_C;
class ARace;
class AFlyingBroom;
class UPopupScreen;
class ABiped_Player;
class UUMGSequencePlayer;
class UObject;
class AActor;
#pragma pack(push, 1)
class UUI_BP_BroomRaceHUD_C : public UPhoenixUserWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x328
    UWidgetAnimation* ShowTimeSummary; // 0x330
    UWidgetAnimation* ShowTimePenalty; // 0x338
    UWidgetAnimation* ShowGatesUI; // 0x340
    UWidgetAnimation* EndOfRaceTransition; // 0x348
    UWidgetAnimation* BubbleCountdownOn; // 0x350
    UWidgetAnimation* BRResultsPopupOff; // 0x358
    UWidgetAnimation* BRResultsPopupOn; // 0x360
    UWidgetAnimation* BestTimeResultsOff; // 0x368
    UWidgetAnimation* BestTimeResultsOn; // 0x370
    UPhoenixTextBlock* BestTimeAmount; // 0x378
    UPhoenixTextBlock* BestTimeNumber; // 0x380
    UPhoenixTextBlock* BestTimeResults; // 0x388
    UCanvasPanel* BestTimeResultsPopup; // 0x390
    UCanvasPanel* CountDownGroup; // 0x398
    UPhoenixTextBlock* CurrentGates; // 0x3a0
    UOverlay* EndOfRaceBG; // 0x3a8
    UOverlay* EndOfRaceTimePanel; // 0x3b0
    UOverlay* ExitLegendPanel; // 0x3b8
    UPhoenixTextBlock* PenaltyTimeHeader; // 0x3c0
    UPhoenixTextBlock* PenaltyTimeText; // 0x3c8
    UPhoenixImage* PhoenixImage_10; // 0x3d0
    UPhoenixImage* PhoenixImage_251; // 0x3d8
    UPhoenixTextBlock* PlayerTime; // 0x3e0
    UPhoenixTextBlock* PlayerTimeResult; // 0x3e8
    UPhoenixTextBlock* RawTimeText; // 0x3f0
    UCanvasPanel* ResultsPopup; // 0x3f8
    UPhoenixTextBlock* TimePenaltyText; // 0x400
    UPhoenixTextBlock* TotalGates; // 0x408
    UPhoenixTextBlock* TotalTimeText; // 0x410
    UUI_BP_BroomHUD_C* UI_BP_BroomHUD; // 0x418
    UUI_BP_LegendItem_C* UI_BP_LegendItem; // 0x420
    ARace* RaceObj; // 0x428
    AFlyingBroom* BroomObj; // 0x430
    int32_t OutroType; // 0x438
    int32_t MissedGates; // 0x43c
    bool IsRaceComplete; // 0x440
    char pad_441[0x7];
    FHermesBPDelegateHandle OnCountdownBeginHandle; // 0x448
    FHermesBPDelegateHandle CountdownUpdateHandle; // 0x458
    FHermesBPDelegateHandle CountdownCompleteHandle; // 0x468
    FHermesBPDelegateHandle GateHitHandle; // 0x478
    FHermesBPDelegateHandle MissedGateHandle; // 0x488
    FHermesBPDelegateHandle RaceFinishedHandle; // 0x498
    FHermesBPDelegateHandle BoostHandle; // 0x4a8
    FHermesBPDelegateHandle BoostEndHandle; // 0x4b8
    FHermesBPDelegateHandle BoostGainStartHandle; // 0x4c8
    FHermesBPDelegateHandle BoostGainEndHandle; // 0x4d8
    FHermesBPDelegateHandle RaceAbandonedHandle; // 0x4e8
    UPopupScreen* YesNoScreen; // 0x4f8
    static UUI_BP_BroomRaceHUD_C* StaticClass();
    void ClearHUD(ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue);
    void ClearRaceInfo();
    void SetRaceInfo(AFlyingBroom* CallFunc_GetPlayerBroom_ReturnValue, bool CallFunc_IsRaceMissionActive_ReturnValue, int32_t CallFunc_GetNumberOfGates_ReturnValue, float CallFunc_GetBestRacer_Blueprint_OutBestTime, FName CallFunc_GetBestRacer_Blueprint_ReturnValue);
    bool BlueprintOnUMGInputAction(EUMGInputAction InputAction, EInputEvent InputEvent, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
    void RaceComplete(bool Abandoned, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_GetTotalPenaltyTime_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, int32_t CallFunc_FTrunc_ReturnValue, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, float CallFunc_Fraction_ReturnValue);
    void PlayCountdownAnim(int32_t CountdownNum, int32_t Temp_int_Variable, float Temp_float_Variable, float Temp_float_Variable_1, float Temp_float_Variable_2, float Temp_float_Variable_3, float K2Node_Select_Default, float CallFunc_Add_FloatFloat_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationTimeRange_ReturnValue);
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void WidgetAnimationEvt_BestTimeResultsOn_K2Node_WidgetAnimationEvent_0();
    void WidgetAnimationEvt_BRResultsPopupOn_K2Node_WidgetAnimationEvent_1();
    void OnOutroStarted0(int32_t OutroType, float OutroDuration);
    void OnOutroEnded0(int32_t OutroType);
    void WidgetAnimationEvt_ShowTimeSummary_K2Node_WidgetAnimationEvent_2();
    void Show();
    void Hide();
    void OnRaceCountdownBegin(UObject* Caller, int32_t int);
    void OnRaceCountdownUpdate(UObject* Caller, int32_t int);
    void OnRaceCountdownComplete(UObject* Caller, int32_t int);
    void OnHitGate(UObject* Caller, int32_t int);
    void OnMissedGatePenalty(UObject* Caller, int32_t int);
    void OnRaceFinished(UObject* Caller);
    void HighBoostGainStart(UObject* Caller);
    void HighBoostGainEnd(UObject* Caller);
    void BroomBoost(UObject* Caller, AActor* Actor);
    void BroomBoostEnd(UObject* Caller, AActor* Actor);
    void OnRaceAbandoned(UObject* Caller);
    void PopupClosedEvent(UPopupScreen* PopupScreen, int32_t CompletionActionIndex);
    void ExecuteUbergraph_UI_BP_BroomRaceHUD(int32_t EntryPoint);
}; // Size: 0x500
#pragma pack(pop)
