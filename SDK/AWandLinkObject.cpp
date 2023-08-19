#include "AActor.hpp"
#include "AWandLinkObject.hpp"
#include "AWandLinkProjectile.hpp"
#include "EWandLinkResult.hpp"
#include "FGameplayTagContainer.hpp"
#include "FPerPlatformInt.hpp"
#include "FVector2D.hpp"
#include "FWandLinkStage.hpp"
#include "UActorProvider.hpp"
#include "UAkAudioEvent.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "UInteractionArchitectAsset.hpp"
#include "UMultiFX2_Base.hpp"
#include "UNiagaraComponent.hpp"
#include "UNiagaraSystem.hpp"
#include "UObject.hpp"
#include "UWandLinkKillBystander.hpp"
AWandLinkObject* AWandLinkObject::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.WandLinkObject");
    return (AWandLinkObject*)res;
}
void AWandLinkObject::WandLinkInputFail() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WandLinkObject.WandLinkInputFail"));
    struct Params_WandLinkInputFail {
    }; // Size: 0x0
    Params_WandLinkInputFail params{};
    ProcessEvent(func, &params);
}
void AWandLinkObject::WandLinkEnded() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WandLinkObject.WandLinkEnded"));
    struct Params_WandLinkEnded {
    }; // Size: 0x0
    Params_WandLinkEnded params{};
    ProcessEvent(func, &params);
}
EWandLinkResult AWandLinkObject::GetLethal() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WandLinkObject.GetLethal"));
    struct Params_GetLethal {
        EWandLinkResult ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetLethal params{};
    ProcessEvent(func, &params);
    return (EWandLinkResult)params.ReturnValue;
}
void AWandLinkObject::WandLinkStarted() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WandLinkObject.WandLinkStarted"));
    struct Params_WandLinkStarted {
    }; // Size: 0x0
    Params_WandLinkStarted params{};
    ProcessEvent(func, &params);
}
void AWandLinkObject::WandLinkInputSuccess() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WandLinkObject.WandLinkInputSuccess"));
    struct Params_WandLinkInputSuccess {
    }; // Size: 0x0
    Params_WandLinkInputSuccess params{};
    ProcessEvent(func, &params);
}
void AWandLinkObject::WandLinkInitialized() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WandLinkObject.WandLinkInitialized"));
    struct Params_WandLinkInitialized {
    }; // Size: 0x0
    Params_WandLinkInitialized params{};
    ProcessEvent(func, &params);
}
bool AWandLinkObject::GetUIHidden() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WandLinkObject.GetUIHidden"));
    struct Params_GetUIHidden {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetUIHidden params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
AActor* AWandLinkObject::GetProtagonist() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WandLinkObject.GetProtagonist"));
    struct Params_GetProtagonist {
        AActor* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetProtagonist params{};
    ProcessEvent(func, &params);
    return (AActor*)params.ReturnValue;
}
int32_t AWandLinkObject::GetCurrentStage() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WandLinkObject.GetCurrentStage"));
    struct Params_GetCurrentStage {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetCurrentStage params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void AWandLinkObject::Event_WandLinkDefend(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WandLinkObject.Event_WandLinkDefend"));
    struct Params_Event_WandLinkDefend {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_Event_WandLinkDefend params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
float AWandLinkObject::GetCurrentRatio() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WandLinkObject.GetCurrentRatio"));
    struct Params_GetCurrentRatio {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetCurrentRatio params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
AActor* AWandLinkObject::GetAntagonist() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WandLinkObject.GetAntagonist"));
    struct Params_GetAntagonist {
        AActor* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetAntagonist params{};
    ProcessEvent(func, &params);
    return (AActor*)params.ReturnValue;
}
void AWandLinkObject::Event_WandLinkSuspend(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WandLinkObject.Event_WandLinkSuspend"));
    struct Params_Event_WandLinkSuspend {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_Event_WandLinkSuspend params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void AWandLinkObject::Event_WandLinkSuccessFX(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WandLinkObject.Event_WandLinkSuccessFX"));
    struct Params_Event_WandLinkSuccessFX {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_Event_WandLinkSuccessFX params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void AWandLinkObject::Event_WandLinkStop(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WandLinkObject.Event_WandLinkStop"));
    struct Params_Event_WandLinkStop {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_Event_WandLinkStop params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void AWandLinkObject::Event_TeleportLocation1(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WandLinkObject.Event_TeleportLocation1"));
    struct Params_Event_TeleportLocation1 {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_Event_TeleportLocation1 params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void AWandLinkObject::Event_WandLinkStart(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WandLinkObject.Event_WandLinkStart"));
    struct Params_Event_WandLinkStart {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_Event_WandLinkStart params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void AWandLinkObject::Event_WandLinkForward(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WandLinkObject.Event_WandLinkForward"));
    struct Params_Event_WandLinkForward {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_Event_WandLinkForward params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void AWandLinkObject::Event_WandLinkKillBystanders(UObject* Caller, float KillPct) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WandLinkObject.Event_WandLinkKillBystanders"));
    struct Params_Event_WandLinkKillBystanders {
        UObject* Caller; // 0x0
        float KillPct; // 0x8
    }; // Size: 0xc
    Params_Event_WandLinkKillBystanders params{};
    params.Caller = (UObject*)Caller;
    params.KillPct = (float)KillPct;
    ProcessEvent(func, &params);
}
void AWandLinkObject::Event_WandLinkInitialize(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WandLinkObject.Event_WandLinkInitialize"));
    struct Params_Event_WandLinkInitialize {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_Event_WandLinkInitialize params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void AWandLinkObject::Event_WandLinkAdvanceStage(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WandLinkObject.Event_WandLinkAdvanceStage"));
    struct Params_Event_WandLinkAdvanceStage {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_Event_WandLinkAdvanceStage params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void AWandLinkObject::Event_WandLinkGameOver(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WandLinkObject.Event_WandLinkGameOver"));
    struct Params_Event_WandLinkGameOver {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_Event_WandLinkGameOver params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void AWandLinkObject::Event_WandLinkFailFX(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WandLinkObject.Event_WandLinkFailFX"));
    struct Params_Event_WandLinkFailFX {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_Event_WandLinkFailFX params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void AWandLinkObject::Event_WandLinkBackward(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WandLinkObject.Event_WandLinkBackward"));
    struct Params_Event_WandLinkBackward {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_Event_WandLinkBackward params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void AWandLinkObject::Event_TeleportLocation2(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WandLinkObject.Event_TeleportLocation2"));
    struct Params_Event_TeleportLocation2 {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_Event_TeleportLocation2 params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
