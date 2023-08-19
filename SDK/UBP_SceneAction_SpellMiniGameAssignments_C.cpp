#include "FPointerToUberGraphFrame.hpp"
#include "UBP_SceneAction_SpellMiniGameAssignments_C.hpp"
#include "UFunction.hpp"
#include "UNameProvider.hpp"
#include "UObject.hpp"
#include "USceneAction_Blueprint.hpp"
#include "UScreen.hpp"
UBP_SceneAction_SpellMiniGameAssignments_C* UBP_SceneAction_SpellMiniGameAssignments_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Cinematics/SceneActions/Minigames/BP_SceneAction_SpellMiniGameAssignments.BP_SceneAction_SpellMiniGameAssignments_C");
    return (UBP_SceneAction_SpellMiniGameAssignments_C*)res;
}
void UBP_SceneAction_SpellMiniGameAssignments_C::OnEnterInterval0(float Time, bool IsScrubbing) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Cinematics/SceneActions/Minigames/BP_SceneAction_SpellMiniGameAssignments.BP_SceneAction_SpellMiniGameAssignments_C.OnEnterInterval"));
    struct Params_OnEnterInterval {
        float Time; // 0x0
        bool IsScrubbing; // 0x4
    }; // Size: 0x5
    Params_OnEnterInterval params{};
    params.Time = (float)Time;
    params.IsScrubbing = (bool)IsScrubbing;
    ProcessEvent(func, &params);
}
void UBP_SceneAction_SpellMiniGameAssignments_C::ExecuteUbergraph_BP_SceneAction_SpellMiniGameAssignments(int32_t EntryPoint) {}
void UBP_SceneAction_SpellMiniGameAssignments_C::OnMiniGameLoaded(UScreen* LoadedScreen) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Cinematics/SceneActions/Minigames/BP_SceneAction_SpellMiniGameAssignments.BP_SceneAction_SpellMiniGameAssignments_C.OnMiniGameLoaded"));
    struct Params_OnMiniGameLoaded {
        UScreen* LoadedScreen; // 0x0
    }; // Size: 0x8
    Params_OnMiniGameLoaded params{};
    params.LoadedScreen = (UScreen*)LoadedScreen;
    ProcessEvent(func, &params);
}
void UBP_SceneAction_SpellMiniGameAssignments_C::SpellComplete(UObject* Caller, int32_t int) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Cinematics/SceneActions/Minigames/BP_SceneAction_SpellMiniGameAssignments.BP_SceneAction_SpellMiniGameAssignments_C.SpellComplete"));
    struct Params_SpellComplete {
        UObject* Caller; // 0x0
        int32_t int; // 0x8
    }; // Size: 0xc
    Params_SpellComplete params{};
    params.Caller = (UObject*)Caller;
    params.int = (int32_t)int;
    ProcessEvent(func, &params);
}
