#include "ABP_Sanc_FreeStandingClock_Parent_C.hpp"
#include "AFreeStandingClock.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FTransform.hpp"
#include "UAkComponent.hpp"
#include "UFunction.hpp"
void ABP_Sanc_FreeStandingClock_Parent_C::SecondTick() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Sanctuary/Blueprints/Props/BP_Sanc_FreeStandingClock_Parent.BP_Sanc_FreeStandingClock_Parent_C.SecondTick"));
    struct Params_SecondTick {
    }; // Size: 0x0
    Params_SecondTick params{};
    ProcessEvent(func, &params);
}
ABP_Sanc_FreeStandingClock_Parent_C* ABP_Sanc_FreeStandingClock_Parent_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Sanctuary/Blueprints/Props/BP_Sanc_FreeStandingClock_Parent.BP_Sanc_FreeStandingClock_Parent_C");
    return (ABP_Sanc_FreeStandingClock_Parent_C*)res;
}
void ABP_Sanc_FreeStandingClock_Parent_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Sanctuary/Blueprints/Props/BP_Sanc_FreeStandingClock_Parent.BP_Sanc_FreeStandingClock_Parent_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_Sanc_FreeStandingClock_Parent_C::ObjectConjured() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Sanctuary/Blueprints/Props/BP_Sanc_FreeStandingClock_Parent.BP_Sanc_FreeStandingClock_Parent_C.ObjectConjured"));
    struct Params_ObjectConjured {
    }; // Size: 0x0
    Params_ObjectConjured params{};
    ProcessEvent(func, &params);
}
void ABP_Sanc_FreeStandingClock_Parent_C::ObjectTransformationConfirmed() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Sanctuary/Blueprints/Props/BP_Sanc_FreeStandingClock_Parent.BP_Sanc_FreeStandingClock_Parent_C.ObjectTransformationConfirmed"));
    struct Params_ObjectTransformationConfirmed {
    }; // Size: 0x0
    Params_ObjectTransformationConfirmed params{};
    ProcessEvent(func, &params);
}
void ABP_Sanc_FreeStandingClock_Parent_C::ObjectTransformationCancelled() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Sanctuary/Blueprints/Props/BP_Sanc_FreeStandingClock_Parent.BP_Sanc_FreeStandingClock_Parent_C.ObjectTransformationCancelled"));
    struct Params_ObjectTransformationCancelled {
    }; // Size: 0x0
    Params_ObjectTransformationCancelled params{};
    ProcessEvent(func, &params);
}
void ABP_Sanc_FreeStandingClock_Parent_C::ObjectVanished() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Sanctuary/Blueprints/Props/BP_Sanc_FreeStandingClock_Parent.BP_Sanc_FreeStandingClock_Parent_C.ObjectVanished"));
    struct Params_ObjectVanished {
    }; // Size: 0x0
    Params_ObjectVanished params{};
    ProcessEvent(func, &params);
}
void ABP_Sanc_FreeStandingClock_Parent_C::OnClockChime0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Sanctuary/Blueprints/Props/BP_Sanc_FreeStandingClock_Parent.BP_Sanc_FreeStandingClock_Parent_C.OnClockChime"));
    struct Params_OnClockChime {
    }; // Size: 0x0
    Params_OnClockChime params{};
    ProcessEvent(func, &params);
}
void ABP_Sanc_FreeStandingClock_Parent_C::ExecuteUbergraph_BP_Sanc_FreeStandingClock_Parent(int32_t EntryPoint, FTransform CallFunc_GetPlayerViewTransform_ReturnValue) {}
