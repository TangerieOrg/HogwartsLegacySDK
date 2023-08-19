#include "ARace.hpp"
#include "EInputEvent.hpp"
#include "EUMGInputAction.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UBroomChallengeScreen.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UUI_BP_BroomChallengeAccept_C.hpp"
#include "UUI_BP_BroomPosition_C.hpp"
#include "UUI_BP_FG_DetailsPanelBack_C.hpp"
#include "UUI_BP_Legend_Horizontal_Screen_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UWidgetAnimation.hpp"
UUI_BP_BroomChallengeAccept_C* UUI_BP_BroomChallengeAccept_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Broom/UI_BP_BroomChallengeAccept.UI_BP_BroomChallengeAccept_C");
    return (UUI_BP_BroomChallengeAccept_C*)res;
}
void UUI_BP_BroomChallengeAccept_C::OnRaceCountdownBegin(UObject* Caller, int32_t int) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Broom/UI_BP_BroomChallengeAccept.UI_BP_BroomChallengeAccept_C.OnRaceCountdownBegin"));
    struct Params_OnRaceCountdownBegin {
        UObject* Caller; // 0x0
        int32_t int; // 0x8
    }; // Size: 0xc
    Params_OnRaceCountdownBegin params{};
    params.Caller = (UObject*)Caller;
    params.int = (int32_t)int;
    ProcessEvent(func, &params);
}
void UUI_BP_BroomChallengeAccept_C::SequenceEvent__ENTRYPOINTUI_BP_BroomChallengeAccept_0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Broom/UI_BP_BroomChallengeAccept.UI_BP_BroomChallengeAccept_C.SequenceEvent__ENTRYPOINTUI_BP_BroomChallengeAccept_0"));
    struct Params_SequenceEvent__ENTRYPOINTUI_BP_BroomChallengeAccept_0 {
    }; // Size: 0x0
    Params_SequenceEvent__ENTRYPOINTUI_BP_BroomChallengeAccept_0 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_BroomChallengeAccept_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Broom/UI_BP_BroomChallengeAccept.UI_BP_BroomChallengeAccept_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
bool UUI_BP_BroomChallengeAccept_C::BlueprintOnUMGInputAction(EUMGInputAction InputAction, EInputEvent InputEvent, int32_t CallFunc_PostEventAtLocation_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Broom/UI_BP_BroomChallengeAccept.UI_BP_BroomChallengeAccept_C.BlueprintOnUMGInputAction"));
    struct Params_BlueprintOnUMGInputAction {
        EUMGInputAction InputAction; // 0x0
        EInputEvent InputEvent; // 0x1
        bool ReturnValue; // 0x2
        char pad_3[0x1];
        int32_t CallFunc_PostEventAtLocation_ReturnValue; // 0x4
        int32_t CallFunc_PostEventAtLocation_ReturnValue_1; // 0x8
        char pad_c[0x4];
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue; // 0x10
        bool CallFunc_EqualEqual_ByteByte_ReturnValue; // 0x18
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_1; // 0x19
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_2; // 0x1a
    }; // Size: 0x1b
    Params_BlueprintOnUMGInputAction params{};
    params.InputAction = (EUMGInputAction)InputAction;
    params.InputEvent = (EInputEvent)InputEvent;
    params.CallFunc_PostEventAtLocation_ReturnValue = (int32_t)CallFunc_PostEventAtLocation_ReturnValue;
    params.CallFunc_PostEventAtLocation_ReturnValue_1 = (int32_t)CallFunc_PostEventAtLocation_ReturnValue_1;
    params.CallFunc_PlayAnimationForward_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_1;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_2;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UUI_BP_BroomChallengeAccept_C::OnOutroAnimationComplete() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Broom/UI_BP_BroomChallengeAccept.UI_BP_BroomChallengeAccept_C.OnOutroAnimationComplete"));
    struct Params_OnOutroAnimationComplete {
    }; // Size: 0x0
    Params_OnOutroAnimationComplete params{};
    ProcessEvent(func, &params);
}
void UUI_BP_BroomChallengeAccept_C::ExecuteUbergraph_UI_BP_BroomChallengeAccept(int32_t EntryPoint) {}
