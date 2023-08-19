#include "EReticuleState.hpp"
#include "FVector2D.hpp"
#include "UCanvasPanel.hpp"
#include "UFunction.hpp"
#include "UHUDElementGroup.hpp"
#include "UImage.hpp"
#include "UReticule.hpp"
#include "UWidget.hpp"
UReticule* UReticule::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Reticule");
    return (UReticule*)res;
}
void UReticule::HandleShowCombatReticule(bool IsVisible) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Reticule.HandleShowCombatReticule"));
    struct Params_HandleShowCombatReticule {
        bool IsVisible; // 0x0
    }; // Size: 0x1
    Params_HandleShowCombatReticule params{};
    params.IsVisible = (bool)IsVisible;
    ProcessEvent(func, &params);
}
void UReticule::Show(bool IsVisible) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Reticule.Show"));
    struct Params_Show {
        bool IsVisible; // 0x0
    }; // Size: 0x1
    Params_Show params{};
    params.IsVisible = (bool)IsVisible;
    ProcessEvent(func, &params);
}
void UReticule::UseWeakReticuleBP(bool InUseWeakSub) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Reticule.UseWeakReticuleBP"));
    struct Params_UseWeakReticuleBP {
        bool InUseWeakSub; // 0x0
    }; // Size: 0x1
    Params_UseWeakReticuleBP params{};
    params.InUseWeakSub = (bool)InUseWeakSub;
    ProcessEvent(func, &params);
}
void UReticule::HandleFire() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Reticule.HandleFire"));
    struct Params_HandleFire {
    }; // Size: 0x0
    Params_HandleFire params{};
    ProcessEvent(func, &params);
}
void UReticule::ShowTargetReticule(bool IsVisible) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Reticule.ShowTargetReticule"));
    struct Params_ShowTargetReticule {
        bool IsVisible; // 0x0
    }; // Size: 0x1
    Params_ShowTargetReticule params{};
    params.IsVisible = (bool)IsVisible;
    ProcessEvent(func, &params);
}
void UReticule::ShowCombatReticule(bool IsVisible) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Reticule.ShowCombatReticule"));
    struct Params_ShowCombatReticule {
        bool IsVisible; // 0x0
    }; // Size: 0x1
    Params_ShowCombatReticule params{};
    params.IsVisible = (bool)IsVisible;
    ProcessEvent(func, &params);
}
void UReticule::SetState(EReticuleState State) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Reticule.SetState"));
    struct Params_SetState {
        EReticuleState State; // 0x0
    }; // Size: 0x1
    Params_SetState params{};
    params.State = (EReticuleState)State;
    ProcessEvent(func, &params);
}
void UReticule::SetupForCircularFinisher() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Reticule.SetupForCircularFinisher"));
    struct Params_SetupForCircularFinisher {
    }; // Size: 0x0
    Params_SetupForCircularFinisher params{};
    ProcessEvent(func, &params);
}
void UReticule::SetupForLinearFinisher() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Reticule.SetupForLinearFinisher"));
    struct Params_SetupForLinearFinisher {
    }; // Size: 0x0
    Params_SetupForLinearFinisher params{};
    ProcessEvent(func, &params);
}
void UReticule::HandleSetState(EReticuleState State) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Reticule.HandleSetState"));
    struct Params_HandleSetState {
        EReticuleState State; // 0x0
    }; // Size: 0x1
    Params_HandleSetState params{};
    params.State = (EReticuleState)State;
    ProcessEvent(func, &params);
}
void UReticule::SetFinisherNormalizedAngle(float NormalizedAngle) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Reticule.SetFinisherNormalizedAngle"));
    struct Params_SetFinisherNormalizedAngle {
        float NormalizedAngle; // 0x0
    }; // Size: 0x4
    Params_SetFinisherNormalizedAngle params{};
    params.NormalizedAngle = (float)NormalizedAngle;
    ProcessEvent(func, &params);
}
void UReticule::SetFinisherActive(bool FinisherActiveIn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Reticule.SetFinisherActive"));
    struct Params_SetFinisherActive {
        bool FinisherActiveIn; // 0x0
    }; // Size: 0x1
    Params_SetFinisherActive params{};
    params.FinisherActiveIn = (bool)FinisherActiveIn;
    ProcessEvent(func, &params);
}
void UReticule::HandleShowTargetReticule(bool IsVisible) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Reticule.HandleShowTargetReticule"));
    struct Params_HandleShowTargetReticule {
        bool IsVisible; // 0x0
    }; // Size: 0x1
    Params_HandleShowTargetReticule params{};
    params.IsVisible = (bool)IsVisible;
    ProcessEvent(func, &params);
}
void UReticule::HandleBestOverlapping(bool Overlapping) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Reticule.HandleBestOverlapping"));
    struct Params_HandleBestOverlapping {
        bool Overlapping; // 0x0
    }; // Size: 0x1
    Params_HandleBestOverlapping params{};
    params.Overlapping = (bool)Overlapping;
    ProcessEvent(func, &params);
}
void UReticule::HandleShowSub(bool IsVisible) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Reticule.HandleShowSub"));
    struct Params_HandleShowSub {
        bool IsVisible; // 0x0
    }; // Size: 0x1
    Params_HandleShowSub params{};
    params.IsVisible = (bool)IsVisible;
    ProcessEvent(func, &params);
}
void UReticule::HandleShowRing(bool IsVisible) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Reticule.HandleShowRing"));
    struct Params_HandleShowRing {
        bool IsVisible; // 0x0
    }; // Size: 0x1
    Params_HandleShowRing params{};
    params.IsVisible = (bool)IsVisible;
    ProcessEvent(func, &params);
}
void UReticule::HandleShow(bool IsVisible) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Reticule.HandleShow"));
    struct Params_HandleShow {
        bool IsVisible; // 0x0
    }; // Size: 0x1
    Params_HandleShow params{};
    params.IsVisible = (bool)IsVisible;
    ProcessEvent(func, &params);
}
void UReticule::HandleSetTargetRingPosition(FVector2D Position) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Reticule.HandleSetTargetRingPosition"));
    struct Params_HandleSetTargetRingPosition {
        FVector2D Position; // 0x0
    }; // Size: 0x8
    Params_HandleSetTargetRingPosition params{};
    params.Position = (FVector2D)Position;
    ProcessEvent(func, &params);
}
void UReticule::HandleSetSubPosition(FVector2D Position) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Reticule.HandleSetSubPosition"));
    struct Params_HandleSetSubPosition {
        FVector2D Position; // 0x0
    }; // Size: 0x8
    Params_HandleSetSubPosition params{};
    params.Position = (FVector2D)Position;
    ProcessEvent(func, &params);
}
void UReticule::HandleSetPrimaryPosition(FVector2D Position) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Reticule.HandleSetPrimaryPosition"));
    struct Params_HandleSetPrimaryPosition {
        FVector2D Position; // 0x0
    }; // Size: 0x8
    Params_HandleSetPrimaryPosition params{};
    params.Position = (FVector2D)Position;
    ProcessEvent(func, &params);
}
void UReticule::HandleOverlapping(bool Overlapping) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Reticule.HandleOverlapping"));
    struct Params_HandleOverlapping {
        bool Overlapping; // 0x0
    }; // Size: 0x1
    Params_HandleOverlapping params{};
    params.Overlapping = (bool)Overlapping;
    ProcessEvent(func, &params);
}
void UReticule::HandleFinisherActiveChanged(bool FinisherActiveIn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Reticule.HandleFinisherActiveChanged"));
    struct Params_HandleFinisherActiveChanged {
        bool FinisherActiveIn; // 0x0
    }; // Size: 0x1
    Params_HandleFinisherActiveChanged params{};
    params.FinisherActiveIn = (bool)FinisherActiveIn;
    ProcessEvent(func, &params);
}
EReticuleState UReticule::GetState() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Reticule.GetState"));
    struct Params_GetState {
        EReticuleState ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetState params{};
    ProcessEvent(func, &params);
    return (EReticuleState)params.ReturnValue;
}
void UReticule::HandleFadeFinisher() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Reticule.HandleFadeFinisher"));
    struct Params_HandleFadeFinisher {
    }; // Size: 0x0
    Params_HandleFadeFinisher params{};
    ProcessEvent(func, &params);
}
bool UReticule::GetFinisherActive() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Reticule.GetFinisherActive"));
    struct Params_GetFinisherActive {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetFinisherActive params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
