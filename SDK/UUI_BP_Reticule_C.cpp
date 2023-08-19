#include "ABiped_Player.hpp"
#include "EReticuleState.hpp"
#include "ESlateVisibility.hpp"
#include "FLinearColor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector2D.hpp"
#include "UCanvasPanel.hpp"
#include "UFunction.hpp"
#include "UGameLogicObject.hpp"
#include "UImage.hpp"
#include "UObject.hpp"
#include "UReticule.hpp"
#include "UUI_BP_Reticule_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UWidgetAnimation.hpp"
void UUI_BP_Reticule_C::SetTargetRingPosition(FVector2D Position, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, FVector2D CallFunc_MakeVector2D_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Reticles/UI_BP_Reticule.UI_BP_Reticule_C.SetTargetRingPosition"));
    struct Params_SetTargetRingPosition {
        FVector2D Position; // 0x0
        float CallFunc_BreakVector2D_X; // 0x8
        float CallFunc_BreakVector2D_Y; // 0xc
        float CallFunc_Multiply_FloatFloat_ReturnValue; // 0x10
        float CallFunc_Multiply_FloatFloat_ReturnValue_1; // 0x14
        FVector2D CallFunc_MakeVector2D_ReturnValue; // 0x18
    }; // Size: 0x20
    Params_SetTargetRingPosition params{};
    params.Position = (FVector2D)Position;
    params.CallFunc_BreakVector2D_X = (float)CallFunc_BreakVector2D_X;
    params.CallFunc_BreakVector2D_Y = (float)CallFunc_BreakVector2D_Y;
    params.CallFunc_Multiply_FloatFloat_ReturnValue = (float)CallFunc_Multiply_FloatFloat_ReturnValue;
    params.CallFunc_Multiply_FloatFloat_ReturnValue_1 = (float)CallFunc_Multiply_FloatFloat_ReturnValue_1;
    params.CallFunc_MakeVector2D_ReturnValue = (FVector2D)CallFunc_MakeVector2D_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_Reticule_C::SetCurrentSub(UImage* NewSub) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Reticles/UI_BP_Reticule.UI_BP_Reticule_C.SetCurrentSub"));
    struct Params_SetCurrentSub {
        UImage* NewSub; // 0x0
    }; // Size: 0x8
    Params_SetCurrentSub params{};
    params.NewSub = (UImage*)NewSub;
    ProcessEvent(func, &params);
}
UUI_BP_Reticule_C* UUI_BP_Reticule_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/HUD/Reticles/UI_BP_Reticule.UI_BP_Reticule_C");
    return (UUI_BP_Reticule_C*)res;
}
void UUI_BP_Reticule_C::HandleSetPrimaryPosition0(FVector2D Position) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Reticles/UI_BP_Reticule.UI_BP_Reticule_C.HandleSetPrimaryPosition"));
    struct Params_HandleSetPrimaryPosition {
        FVector2D Position; // 0x0
    }; // Size: 0x8
    Params_HandleSetPrimaryPosition params{};
    params.Position = (FVector2D)Position;
    ProcessEvent(func, &params);
}
void UUI_BP_Reticule_C::Get_Game_Logic_Object(UGameLogicObject*& GameLogicObject, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, UGameLogicObject* CallFunc_GetGameLogicObject_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Reticles/UI_BP_Reticule.UI_BP_Reticule_C.Get Game Logic Object"));
    struct Params_Get_Game_Logic_Object {
        UGameLogicObject* GameLogicObject; // 0x0
        ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue; // 0x8
        bool CallFunc_IsValid_ReturnValue; // 0x10
        bool CallFunc_IsValid_ReturnValue_1; // 0x11
        char pad_12[0x6];
        UGameLogicObject* CallFunc_GetGameLogicObject_ReturnValue; // 0x18
    }; // Size: 0x20
    Params_Get_Game_Logic_Object params{};
    params.GameLogicObject = (UGameLogicObject*)GameLogicObject;
    params.CallFunc_GetTheBipedPlayer_ReturnValue = (ABiped_Player*)CallFunc_GetTheBipedPlayer_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_IsValid_ReturnValue_1 = (bool)CallFunc_IsValid_ReturnValue_1;
    params.CallFunc_GetGameLogicObject_ReturnValue = (UGameLogicObject*)CallFunc_GetGameLogicObject_ReturnValue;
    ProcessEvent(func, &params);
    GameLogicObject = params.GameLogicObject;
}
void UUI_BP_Reticule_C::ToIdle() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Reticles/UI_BP_Reticule.UI_BP_Reticule_C.ToIdle"));
    struct Params_ToIdle {
    }; // Size: 0x0
    Params_ToIdle params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Reticule_C::ApplyCircularFinisher() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Reticles/UI_BP_Reticule.UI_BP_Reticule_C.ApplyCircularFinisher"));
    struct Params_ApplyCircularFinisher {
    }; // Size: 0x0
    Params_ApplyCircularFinisher params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Reticule_C::SetStateBP(EReticuleState State, bool K2Node_SwitchEnum_CmpSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Reticles/UI_BP_Reticule.UI_BP_Reticule_C.SetStateBP"));
    struct Params_SetStateBP {
        EReticuleState State; // 0x0
        bool K2Node_SwitchEnum_CmpSuccess; // 0x1
    }; // Size: 0x2
    Params_SetStateBP params{};
    params.State = (EReticuleState)State;
    params.K2Node_SwitchEnum_CmpSuccess = (bool)K2Node_SwitchEnum_CmpSuccess;
    ProcessEvent(func, &params);
}
void UUI_BP_Reticule_C::ApplyLinerFinisher() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Reticles/UI_BP_Reticule.UI_BP_Reticule_C.ApplyLinerFinisher"));
    struct Params_ApplyLinerFinisher {
    }; // Size: 0x0
    Params_ApplyLinerFinisher params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Reticule_C::HideAll() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Reticles/UI_BP_Reticule.UI_BP_Reticule_C.HideAll"));
    struct Params_HideAll {
    }; // Size: 0x0
    Params_HideAll params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Reticule_C::ToFinisherInactive() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Reticles/UI_BP_Reticule.UI_BP_Reticule_C.ToFinisherInactive"));
    struct Params_ToFinisherInactive {
    }; // Size: 0x0
    Params_ToFinisherInactive params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Reticule_C::ToFinisherActive(FLinearColor K2Node_MakeStruct_LinearColor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Reticles/UI_BP_Reticule.UI_BP_Reticule_C.ToFinisherActive"));
    struct Params_ToFinisherActive {
        FLinearColor K2Node_MakeStruct_LinearColor; // 0x0
    }; // Size: 0x10
    Params_ToFinisherActive params{};
    params.K2Node_MakeStruct_LinearColor = (FLinearColor)K2Node_MakeStruct_LinearColor;
    ProcessEvent(func, &params);
}
void UUI_BP_Reticule_C::GetVisibilityState(bool Visible, ESlateVisibility& VisibilityState, uint8_t CallFunc_MakeLiteralByte_ReturnValue, bool Temp_bool_Variable, uint8_t CallFunc_MakeLiteralByte_ReturnValue_1, ESlateVisibility K2Node_Select_Default) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Reticles/UI_BP_Reticule.UI_BP_Reticule_C.GetVisibilityState"));
    struct Params_GetVisibilityState {
        bool Visible; // 0x0
        ESlateVisibility VisibilityState; // 0x1
        uint8_t CallFunc_MakeLiteralByte_ReturnValue; // 0x2
        bool Temp_bool_Variable; // 0x3
        uint8_t CallFunc_MakeLiteralByte_ReturnValue_1; // 0x4
        ESlateVisibility K2Node_Select_Default; // 0x5
    }; // Size: 0x6
    Params_GetVisibilityState params{};
    params.Visible = (bool)Visible;
    params.VisibilityState = (ESlateVisibility)VisibilityState;
    params.CallFunc_MakeLiteralByte_ReturnValue = (uint8_t)CallFunc_MakeLiteralByte_ReturnValue;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.CallFunc_MakeLiteralByte_ReturnValue_1 = (uint8_t)CallFunc_MakeLiteralByte_ReturnValue_1;
    params.K2Node_Select_Default = (ESlateVisibility)K2Node_Select_Default;
    ProcessEvent(func, &params);
    VisibilityState = params.VisibilityState;
}
void UUI_BP_Reticule_C::GetSubImage(UImage*& SubImage, bool CallFunc_EqualEqual_ByteByte_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Reticles/UI_BP_Reticule.UI_BP_Reticule_C.GetSubImage"));
    struct Params_GetSubImage {
        UImage* SubImage; // 0x0
        bool CallFunc_EqualEqual_ByteByte_ReturnValue; // 0x8
    }; // Size: 0x9
    Params_GetSubImage params{};
    params.SubImage = (UImage*)SubImage;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue;
    ProcessEvent(func, &params);
    SubImage = params.SubImage;
}
void UUI_BP_Reticule_C::Fire() {}
void UUI_BP_Reticule_C::GetWeakSubImage(UImage*& WeakSubImage, bool CallFunc_EqualEqual_ByteByte_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Reticles/UI_BP_Reticule.UI_BP_Reticule_C.GetWeakSubImage"));
    struct Params_GetWeakSubImage {
        UImage* WeakSubImage; // 0x0
        bool CallFunc_EqualEqual_ByteByte_ReturnValue; // 0x8
    }; // Size: 0x9
    Params_GetWeakSubImage params{};
    params.WeakSubImage = (UImage*)WeakSubImage;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue;
    ProcessEvent(func, &params);
    WeakSubImage = params.WeakSubImage;
}
void UUI_BP_Reticule_C::UseWeakReticuleBP0(bool InUseWeakSub) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Reticles/UI_BP_Reticule.UI_BP_Reticule_C.UseWeakReticuleBP"));
    struct Params_UseWeakReticuleBP {
        bool InUseWeakSub; // 0x0
    }; // Size: 0x1
    Params_UseWeakReticuleBP params{};
    params.InUseWeakSub = (bool)InUseWeakSub;
    ProcessEvent(func, &params);
}
void UUI_BP_Reticule_C::SelectWeakSub(bool UseIt, bool Temp_bool_Variable, UImage* CallFunc_GetWeakSubImage_WeakSubImage, UImage* CallFunc_GetSubImage_SubImage, UImage* K2Node_Select_Default) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Reticles/UI_BP_Reticule.UI_BP_Reticule_C.SelectWeakSub"));
    struct Params_SelectWeakSub {
        bool UseIt; // 0x0
        bool Temp_bool_Variable; // 0x1
        char pad_2[0x6];
        UImage* CallFunc_GetWeakSubImage_WeakSubImage; // 0x8
        UImage* CallFunc_GetSubImage_SubImage; // 0x10
        UImage* K2Node_Select_Default; // 0x18
    }; // Size: 0x20
    Params_SelectWeakSub params{};
    params.UseIt = (bool)UseIt;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.CallFunc_GetWeakSubImage_WeakSubImage = (UImage*)CallFunc_GetWeakSubImage_WeakSubImage;
    params.CallFunc_GetSubImage_SubImage = (UImage*)CallFunc_GetSubImage_SubImage;
    params.K2Node_Select_Default = (UImage*)K2Node_Select_Default;
    ProcessEvent(func, &params);
}
void UUI_BP_Reticule_C::SetPrimaryPosition(FVector2D Position, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, FVector2D CallFunc_MakeVector2D_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Reticles/UI_BP_Reticule.UI_BP_Reticule_C.SetPrimaryPosition"));
    struct Params_SetPrimaryPosition {
        FVector2D Position; // 0x0
        float CallFunc_BreakVector2D_X; // 0x8
        float CallFunc_BreakVector2D_Y; // 0xc
        float CallFunc_Multiply_FloatFloat_ReturnValue; // 0x10
        float CallFunc_Multiply_FloatFloat_ReturnValue_1; // 0x14
        FVector2D CallFunc_MakeVector2D_ReturnValue; // 0x18
        bool CallFunc_EqualEqual_ByteByte_ReturnValue; // 0x20
    }; // Size: 0x21
    Params_SetPrimaryPosition params{};
    params.Position = (FVector2D)Position;
    params.CallFunc_BreakVector2D_X = (float)CallFunc_BreakVector2D_X;
    params.CallFunc_BreakVector2D_Y = (float)CallFunc_BreakVector2D_Y;
    params.CallFunc_Multiply_FloatFloat_ReturnValue = (float)CallFunc_Multiply_FloatFloat_ReturnValue;
    params.CallFunc_Multiply_FloatFloat_ReturnValue_1 = (float)CallFunc_Multiply_FloatFloat_ReturnValue_1;
    params.CallFunc_MakeVector2D_ReturnValue = (FVector2D)CallFunc_MakeVector2D_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_Reticule_C::ShowAimShot(bool Visible, ESlateVisibility CallFunc_GetVisibilityState_VisibilityState) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Reticles/UI_BP_Reticule.UI_BP_Reticule_C.ShowAimShot"));
    struct Params_ShowAimShot {
        bool Visible; // 0x0
        ESlateVisibility CallFunc_GetVisibilityState_VisibilityState; // 0x1
    }; // Size: 0x2
    Params_ShowAimShot params{};
    params.Visible = (bool)Visible;
    params.CallFunc_GetVisibilityState_VisibilityState = (ESlateVisibility)CallFunc_GetVisibilityState_VisibilityState;
    ProcessEvent(func, &params);
}
void UUI_BP_Reticule_C::FireFade(bool CallFunc_NotEqual_ByteByte_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Reticles/UI_BP_Reticule.UI_BP_Reticule_C.FireFade"));
    struct Params_FireFade {
        bool CallFunc_NotEqual_ByteByte_ReturnValue; // 0x0
    }; // Size: 0x1
    Params_FireFade params{};
    params.CallFunc_NotEqual_ByteByte_ReturnValue = (bool)CallFunc_NotEqual_ByteByte_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_Reticule_C::ToUnlock(bool Temp_bool_Variable, UImage* K2Node_Select_Default) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Reticles/UI_BP_Reticule.UI_BP_Reticule_C.ToUnlock"));
    struct Params_ToUnlock {
        bool Temp_bool_Variable; // 0x0
        char pad_1[0x7];
        UImage* K2Node_Select_Default; // 0x8
    }; // Size: 0x10
    Params_ToUnlock params{};
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.K2Node_Select_Default = (UImage*)K2Node_Select_Default;
    ProcessEvent(func, &params);
}
void UUI_BP_Reticule_C::ToLock(bool Temp_bool_Variable, UImage* K2Node_Select_Default) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Reticles/UI_BP_Reticule.UI_BP_Reticule_C.ToLock"));
    struct Params_ToLock {
        bool Temp_bool_Variable; // 0x0
        char pad_1[0x7];
        UImage* K2Node_Select_Default; // 0x8
    }; // Size: 0x10
    Params_ToLock params{};
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.K2Node_Select_Default = (UImage*)K2Node_Select_Default;
    ProcessEvent(func, &params);
}
void UUI_BP_Reticule_C::ShowPrimary(bool Visible, ESlateVisibility CallFunc_GetVisibilityState_VisibilityState, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Reticles/UI_BP_Reticule.UI_BP_Reticule_C.ShowPrimary"));
    struct Params_ShowPrimary {
        bool Visible; // 0x0
        ESlateVisibility CallFunc_GetVisibilityState_VisibilityState; // 0x1
        char pad_2[0x6];
        UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue; // 0x8
    }; // Size: 0x10
    Params_ShowPrimary params{};
    params.Visible = (bool)Visible;
    params.CallFunc_GetVisibilityState_VisibilityState = (ESlateVisibility)CallFunc_GetVisibilityState_VisibilityState;
    params.CallFunc_PlayAnimation_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimation_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_Reticule_C::SetSubPosition(FVector2D Position, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, FVector2D CallFunc_MakeVector2D_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Reticles/UI_BP_Reticule.UI_BP_Reticule_C.SetSubPosition"));
    struct Params_SetSubPosition {
        FVector2D Position; // 0x0
        float CallFunc_BreakVector2D_X; // 0x8
        float CallFunc_BreakVector2D_Y; // 0xc
        float CallFunc_Multiply_FloatFloat_ReturnValue; // 0x10
        float CallFunc_Multiply_FloatFloat_ReturnValue_1; // 0x14
        FVector2D CallFunc_MakeVector2D_ReturnValue; // 0x18
    }; // Size: 0x20
    Params_SetSubPosition params{};
    params.Position = (FVector2D)Position;
    params.CallFunc_BreakVector2D_X = (float)CallFunc_BreakVector2D_X;
    params.CallFunc_BreakVector2D_Y = (float)CallFunc_BreakVector2D_Y;
    params.CallFunc_Multiply_FloatFloat_ReturnValue = (float)CallFunc_Multiply_FloatFloat_ReturnValue;
    params.CallFunc_Multiply_FloatFloat_ReturnValue_1 = (float)CallFunc_Multiply_FloatFloat_ReturnValue_1;
    params.CallFunc_MakeVector2D_ReturnValue = (FVector2D)CallFunc_MakeVector2D_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_Reticule_C::ShowSub(bool Visible) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Reticles/UI_BP_Reticule.UI_BP_Reticule_C.ShowSub"));
    struct Params_ShowSub {
        bool Visible; // 0x0
    }; // Size: 0x1
    Params_ShowSub params{};
    params.Visible = (bool)Visible;
    ProcessEvent(func, &params);
}
void UUI_BP_Reticule_C::GameLogicElementEvt_ShowDot_K2Node_GameLogicBoolResultEvent_3(bool CachedResult) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Reticles/UI_BP_Reticule.UI_BP_Reticule_C.GameLogicElementEvt_ShowDot_K2Node_GameLogicBoolResultEvent_3"));
    struct Params_GameLogicElementEvt_ShowDot_K2Node_GameLogicBoolResultEvent_3 {
        bool CachedResult; // 0x0
    }; // Size: 0x1
    Params_GameLogicElementEvt_ShowDot_K2Node_GameLogicBoolResultEvent_3 params{};
    params.CachedResult = (bool)CachedResult;
    ProcessEvent(func, &params);
}
void UUI_BP_Reticule_C::GameLogicElementEvt_ShowRing_K2Node_GameLogicBoolResultEvent_2(bool CachedResult) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Reticles/UI_BP_Reticule.UI_BP_Reticule_C.GameLogicElementEvt_ShowRing_K2Node_GameLogicBoolResultEvent_2"));
    struct Params_GameLogicElementEvt_ShowRing_K2Node_GameLogicBoolResultEvent_2 {
        bool CachedResult; // 0x0
    }; // Size: 0x1
    Params_GameLogicElementEvt_ShowRing_K2Node_GameLogicBoolResultEvent_2 params{};
    params.CachedResult = (bool)CachedResult;
    ProcessEvent(func, &params);
}
void UUI_BP_Reticule_C::HandleSetTargetRingPosition0(FVector2D Position) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Reticles/UI_BP_Reticule.UI_BP_Reticule_C.HandleSetTargetRingPosition"));
    struct Params_HandleSetTargetRingPosition {
        FVector2D Position; // 0x0
    }; // Size: 0x8
    Params_HandleSetTargetRingPosition params{};
    params.Position = (FVector2D)Position;
    ProcessEvent(func, &params);
}
void UUI_BP_Reticule_C::GameLogicElementEvt_HasAutoTarget_K2Node_GameLogicBoolResultEvent_1(bool CachedResult) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Reticles/UI_BP_Reticule.UI_BP_Reticule_C.GameLogicElementEvt_HasAutoTarget_K2Node_GameLogicBoolResultEvent_1"));
    struct Params_GameLogicElementEvt_HasAutoTarget_K2Node_GameLogicBoolResultEvent_1 {
        bool CachedResult; // 0x0
    }; // Size: 0x1
    Params_GameLogicElementEvt_HasAutoTarget_K2Node_GameLogicBoolResultEvent_1 params{};
    params.CachedResult = (bool)CachedResult;
    ProcessEvent(func, &params);
}
void UUI_BP_Reticule_C::HandleShow0(bool IsVisible) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Reticles/UI_BP_Reticule.UI_BP_Reticule_C.HandleShow"));
    struct Params_HandleShow {
        bool IsVisible; // 0x0
    }; // Size: 0x1
    Params_HandleShow params{};
    params.IsVisible = (bool)IsVisible;
    ProcessEvent(func, &params);
}
void UUI_BP_Reticule_C::GameLogicElementEvt_HasAimTarget_K2Node_GameLogicBoolResultEvent_0(bool CachedResult) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Reticles/UI_BP_Reticule.UI_BP_Reticule_C.GameLogicElementEvt_HasAimTarget_K2Node_GameLogicBoolResultEvent_0"));
    struct Params_GameLogicElementEvt_HasAimTarget_K2Node_GameLogicBoolResultEvent_0 {
        bool CachedResult; // 0x0
    }; // Size: 0x1
    Params_GameLogicElementEvt_HasAimTarget_K2Node_GameLogicBoolResultEvent_0 params{};
    params.CachedResult = (bool)CachedResult;
    ProcessEvent(func, &params);
}
void UUI_BP_Reticule_C::HandleSetSubPosition0(FVector2D Position) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Reticles/UI_BP_Reticule.UI_BP_Reticule_C.HandleSetSubPosition"));
    struct Params_HandleSetSubPosition {
        FVector2D Position; // 0x0
    }; // Size: 0x8
    Params_HandleSetSubPosition params{};
    params.Position = (FVector2D)Position;
    ProcessEvent(func, &params);
}
void UUI_BP_Reticule_C::HandleFadeFinisher0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Reticles/UI_BP_Reticule.UI_BP_Reticule_C.HandleFadeFinisher"));
    struct Params_HandleFadeFinisher {
    }; // Size: 0x0
    Params_HandleFadeFinisher params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Reticule_C::AnimToIdle() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Reticles/UI_BP_Reticule.UI_BP_Reticule_C.AnimToIdle"));
    struct Params_AnimToIdle {
    }; // Size: 0x0
    Params_AnimToIdle params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Reticule_C::SetupForCircularFinisher0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Reticles/UI_BP_Reticule.UI_BP_Reticule_C.SetupForCircularFinisher"));
    struct Params_SetupForCircularFinisher {
    }; // Size: 0x0
    Params_SetupForCircularFinisher params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Reticule_C::HandleOverlapping0(bool Overlapping) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Reticles/UI_BP_Reticule.UI_BP_Reticule_C.HandleOverlapping"));
    struct Params_HandleOverlapping {
        bool Overlapping; // 0x0
    }; // Size: 0x1
    Params_HandleOverlapping params{};
    params.Overlapping = (bool)Overlapping;
    ProcessEvent(func, &params);
}
void UUI_BP_Reticule_C::HandleFire0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Reticles/UI_BP_Reticule.UI_BP_Reticule_C.HandleFire"));
    struct Params_HandleFire {
    }; // Size: 0x0
    Params_HandleFire params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Reticule_C::SetupForLinearFinisher0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Reticles/UI_BP_Reticule.UI_BP_Reticule_C.SetupForLinearFinisher"));
    struct Params_SetupForLinearFinisher {
    }; // Size: 0x0
    Params_SetupForLinearFinisher params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Reticule_C::HandleShowSub0(bool IsVisible) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Reticles/UI_BP_Reticule.UI_BP_Reticule_C.HandleShowSub"));
    struct Params_HandleShowSub {
        bool IsVisible; // 0x0
    }; // Size: 0x1
    Params_HandleShowSub params{};
    params.IsVisible = (bool)IsVisible;
    ProcessEvent(func, &params);
}
void UUI_BP_Reticule_C::HandleShowTargetReticule0(bool IsVisible) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Reticles/UI_BP_Reticule.UI_BP_Reticule_C.HandleShowTargetReticule"));
    struct Params_HandleShowTargetReticule {
        bool IsVisible; // 0x0
    }; // Size: 0x1
    Params_HandleShowTargetReticule params{};
    params.IsVisible = (bool)IsVisible;
    ProcessEvent(func, &params);
}
void UUI_BP_Reticule_C::ExecuteUbergraph_UI_BP_Reticule(int32_t EntryPoint, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, FLinearColor K2Node_MakeStruct_LinearColor, FLinearColor K2Node_MakeStruct_LinearColor_1, bool K2Node_Event_Overlapping_1, FLinearColor K2Node_MakeStruct_LinearColor_2, bool K2Node_Event_InUseWeakSub, bool K2Node_Event_IsVisible_4, bool K2Node_Event_IsVisible_3, ESlateVisibility CallFunc_GetVisibilityState_VisibilityState, FVector2D K2Node_Event_Position_2, FVector2D K2Node_Event_Position_1, bool K2Node_Event_IsVisible_2, ESlateVisibility CallFunc_GetVisibilityState_VisibilityState_1, bool K2Node_Event_IsVisible_1, ESlateVisibility CallFunc_GetVisibilityState_VisibilityState_2, FVector2D K2Node_Event_Position, bool K2Node_Event_Overlapping, bool K2Node_Event_FinisherActiveIn, bool K2Node_Event_IsVisible, EReticuleState K2Node_Event_state, bool K2Node_GameLogicBoolResultEvent_CachedResult, bool K2Node_GameLogicBoolResultEvent_CachedResult_1, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, UGameLogicObject* CallFunc_Get_Game_Logic_Object_GameLogicObject, UGameLogicObject* CallFunc_Get_Game_Logic_Object_GameLogicObject_1, bool K2Node_GameLogicBoolResultEvent_CachedResult_2, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue_1, bool CallFunc_GetExpression_OnActor_ReturnValue, FLinearColor K2Node_MakeStruct_LinearColor_3, bool K2Node_GameLogicBoolResultEvent_CachedResult_3, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Reticles/UI_BP_Reticule.UI_BP_Reticule_C.ExecuteUbergraph_UI_BP_Reticule"));
    struct Params_ExecuteUbergraph_UI_BP_Reticule {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue; // 0x8
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue; // 0x10
        UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue; // 0x18
        FLinearColor K2Node_MakeStruct_LinearColor; // 0x20
        FLinearColor K2Node_MakeStruct_LinearColor_1; // 0x30
        bool K2Node_Event_Overlapping_1; // 0x40
        char pad_41[0x3];
        FLinearColor K2Node_MakeStruct_LinearColor_2; // 0x44
        bool K2Node_Event_InUseWeakSub; // 0x54
        bool K2Node_Event_IsVisible_4; // 0x55
        bool K2Node_Event_IsVisible_3; // 0x56
        ESlateVisibility CallFunc_GetVisibilityState_VisibilityState; // 0x57
        FVector2D K2Node_Event_Position_2; // 0x58
        FVector2D K2Node_Event_Position_1; // 0x60
        bool K2Node_Event_IsVisible_2; // 0x68
        ESlateVisibility CallFunc_GetVisibilityState_VisibilityState_1; // 0x69
        bool K2Node_Event_IsVisible_1; // 0x6a
        ESlateVisibility CallFunc_GetVisibilityState_VisibilityState_2; // 0x6b
        FVector2D K2Node_Event_Position; // 0x6c
        bool K2Node_Event_Overlapping; // 0x74
        bool K2Node_Event_FinisherActiveIn; // 0x75
        bool K2Node_Event_IsVisible; // 0x76
        EReticuleState K2Node_Event_state; // 0x77
        bool K2Node_GameLogicBoolResultEvent_CachedResult; // 0x78
        bool K2Node_GameLogicBoolResultEvent_CachedResult_1; // 0x79
        char pad_7a[0x6];
        ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue; // 0x80
        UGameLogicObject* CallFunc_Get_Game_Logic_Object_GameLogicObject; // 0x88
        UGameLogicObject* CallFunc_Get_Game_Logic_Object_GameLogicObject_1; // 0x90
        bool K2Node_GameLogicBoolResultEvent_CachedResult_2; // 0x98
        char pad_99[0x7];
        ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue_1; // 0xa0
        bool CallFunc_GetExpression_OnActor_ReturnValue; // 0xa8
        char pad_a9[0x3];
        FLinearColor K2Node_MakeStruct_LinearColor_3; // 0xac
        bool K2Node_GameLogicBoolResultEvent_CachedResult_3; // 0xbc
        char pad_bd[0x3];
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1; // 0xc0
        UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue_1; // 0xc8
    }; // Size: 0xd0
    Params_ExecuteUbergraph_UI_BP_Reticule params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_PlayAnimationReverse_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationReverse_ReturnValue;
    params.CallFunc_PlayAnimationForward_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue;
    params.CallFunc_PlayAnimation_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimation_ReturnValue;
    params.K2Node_MakeStruct_LinearColor = (FLinearColor)K2Node_MakeStruct_LinearColor;
    params.K2Node_MakeStruct_LinearColor_1 = (FLinearColor)K2Node_MakeStruct_LinearColor_1;
    params.K2Node_Event_Overlapping_1 = (bool)K2Node_Event_Overlapping_1;
    params.K2Node_MakeStruct_LinearColor_2 = (FLinearColor)K2Node_MakeStruct_LinearColor_2;
    params.K2Node_Event_InUseWeakSub = (bool)K2Node_Event_InUseWeakSub;
    params.K2Node_Event_IsVisible_4 = (bool)K2Node_Event_IsVisible_4;
    params.K2Node_Event_IsVisible_3 = (bool)K2Node_Event_IsVisible_3;
    params.CallFunc_GetVisibilityState_VisibilityState = (ESlateVisibility)CallFunc_GetVisibilityState_VisibilityState;
    params.K2Node_Event_Position_2 = (FVector2D)K2Node_Event_Position_2;
    params.K2Node_Event_Position_1 = (FVector2D)K2Node_Event_Position_1;
    params.K2Node_Event_IsVisible_2 = (bool)K2Node_Event_IsVisible_2;
    params.CallFunc_GetVisibilityState_VisibilityState_1 = (ESlateVisibility)CallFunc_GetVisibilityState_VisibilityState_1;
    params.K2Node_Event_IsVisible_1 = (bool)K2Node_Event_IsVisible_1;
    params.CallFunc_GetVisibilityState_VisibilityState_2 = (ESlateVisibility)CallFunc_GetVisibilityState_VisibilityState_2;
    params.K2Node_Event_Position = (FVector2D)K2Node_Event_Position;
    params.K2Node_Event_Overlapping = (bool)K2Node_Event_Overlapping;
    params.K2Node_Event_FinisherActiveIn = (bool)K2Node_Event_FinisherActiveIn;
    params.K2Node_Event_IsVisible = (bool)K2Node_Event_IsVisible;
    params.K2Node_Event_state = (EReticuleState)K2Node_Event_state;
    params.K2Node_GameLogicBoolResultEvent_CachedResult = (bool)K2Node_GameLogicBoolResultEvent_CachedResult;
    params.K2Node_GameLogicBoolResultEvent_CachedResult_1 = (bool)K2Node_GameLogicBoolResultEvent_CachedResult_1;
    params.CallFunc_GetTheBipedPlayer_ReturnValue = (ABiped_Player*)CallFunc_GetTheBipedPlayer_ReturnValue;
    params.CallFunc_Get_Game_Logic_Object_GameLogicObject = (UGameLogicObject*)CallFunc_Get_Game_Logic_Object_GameLogicObject;
    params.CallFunc_Get_Game_Logic_Object_GameLogicObject_1 = (UGameLogicObject*)CallFunc_Get_Game_Logic_Object_GameLogicObject_1;
    params.K2Node_GameLogicBoolResultEvent_CachedResult_2 = (bool)K2Node_GameLogicBoolResultEvent_CachedResult_2;
    params.CallFunc_GetTheBipedPlayer_ReturnValue_1 = (ABiped_Player*)CallFunc_GetTheBipedPlayer_ReturnValue_1;
    params.CallFunc_GetExpression_OnActor_ReturnValue = (bool)CallFunc_GetExpression_OnActor_ReturnValue;
    params.K2Node_MakeStruct_LinearColor_3 = (FLinearColor)K2Node_MakeStruct_LinearColor_3;
    params.K2Node_GameLogicBoolResultEvent_CachedResult_3 = (bool)K2Node_GameLogicBoolResultEvent_CachedResult_3;
    params.CallFunc_PlayAnimationForward_ReturnValue_1 = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue_1;
    params.CallFunc_PlayAnimationReverse_ReturnValue_1 = (UUMGSequencePlayer*)CallFunc_PlayAnimationReverse_ReturnValue_1;
    ProcessEvent(func, &params);
}
void UUI_BP_Reticule_C::HandleShowCombatReticule0(bool IsVisible) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Reticles/UI_BP_Reticule.UI_BP_Reticule_C.HandleShowCombatReticule"));
    struct Params_HandleShowCombatReticule {
        bool IsVisible; // 0x0
    }; // Size: 0x1
    Params_HandleShowCombatReticule params{};
    params.IsVisible = (bool)IsVisible;
    ProcessEvent(func, &params);
}
void UUI_BP_Reticule_C::HandleBestOverlapping0(bool Overlapping) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Reticles/UI_BP_Reticule.UI_BP_Reticule_C.HandleBestOverlapping"));
    struct Params_HandleBestOverlapping {
        bool Overlapping; // 0x0
    }; // Size: 0x1
    Params_HandleBestOverlapping params{};
    params.Overlapping = (bool)Overlapping;
    ProcessEvent(func, &params);
}
void UUI_BP_Reticule_C::HandleFinisherActiveChanged0(bool FinisherActiveIn) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Reticles/UI_BP_Reticule.UI_BP_Reticule_C.HandleFinisherActiveChanged"));
    struct Params_HandleFinisherActiveChanged {
        bool FinisherActiveIn; // 0x0
    }; // Size: 0x1
    Params_HandleFinisherActiveChanged params{};
    params.FinisherActiveIn = (bool)FinisherActiveIn;
    ProcessEvent(func, &params);
}
void UUI_BP_Reticule_C::HandleShowRing0(bool IsVisible) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Reticles/UI_BP_Reticule.UI_BP_Reticule_C.HandleShowRing"));
    struct Params_HandleShowRing {
        bool IsVisible; // 0x0
    }; // Size: 0x1
    Params_HandleShowRing params{};
    params.IsVisible = (bool)IsVisible;
    ProcessEvent(func, &params);
}
void UUI_BP_Reticule_C::HandleSetState0(EReticuleState State) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Reticles/UI_BP_Reticule.UI_BP_Reticule_C.HandleSetState"));
    struct Params_HandleSetState {
        EReticuleState State; // 0x0
    }; // Size: 0x1
    Params_HandleSetState params{};
    params.State = (EReticuleState)State;
    ProcessEvent(func, &params);
}
void UUI_BP_Reticule_C::Destruct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Reticles/UI_BP_Reticule.UI_BP_Reticule_C.Destruct"));
    struct Params_Destruct {
    }; // Size: 0x0
    Params_Destruct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Reticule_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Reticles/UI_BP_Reticule.UI_BP_Reticule_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
