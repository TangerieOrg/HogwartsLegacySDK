#include "AHUD.hpp"
#include "ALevelScriptActor.hpp"
#include "APhoenixHUD.hpp"
#include "APlayerController.hpp"
#include "ARootLevel_C.hpp"
#include "EEndPlayReason\Type.hpp"
#include "FHermesBPDelegateHandle.hpp"
#include "FLinearColor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UFadeOutAsyncAction.hpp"
#include "UFunction.hpp"
#include "ULevelStreamingDynamic.hpp"
#include "UObject.hpp"
#include "UPopupScreen.hpp"
#include "UUI_BP_FirstTimeFlow_C.hpp"
void ARootLevel_C::ReceiveEndPlay(EEndPlayReason::Type EndPlayReason) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/RootLevel.RootLevel_C.ReceiveEndPlay"));
    struct Params_ReceiveEndPlay {
        EEndPlayReason::Type EndPlayReason; // 0x0
    }; // Size: 0x1
    Params_ReceiveEndPlay params{};
    params.EndPlayReason = (EEndPlayReason::Type)EndPlayReason;
    ProcessEvent(func, &params);
}
void ARootLevel_C::CurtainRaised_0AB342D049A49891F07D05A20BF48471() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/RootLevel.RootLevel_C.CurtainRaised_0AB342D049A49891F07D05A20BF48471"));
    struct Params_CurtainRaised_0AB342D049A49891F07D05A20BF48471 {
    }; // Size: 0x0
    Params_CurtainRaised_0AB342D049A49891F07D05A20BF48471 params{};
    ProcessEvent(func, &params);
}
void ARootLevel_C::ShowLondonLevel() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/RootLevel.RootLevel_C.ShowLondonLevel"));
    struct Params_ShowLondonLevel {
    }; // Size: 0x0
    Params_ShowLondonLevel params{};
    ProcessEvent(func, &params);
}
ARootLevel_C* ARootLevel_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Levels/RootLevel.RootLevel_C");
    return (ARootLevel_C*)res;
}
void ARootLevel_C::LoadGlobalSky(bool bShow, bool CallFunc_LoadLevelInstanceBySoftObjectPtr_bOutSuccess, ULevelStreamingDynamic* CallFunc_LoadLevelInstanceBySoftObjectPtr_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/RootLevel.RootLevel_C.LoadGlobalSky"));
    struct Params_LoadGlobalSky {
        bool bShow; // 0x0
        bool CallFunc_LoadLevelInstanceBySoftObjectPtr_bOutSuccess; // 0x1
        char pad_2[0x6];
        ULevelStreamingDynamic* CallFunc_LoadLevelInstanceBySoftObjectPtr_ReturnValue; // 0x8
    }; // Size: 0x10
    Params_LoadGlobalSky params{};
    params.bShow = (bool)bShow;
    params.CallFunc_LoadLevelInstanceBySoftObjectPtr_bOutSuccess = (bool)CallFunc_LoadLevelInstanceBySoftObjectPtr_bOutSuccess;
    params.CallFunc_LoadLevelInstanceBySoftObjectPtr_ReturnValue = (ULevelStreamingDynamic*)CallFunc_LoadLevelInstanceBySoftObjectPtr_ReturnValue;
    ProcessEvent(func, &params);
}
void ARootLevel_C::PrintString(FString String, FLinearColor Color, int64_t CallFunc_GetFrameCount_ReturnValue) {}
void ARootLevel_C::ShowGlobalSky() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/RootLevel.RootLevel_C.ShowGlobalSky"));
    struct Params_ShowGlobalSky {
    }; // Size: 0x0
    Params_ShowGlobalSky params{};
    ProcessEvent(func, &params);
}
void ARootLevel_C::OnFrontendHidden() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/RootLevel.RootLevel_C.OnFrontendHidden"));
    struct Params_OnFrontendHidden {
    }; // Size: 0x0
    Params_OnFrontendHidden params{};
    ProcessEvent(func, &params);
}
void ARootLevel_C::UnloadLondonLevel(bool CallFunc_IsValid_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/RootLevel.RootLevel_C.UnloadLondonLevel"));
    struct Params_UnloadLondonLevel {
        bool CallFunc_IsValid_ReturnValue; // 0x0
    }; // Size: 0x1
    Params_UnloadLondonLevel params{};
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    ProcessEvent(func, &params);
}
void ARootLevel_C::CurtainRaised_221FAF4A49C5DE0CDD169185CB092566() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/RootLevel.RootLevel_C.CurtainRaised_221FAF4A49C5DE0CDD169185CB092566"));
    struct Params_CurtainRaised_221FAF4A49C5DE0CDD169185CB092566 {
    }; // Size: 0x0
    Params_CurtainRaised_221FAF4A49C5DE0CDD169185CB092566 params{};
    ProcessEvent(func, &params);
}
void ARootLevel_C::LoadLondonLevel() {}
void ARootLevel_C::UnloadGlobalSky() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/RootLevel.RootLevel_C.UnloadGlobalSky"));
    struct Params_UnloadGlobalSky {
    }; // Size: 0x0
    Params_UnloadGlobalSky params{};
    ProcessEvent(func, &params);
}
void ARootLevel_C::CancelAvatarCreator(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/RootLevel.RootLevel_C.CancelAvatarCreator"));
    struct Params_CancelAvatarCreator {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_CancelAvatarCreator params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void ARootLevel_C::OnIntroRootLoaded() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/RootLevel.RootLevel_C.OnIntroRootLoaded"));
    struct Params_OnIntroRootLoaded {
    }; // Size: 0x0
    Params_OnIntroRootLoaded params{};
    ProcessEvent(func, &params);
}
void ARootLevel_C::ShowAvatarCreatorLevel(int32_t CallFunc_AddStateToStack_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/RootLevel.RootLevel_C.ShowAvatarCreatorLevel"));
    struct Params_ShowAvatarCreatorLevel {
        int32_t CallFunc_AddStateToStack_ReturnValue; // 0x0
    }; // Size: 0x4
    Params_ShowAvatarCreatorLevel params{};
    params.CallFunc_AddStateToStack_ReturnValue = (int32_t)CallFunc_AddStateToStack_ReturnValue;
    ProcessEvent(func, &params);
}
void ARootLevel_C::UnloadAvatarCreatorLevel(bool CallFunc_IsValid_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/RootLevel.RootLevel_C.UnloadAvatarCreatorLevel"));
    struct Params_UnloadAvatarCreatorLevel {
        bool CallFunc_IsValid_ReturnValue; // 0x0
    }; // Size: 0x1
    Params_UnloadAvatarCreatorLevel params{};
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    ProcessEvent(func, &params);
}
void ARootLevel_C::LoadAvatarCreatorLevel(bool bShow) {}
void ARootLevel_C::CurtainRaised_E8EC53644D53D2AAF6BC15BCA37C5F16() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/RootLevel.RootLevel_C.CurtainRaised_E8EC53644D53D2AAF6BC15BCA37C5F16"));
    struct Params_CurtainRaised_E8EC53644D53D2AAF6BC15BCA37C5F16 {
    }; // Size: 0x0
    Params_CurtainRaised_E8EC53644D53D2AAF6BC15BCA37C5F16 params{};
    ProcessEvent(func, &params);
}
void ARootLevel_C::UnloadFrontEnd(bool CallFunc_IsValid_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/RootLevel.RootLevel_C.UnloadFrontEnd"));
    struct Params_UnloadFrontEnd {
        bool CallFunc_IsValid_ReturnValue; // 0x0
    }; // Size: 0x1
    Params_UnloadFrontEnd params{};
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    ProcessEvent(func, &params);
}
void ARootLevel_C::LoadFrontend(bool CallFunc_IsValid_ReturnValue, bool CallFunc_LoadLevelInstanceBySoftObjectPtr_bOutSuccess, ULevelStreamingDynamic* CallFunc_LoadLevelInstanceBySoftObjectPtr_ReturnValue) {}
bool ARootLevel_C::IsLoadGame(FString Temp_string_Variable, FString Temp_string_Variable_1, TArray<FString>& CallFunc_GetWorldOptions_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Array_Contains_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/RootLevel.RootLevel_C.IsLoadGame"));
    struct Params_IsLoadGame {
        bool ReturnValue; // 0x0
        char pad_1[0x7];
        FString Temp_string_Variable; // 0x8
        FString Temp_string_Variable_1; // 0x18
        TArray<FString> CallFunc_GetWorldOptions_ReturnValue; // 0x28
        bool CallFunc_Array_Contains_ReturnValue; // 0x38
        bool CallFunc_Array_Contains_ReturnValue_1; // 0x39
        bool CallFunc_BooleanOR_ReturnValue; // 0x3a
    }; // Size: 0x3b
    Params_IsLoadGame params{};
    params.Temp_string_Variable = (FString)Temp_string_Variable;
    params.Temp_string_Variable_1 = (FString)Temp_string_Variable_1;
    params.CallFunc_GetWorldOptions_ReturnValue = (TArray<FString>)CallFunc_GetWorldOptions_ReturnValue;
    params.CallFunc_Array_Contains_ReturnValue = (bool)CallFunc_Array_Contains_ReturnValue;
    params.CallFunc_Array_Contains_ReturnValue_1 = (bool)CallFunc_Array_Contains_ReturnValue_1;
    params.CallFunc_BooleanOR_ReturnValue = (bool)CallFunc_BooleanOR_ReturnValue;
    ProcessEvent(func, &params);
    CallFunc_GetWorldOptions_ReturnValue = params.CallFunc_GetWorldOptions_ReturnValue;
    return (bool)params.ReturnValue;
}
void ARootLevel_C::PlayPortkeyLanding(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/RootLevel.RootLevel_C.PlayPortkeyLanding"));
    struct Params_PlayPortkeyLanding {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_PlayPortkeyLanding params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void ARootLevel_C::ShowPlayer(bool bShow) {}
void ARootLevel_C::CurtainRaised_B0AA608842C141D688E142948D6B420A() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/RootLevel.RootLevel_C.CurtainRaised_B0AA608842C141D688E142948D6B420A"));
    struct Params_CurtainRaised_B0AA608842C141D688E142948D6B420A {
    }; // Size: 0x0
    Params_CurtainRaised_B0AA608842C141D688E142948D6B420A params{};
    ProcessEvent(func, &params);
}
void ARootLevel_C::SetHUDVisibility(bool bVisible, bool RemovingState, APlayerController* CallFunc_GetPlayerController_ReturnValue, AHUD* CallFunc_GetHUD_ReturnValue, bool CallFunc_IsValid_ReturnValue, APhoenixHUD* K2Node_DynamicCast_AsPhoenix_HUD, bool K2Node_DynamicCast_bSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/RootLevel.RootLevel_C.SetHUDVisibility"));
    struct Params_SetHUDVisibility {
        bool bVisible; // 0x0
        bool RemovingState; // 0x1
        char pad_2[0x6];
        APlayerController* CallFunc_GetPlayerController_ReturnValue; // 0x8
        AHUD* CallFunc_GetHUD_ReturnValue; // 0x10
        bool CallFunc_IsValid_ReturnValue; // 0x18
        char pad_19[0x7];
        APhoenixHUD* K2Node_DynamicCast_AsPhoenix_HUD; // 0x20
        bool K2Node_DynamicCast_bSuccess; // 0x28
    }; // Size: 0x29
    Params_SetHUDVisibility params{};
    params.bVisible = (bool)bVisible;
    params.RemovingState = (bool)RemovingState;
    params.CallFunc_GetPlayerController_ReturnValue = (APlayerController*)CallFunc_GetPlayerController_ReturnValue;
    params.CallFunc_GetHUD_ReturnValue = (AHUD*)CallFunc_GetHUD_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.K2Node_DynamicCast_AsPhoenix_HUD = (APhoenixHUD*)K2Node_DynamicCast_AsPhoenix_HUD;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    ProcessEvent(func, &params);
}
void ARootLevel_C::AreAllSublevelsVisible(TArray<ULevelStreamingDynamic*>& Array, bool& bAllLoaded, int32_t CallFunc_Array_Length_ReturnValue, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, ULevelStreamingDynamic* CallFunc_Array_Get_Item, bool CallFunc_IsLevelVisible_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/RootLevel.RootLevel_C.AreAllSublevelsVisible"));
    struct Params_AreAllSublevelsVisible {
        TArray<ULevelStreamingDynamic*> Array; // 0x0
        bool bAllLoaded; // 0x10
        char pad_11[0x3];
        int32_t CallFunc_Array_Length_ReturnValue; // 0x14
        int32_t Temp_int_Array_Index_Variable; // 0x18
        int32_t Temp_int_Loop_Counter_Variable; // 0x1c
        ULevelStreamingDynamic* CallFunc_Array_Get_Item; // 0x20
        bool CallFunc_IsLevelVisible_ReturnValue; // 0x28
        bool CallFunc_Less_IntInt_ReturnValue; // 0x29
        char pad_2a[0x2];
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x2c
    }; // Size: 0x30
    Params_AreAllSublevelsVisible params{};
    params.Array = (TArray<ULevelStreamingDynamic*>)Array;
    params.bAllLoaded = (bool)bAllLoaded;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Array_Get_Item = (ULevelStreamingDynamic*)CallFunc_Array_Get_Item;
    params.CallFunc_IsLevelVisible_ReturnValue = (bool)CallFunc_IsLevelVisible_ReturnValue;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    ProcessEvent(func, &params);
    Array = params.Array;
    bAllLoaded = params.bAllLoaded;
}
void ARootLevel_C::AreAllSublevelsLoaded(TArray<ULevelStreamingDynamic*>& Array, bool& bAllLoaded, int32_t CallFunc_Array_Length_ReturnValue, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, ULevelStreamingDynamic* CallFunc_Array_Get_Item, bool CallFunc_IsLevelLoaded_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/RootLevel.RootLevel_C.AreAllSublevelsLoaded"));
    struct Params_AreAllSublevelsLoaded {
        TArray<ULevelStreamingDynamic*> Array; // 0x0
        bool bAllLoaded; // 0x10
        char pad_11[0x3];
        int32_t CallFunc_Array_Length_ReturnValue; // 0x14
        int32_t Temp_int_Array_Index_Variable; // 0x18
        int32_t Temp_int_Loop_Counter_Variable; // 0x1c
        ULevelStreamingDynamic* CallFunc_Array_Get_Item; // 0x20
        bool CallFunc_IsLevelLoaded_ReturnValue; // 0x28
        bool CallFunc_Less_IntInt_ReturnValue; // 0x29
        char pad_2a[0x2];
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x2c
    }; // Size: 0x30
    Params_AreAllSublevelsLoaded params{};
    params.Array = (TArray<ULevelStreamingDynamic*>)Array;
    params.bAllLoaded = (bool)bAllLoaded;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Array_Get_Item = (ULevelStreamingDynamic*)CallFunc_Array_Get_Item;
    params.CallFunc_IsLevelLoaded_ReturnValue = (bool)CallFunc_IsLevelLoaded_ReturnValue;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    ProcessEvent(func, &params);
    Array = params.Array;
    bAllLoaded = params.bAllLoaded;
}
void ARootLevel_C::CurtainRaised_308763E043A510A6360585929689F005() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/RootLevel.RootLevel_C.CurtainRaised_308763E043A510A6360585929689F005"));
    struct Params_CurtainRaised_308763E043A510A6360585929689F005 {
    }; // Size: 0x0
    Params_CurtainRaised_308763E043A510A6360585929689F005 params{};
    ProcessEvent(func, &params);
}
void ARootLevel_C::LoadIntroRoot() {}
void ARootLevel_C::CurtainRaised_719B12A84487D57F5F2C03BDBFDB81B0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/RootLevel.RootLevel_C.CurtainRaised_719B12A84487D57F5F2C03BDBFDB81B0"));
    struct Params_CurtainRaised_719B12A84487D57F5F2C03BDBFDB81B0 {
    }; // Size: 0x0
    Params_CurtainRaised_719B12A84487D57F5F2C03BDBFDB81B0 params{};
    ProcessEvent(func, &params);
}
void ARootLevel_C::Complete_2AA0D30B40366D78C9EF3CA710BE16FC() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/RootLevel.RootLevel_C.Complete_2AA0D30B40366D78C9EF3CA710BE16FC"));
    struct Params_Complete_2AA0D30B40366D78C9EF3CA710BE16FC {
    }; // Size: 0x0
    Params_Complete_2AA0D30B40366D78C9EF3CA710BE16FC params{};
    ProcessEvent(func, &params);
}
void ARootLevel_C::CurtainRaised_8E9B3FCE44434535ED1F4898D20AE4A3() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/RootLevel.RootLevel_C.CurtainRaised_8E9B3FCE44434535ED1F4898D20AE4A3"));
    struct Params_CurtainRaised_8E9B3FCE44434535ED1F4898D20AE4A3 {
    }; // Size: 0x0
    Params_CurtainRaised_8E9B3FCE44434535ED1F4898D20AE4A3 params{};
    ProcessEvent(func, &params);
}
void ARootLevel_C::Complete_18ACD14D4D2AE081A6E8B095185A9E32() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/RootLevel.RootLevel_C.Complete_18ACD14D4D2AE081A6E8B095185A9E32"));
    struct Params_Complete_18ACD14D4D2AE081A6E8B095185A9E32 {
    }; // Size: 0x0
    Params_Complete_18ACD14D4D2AE081A6E8B095185A9E32 params{};
    ProcessEvent(func, &params);
}
void ARootLevel_C::CurtainRaised_FA8189904516377DEADA4289AAFE6B4A() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/RootLevel.RootLevel_C.CurtainRaised_FA8189904516377DEADA4289AAFE6B4A"));
    struct Params_CurtainRaised_FA8189904516377DEADA4289AAFE6B4A {
    }; // Size: 0x0
    Params_CurtainRaised_FA8189904516377DEADA4289AAFE6B4A params{};
    ProcessEvent(func, &params);
}
void ARootLevel_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/RootLevel.RootLevel_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ARootLevel_C::OnFrontEndLoaded() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/RootLevel.RootLevel_C.OnFrontEndLoaded"));
    struct Params_OnFrontEndLoaded {
    }; // Size: 0x0
    Params_OnFrontEndLoaded params{};
    ProcessEvent(func, &params);
}
void ARootLevel_C::AvatarFinalized(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/RootLevel.RootLevel_C.AvatarFinalized"));
    struct Params_AvatarFinalized {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_AvatarFinalized params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void ARootLevel_C::OnFirstTimeFlowWidgetComplete() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/RootLevel.RootLevel_C.OnFirstTimeFlowWidgetComplete"));
    struct Params_OnFirstTimeFlowWidgetComplete {
    }; // Size: 0x0
    Params_OnFirstTimeFlowWidgetComplete params{};
    ProcessEvent(func, &params);
}
void ARootLevel_C::OnAvCreatorLevelLoaded() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/RootLevel.RootLevel_C.OnAvCreatorLevelLoaded"));
    struct Params_OnAvCreatorLevelLoaded {
    }; // Size: 0x0
    Params_OnAvCreatorLevelLoaded params{};
    ProcessEvent(func, &params);
}
void ARootLevel_C::OnAvCreatorLevelShown() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/RootLevel.RootLevel_C.OnAvCreatorLevelShown"));
    struct Params_OnAvCreatorLevelShown {
    }; // Size: 0x0
    Params_OnAvCreatorLevelShown params{};
    ProcessEvent(func, &params);
}
void ARootLevel_C::CarriageRideComplete(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/RootLevel.RootLevel_C.CarriageRideComplete"));
    struct Params_CarriageRideComplete {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_CarriageRideComplete params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void ARootLevel_C::PopupClosedEvent_Event_0(UPopupScreen* PopupScreen, int32_t CompletionActionIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/RootLevel.RootLevel_C.PopupClosedEvent_Event_0"));
    struct Params_PopupClosedEvent_Event_0 {
        UPopupScreen* PopupScreen; // 0x0
        int32_t CompletionActionIndex; // 0x8
    }; // Size: 0xc
    Params_PopupClosedEvent_Event_0 params{};
    params.PopupScreen = (UPopupScreen*)PopupScreen;
    params.CompletionActionIndex = (int32_t)CompletionActionIndex;
    ProcessEvent(func, &params);
}
void ARootLevel_C::OnIntroRootShown() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/RootLevel.RootLevel_C.OnIntroRootShown"));
    struct Params_OnIntroRootShown {
    }; // Size: 0x0
    Params_OnIntroRootShown params{};
    ProcessEvent(func, &params);
}
void ARootLevel_C::OnFrontEndShown() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/RootLevel.RootLevel_C.OnFrontEndShown"));
    struct Params_OnFrontEndShown {
    }; // Size: 0x0
    Params_OnFrontEndShown params{};
    ProcessEvent(func, &params);
}
void ARootLevel_C::GringottsCP2Ready(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/RootLevel.RootLevel_C.GringottsCP2Ready"));
    struct Params_GringottsCP2Ready {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_GringottsCP2Ready params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void ARootLevel_C::VoidCP3Ready(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/RootLevel.RootLevel_C.VoidCP3Ready"));
    struct Params_VoidCP3Ready {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_VoidCP3Ready params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void ARootLevel_C::VoidCP4Ready(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/RootLevel.RootLevel_C.VoidCP4Ready"));
    struct Params_VoidCP4Ready {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_VoidCP4Ready params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void ARootLevel_C::OnLondonLevelLoaded() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/RootLevel.RootLevel_C.OnLondonLevelLoaded"));
    struct Params_OnLondonLevelLoaded {
    }; // Size: 0x0
    Params_OnLondonLevelLoaded params{};
    ProcessEvent(func, &params);
}
void ARootLevel_C::OnLondonLevelShown() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/RootLevel.RootLevel_C.OnLondonLevelShown"));
    struct Params_OnLondonLevelShown {
    }; // Size: 0x0
    Params_OnLondonLevelShown params{};
    ProcessEvent(func, &params);
}
void ARootLevel_C::TransitionToAvatarCreator(bool bCanBackOut) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/RootLevel.RootLevel_C.TransitionToAvatarCreator"));
    struct Params_TransitionToAvatarCreator {
        bool bCanBackOut; // 0x0
    }; // Size: 0x1
    Params_TransitionToAvatarCreator params{};
    params.bCanBackOut = (bool)bCanBackOut;
    ProcessEvent(func, &params);
}
void ARootLevel_C::NewCharacterClicked(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/RootLevel.RootLevel_C.NewCharacterClicked"));
    struct Params_NewCharacterClicked {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_NewCharacterClicked params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void ARootLevel_C::VoidCP5Ready(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/RootLevel.RootLevel_C.VoidCP5Ready"));
    struct Params_VoidCP5Ready {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_VoidCP5Ready params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void ARootLevel_C::GoToLondon(bool bFromLoad) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/RootLevel.RootLevel_C.GoToLondon"));
    struct Params_GoToLondon {
        bool bFromLoad; // 0x0
    }; // Size: 0x1
    Params_GoToLondon params{};
    params.bFromLoad = (bool)bFromLoad;
    ProcessEvent(func, &params);
}
void ARootLevel_C::ExecuteUbergraph_RootLevel(int32_t EntryPoint, UUI_BP_FirstTimeFlow_C* CallFunc_Create_ReturnValue, UFadeOutAsyncAction* CallFunc_FadeOut_ReturnValue) {}
void ARootLevel_C::OnAllCrossGenSaveData_transferred(bool bResult) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/RootLevel.RootLevel_C.OnAllCrossGenSaveData transferred"));
    struct Params_OnAllCrossGenSaveData_transferred {
        bool bResult; // 0x0
    }; // Size: 0x1
    Params_OnAllCrossGenSaveData_transferred params{};
    params.bResult = (bool)bResult;
    ProcessEvent(func, &params);
}
void ARootLevel_C::VoidCP6Ready(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/RootLevel.RootLevel_C.VoidCP6Ready"));
    struct Params_VoidCP6Ready {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_VoidCP6Ready params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
