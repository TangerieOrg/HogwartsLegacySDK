#pragma once
#include <cstdint>
#include "EReticuleState.hpp"
#include "ESlateVisibility.hpp"
#include "FLinearColor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector2D.hpp"
#include "UReticule.hpp"
class UWidgetAnimation;
class UCanvasPanel;
class UUMGSequencePlayer;
class UImage;
class UObject;
class ABiped_Player;
class UGameLogicObject;
#pragma pack(push, 1)
class UUI_BP_Reticule_C : public UReticule {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x3c8
    UWidgetAnimation* FadeAimRing; // 0x3d0
    UWidgetAnimation* FadeDotSkin; // 0x3d8
    UWidgetAnimation* PulsePrimary; // 0x3e0
    UWidgetAnimation* FadeOutFinisher; // 0x3e8
    UImage* Aim_Shot; // 0x3f0
    UImage* AimModeCircle; // 0x3f8
    UImage* BestFinisherTargetImage; // 0x400
    UImage* BestFinisherTargetLinearImage; // 0x408
    UCanvasPanel* CombatReticule; // 0x410
    UCanvasPanel* Dot_CP; // 0x418
    UCanvasPanel* DotSkin_CP; // 0x420
    UImage* FinisherCircleLinearImage; // 0x428
    UImage* FinisherRingLinearImage; // 0x430
    UImage* Glitter; // 0x438
    UImage* Locking; // 0x440
    UCanvasPanel* MouseAutoTargetDot; // 0x448
    UImage* Sub; // 0x450
    UImage* Sub_Locked; // 0x458
    UImage* Sub_Weak_Locked; // 0x460
    UImage* SubWeak; // 0x468
    UCanvasPanel* TargetReticule; // 0x470
    UImage* TargetRing; // 0x478
    UCanvasPanel* TargetRingCanvas; // 0x480
    UImage* CurrentSub; // 0x488
    UImage* CurrentFinisherCircleImage; // 0x490
    UImage* CurrentFinisherRingImage; // 0x498
    UImage* CurrentBestFinisherTargetImage; // 0x4a0
    UObject* TestStateMachine; // 0x4a8
    FVector2D PrimaryPosition; // 0x4b0
    UGameLogicObject* GameLogicObject; // 0x4b8
    static UUI_BP_Reticule_C* StaticClass();
    void Get_Game_Logic_Object(UGameLogicObject*& GameLogicObject, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, UGameLogicObject* CallFunc_GetGameLogicObject_ReturnValue);
    void SetTargetRingPosition(FVector2D Position, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, FVector2D CallFunc_MakeVector2D_ReturnValue);
    void ToIdle();
    void ApplyCircularFinisher();
    void ApplyLinerFinisher();
    void SetStateBP(EReticuleState State, bool K2Node_SwitchEnum_CmpSuccess);
    void HideAll();
    void ToFinisherInactive();
    void ToFinisherActive(FLinearColor K2Node_MakeStruct_LinearColor);
    void GetVisibilityState(bool Visible, ESlateVisibility& VisibilityState, uint8_t CallFunc_MakeLiteralByte_ReturnValue, bool Temp_bool_Variable, uint8_t CallFunc_MakeLiteralByte_ReturnValue_1, ESlateVisibility K2Node_Select_Default);
    void GetSubImage(UImage*& SubImage, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
    void GetWeakSubImage(UImage*& WeakSubImage, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
    void SetCurrentSub(UImage* NewSub);
    void SelectWeakSub(bool UseIt, bool Temp_bool_Variable, UImage* CallFunc_GetWeakSubImage_WeakSubImage, UImage* CallFunc_GetSubImage_SubImage, UImage* K2Node_Select_Default);
    void ShowAimShot(bool Visible, ESlateVisibility CallFunc_GetVisibilityState_VisibilityState);
    void FireFade(bool CallFunc_NotEqual_ByteByte_ReturnValue);
    void Fire();
    void ToUnlock(bool Temp_bool_Variable, UImage* K2Node_Select_Default);
    void ToLock(bool Temp_bool_Variable, UImage* K2Node_Select_Default);
    void SetPrimaryPosition(FVector2D Position, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, FVector2D CallFunc_MakeVector2D_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
    void ShowPrimary(bool Visible, ESlateVisibility CallFunc_GetVisibilityState_VisibilityState, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
    void SetSubPosition(FVector2D Position, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, FVector2D CallFunc_MakeVector2D_ReturnValue);
    void ShowSub(bool Visible);
    void GameLogicElementEvt_ShowDot_K2Node_GameLogicBoolResultEvent_3(bool CachedResult);
    void GameLogicElementEvt_ShowRing_K2Node_GameLogicBoolResultEvent_2(bool CachedResult);
    void GameLogicElementEvt_HasAutoTarget_K2Node_GameLogicBoolResultEvent_1(bool CachedResult);
    void GameLogicElementEvt_HasAimTarget_K2Node_GameLogicBoolResultEvent_0(bool CachedResult);
    void HandleFadeFinisher0();
    void AnimToIdle();
    void SetupForCircularFinisher0();
    void HandleOverlapping0(bool Overlapping);
    void UseWeakReticuleBP0(bool InUseWeakSub);
    void HandleFire0();
    void HandleShow0(bool IsVisible);
    void HandleShowSub0(bool IsVisible);
    void HandleSetPrimaryPosition0(FVector2D Position);
    void HandleSetSubPosition0(FVector2D Position);
    void HandleShowTargetReticule0(bool IsVisible);
    void HandleShowCombatReticule0(bool IsVisible);
    void HandleSetTargetRingPosition0(FVector2D Position);
    void HandleBestOverlapping0(bool Overlapping);
    void HandleFinisherActiveChanged0(bool FinisherActiveIn);
    void HandleShowRing0(bool IsVisible);
    void HandleSetState0(EReticuleState State);
    void Destruct();
    void Construct();
    void SetupForLinearFinisher0();
    void ExecuteUbergraph_UI_BP_Reticule(int32_t EntryPoint, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, FLinearColor K2Node_MakeStruct_LinearColor, FLinearColor K2Node_MakeStruct_LinearColor_1, bool K2Node_Event_Overlapping_1, FLinearColor K2Node_MakeStruct_LinearColor_2, bool K2Node_Event_InUseWeakSub, bool K2Node_Event_IsVisible_4, bool K2Node_Event_IsVisible_3, ESlateVisibility CallFunc_GetVisibilityState_VisibilityState, FVector2D K2Node_Event_Position_2, FVector2D K2Node_Event_Position_1, bool K2Node_Event_IsVisible_2, ESlateVisibility CallFunc_GetVisibilityState_VisibilityState_1, bool K2Node_Event_IsVisible_1, ESlateVisibility CallFunc_GetVisibilityState_VisibilityState_2, FVector2D K2Node_Event_Position, bool K2Node_Event_Overlapping, bool K2Node_Event_FinisherActiveIn, bool K2Node_Event_IsVisible, EReticuleState K2Node_Event_state, bool K2Node_GameLogicBoolResultEvent_CachedResult, bool K2Node_GameLogicBoolResultEvent_CachedResult_1, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, UGameLogicObject* CallFunc_Get_Game_Logic_Object_GameLogicObject, UGameLogicObject* CallFunc_Get_Game_Logic_Object_GameLogicObject_1, bool K2Node_GameLogicBoolResultEvent_CachedResult_2, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue_1, bool CallFunc_GetExpression_OnActor_ReturnValue, FLinearColor K2Node_MakeStruct_LinearColor_3, bool K2Node_GameLogicBoolResultEvent_CachedResult_3, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue_1);
}; // Size: 0x4c0
#pragma pack(pop)
