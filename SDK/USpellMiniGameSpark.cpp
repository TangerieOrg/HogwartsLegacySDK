#include "FSpellUnlockMiniGamePathSegment.hpp"
#include "FVector2D.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UPhoenixUserWidget.hpp"
#include "USpellMiniGameSpark.hpp"
USpellMiniGameSpark* USpellMiniGameSpark::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SpellMiniGameSpark");
    return (USpellMiniGameSpark*)res;
}
void USpellMiniGameSpark::OnReset() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellMiniGameSpark.OnReset"));
    struct Params_OnReset {
    }; // Size: 0x0
    Params_OnReset params{};
    ProcessEvent(func, &params);
}
float USpellMiniGameSpark::GetNextAngleTowardsDirection(float CurrentAngle, FVector2D& TargetDirection, float& SmoothSpeed, float& MaxSmoothAngle) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellMiniGameSpark.GetNextAngleTowardsDirection"));
    struct Params_GetNextAngleTowardsDirection {
        float CurrentAngle; // 0x0
        FVector2D TargetDirection; // 0x4
        float SmoothSpeed; // 0xc
        float MaxSmoothAngle; // 0x10
        float ReturnValue; // 0x14
    }; // Size: 0x18
    Params_GetNextAngleTowardsDirection params{};
    params.CurrentAngle = (float)CurrentAngle;
    params.TargetDirection = (FVector2D)TargetDirection;
    params.SmoothSpeed = (float)SmoothSpeed;
    params.MaxSmoothAngle = (float)MaxSmoothAngle;
    ProcessEvent(func, &params);
    TargetDirection = params.TargetDirection;
    SmoothSpeed = params.SmoothSpeed;
    MaxSmoothAngle = params.MaxSmoothAngle;
    return (float)params.ReturnValue;
}
void USpellMiniGameSpark::Stop() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellMiniGameSpark.Stop"));
    struct Params_Stop {
    }; // Size: 0x0
    Params_Stop params{};
    ProcessEvent(func, &params);
}
FVector2D USpellMiniGameSpark::GetCurrentPositionOnPath() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellMiniGameSpark.GetCurrentPositionOnPath"));
    struct Params_GetCurrentPositionOnPath {
        FVector2D ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetCurrentPositionOnPath params{};
    ProcessEvent(func, &params);
    return (FVector2D)params.ReturnValue;
}
void USpellMiniGameSpark::Start() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellMiniGameSpark.Start"));
    struct Params_Start {
    }; // Size: 0x0
    Params_Start params{};
    ProcessEvent(func, &params);
}
void USpellMiniGameSpark::Reset() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellMiniGameSpark.Reset"));
    struct Params_Reset {
    }; // Size: 0x0
    Params_Reset params{};
    ProcessEvent(func, &params);
}
void USpellMiniGameSpark::OnInputFailure() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellMiniGameSpark.OnInputFailure"));
    struct Params_OnInputFailure {
    }; // Size: 0x0
    Params_OnInputFailure params{};
    ProcessEvent(func, &params);
}
void USpellMiniGameSpark::ApplyBoost() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellMiniGameSpark.ApplyBoost"));
    struct Params_ApplyBoost {
    }; // Size: 0x0
    Params_ApplyBoost params{};
    ProcessEvent(func, &params);
}
float USpellMiniGameSpark::GetDistanceAlongPathSegment(FSpellUnlockMiniGamePathSegment PathSegment) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellMiniGameSpark.GetDistanceAlongPathSegment"));
    struct Params_GetDistanceAlongPathSegment {
        FSpellUnlockMiniGamePathSegment PathSegment; // 0x0
        float ReturnValue; // 0x10
    }; // Size: 0x14
    Params_GetDistanceAlongPathSegment params{};
    params.PathSegment = (FSpellUnlockMiniGamePathSegment)PathSegment;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void USpellMiniGameSpark::OnRun() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellMiniGameSpark.OnRun"));
    struct Params_OnRun {
    }; // Size: 0x0
    Params_OnRun params{};
    ProcessEvent(func, &params);
}
void USpellMiniGameSpark::OnFail(UObject* sender) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellMiniGameSpark.OnFail"));
    struct Params_OnFail {
        UObject* sender; // 0x0
    }; // Size: 0x8
    Params_OnFail params{};
    params.sender = (UObject*)sender;
    ProcessEvent(func, &params);
}
void USpellMiniGameSpark::OnEnterInputWindow() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellMiniGameSpark.OnEnterInputWindow"));
    struct Params_OnEnterInputWindow {
    }; // Size: 0x0
    Params_OnEnterInputWindow params{};
    ProcessEvent(func, &params);
}
void USpellMiniGameSpark::OnBoostStart() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellMiniGameSpark.OnBoostStart"));
    struct Params_OnBoostStart {
    }; // Size: 0x0
    Params_OnBoostStart params{};
    ProcessEvent(func, &params);
}
void USpellMiniGameSpark::OnBoostEnd() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellMiniGameSpark.OnBoostEnd"));
    struct Params_OnBoostEnd {
    }; // Size: 0x0
    Params_OnBoostEnd params{};
    ProcessEvent(func, &params);
}
void USpellMiniGameSpark::LogSpellMinigameData(FString LogData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellMiniGameSpark.LogSpellMinigameData"));
    struct Params_LogSpellMinigameData {
        FString LogData; // 0x0
    }; // Size: 0x10
    Params_LogSpellMinigameData params{};
    params.LogData = (FString)LogData;
    ProcessEvent(func, &params);
}
FVector2D USpellMiniGameSpark::GetVelocity() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellMiniGameSpark.GetVelocity"));
    struct Params_GetVelocity {
        FVector2D ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetVelocity params{};
    ProcessEvent(func, &params);
    return (FVector2D)params.ReturnValue;
}
float USpellMiniGameSpark::GetTotalDistanceAsPercent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellMiniGameSpark.GetTotalDistanceAsPercent"));
    struct Params_GetTotalDistanceAsPercent {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetTotalDistanceAsPercent params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FVector2D USpellMiniGameSpark::GetPosition() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellMiniGameSpark.GetPosition"));
    struct Params_GetPosition {
        FVector2D ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetPosition params{};
    ProcessEvent(func, &params);
    return (FVector2D)params.ReturnValue;
}
float USpellMiniGameSpark::GetOrientation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellMiniGameSpark.GetOrientation"));
    struct Params_GetOrientation {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetOrientation params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
bool USpellMiniGameSpark::GetIsBoosting() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellMiniGameSpark.GetIsBoosting"));
    struct Params_GetIsBoosting {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetIsBoosting params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FVector2D USpellMiniGameSpark::GetDirection() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellMiniGameSpark.GetDirection"));
    struct Params_GetDirection {
        FVector2D ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetDirection params{};
    ProcessEvent(func, &params);
    return (FVector2D)params.ReturnValue;
}
int32_t USpellMiniGameSpark::GetCurrentPathSegmentIndex() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellMiniGameSpark.GetCurrentPathSegmentIndex"));
    struct Params_GetCurrentPathSegmentIndex {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetCurrentPathSegmentIndex params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
FSpellUnlockMiniGamePathSegment USpellMiniGameSpark::GetCurrentPathSegment() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellMiniGameSpark.GetCurrentPathSegment"));
    struct Params_GetCurrentPathSegment {
        FSpellUnlockMiniGamePathSegment ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetCurrentPathSegment params{};
    ProcessEvent(func, &params);
    return (FSpellUnlockMiniGamePathSegment)params.ReturnValue;
}
float USpellMiniGameSpark::GetCurrentDistanceAlongPath() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellMiniGameSpark.GetCurrentDistanceAlongPath"));
    struct Params_GetCurrentDistanceAlongPath {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetCurrentDistanceAlongPath params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float USpellMiniGameSpark::GetActiveSpeedScale() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellMiniGameSpark.GetActiveSpeedScale"));
    struct Params_GetActiveSpeedScale {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetActiveSpeedScale params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
