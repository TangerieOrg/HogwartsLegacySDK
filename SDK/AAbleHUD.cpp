#include "AAbleHUD.hpp"
#include "AActor.hpp"
#include "APreloadArchitectHUD.hpp"
#include "UFunction.hpp"
AAbleHUD* AAbleHUD::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AbleHUD");
    return (AAbleHUD*)res;
}
void AAbleHUD::SetTarget(AActor* InActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AbleHUD.SetTarget"));
    struct Params_SetTarget {
        AActor* InActor; // 0x0
    }; // Size: 0x8
    Params_SetTarget params{};
    params.InActor = (AActor*)InActor;
    ProcessEvent(func, &params);
}
void AAbleHUD::UpdateDebugTarget() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AbleHUD.UpdateDebugTarget"));
    struct Params_UpdateDebugTarget {
    }; // Size: 0x0
    Params_UpdateDebugTarget params{};
    ProcessEvent(func, &params);
}
void AAbleHUD::ToggleAbleHUD() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AbleHUD.ToggleAbleHUD"));
    struct Params_ToggleAbleHUD {
    }; // Size: 0x0
    Params_ToggleAbleHUD params{};
    ProcessEvent(func, &params);
}
