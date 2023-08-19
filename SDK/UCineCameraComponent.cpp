#include "FCameraFilmbackSettings.hpp"
#include "FCameraFocusSettings.hpp"
#include "FCameraLensSettings.hpp"
#include "FNamedFilmbackPreset.hpp"
#include "FNamedLensPreset.hpp"
#include "UCameraComponent.hpp"
#include "UCineCameraComponent.hpp"
#include "UFunction.hpp"
float UCineCameraComponent::GetHorizontalFieldOfView() {
    static auto func = (UFunction*)(find_uobject("Function /Script/CinematicCamera.CineCameraComponent.GetHorizontalFieldOfView"));
    struct Params_GetHorizontalFieldOfView {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetHorizontalFieldOfView params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
UCineCameraComponent* UCineCameraComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/CinematicCamera.CineCameraComponent");
    return (UCineCameraComponent*)res;
}
void UCineCameraComponent::SetLensPresetByName(FString InPresetName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CinematicCamera.CineCameraComponent.SetLensPresetByName"));
    struct Params_SetLensPresetByName {
        FString InPresetName; // 0x0
    }; // Size: 0x10
    Params_SetLensPresetByName params{};
    params.InPresetName = (FString)InPresetName;
    ProcessEvent(func, &params);
}
void UCineCameraComponent::SetFilmbackPresetByName(FString InPresetName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CinematicCamera.CineCameraComponent.SetFilmbackPresetByName"));
    struct Params_SetFilmbackPresetByName {
        FString InPresetName; // 0x0
    }; // Size: 0x10
    Params_SetFilmbackPresetByName params{};
    params.InPresetName = (FString)InPresetName;
    ProcessEvent(func, &params);
}
float UCineCameraComponent::GetVerticalFieldOfView() {
    static auto func = (UFunction*)(find_uobject("Function /Script/CinematicCamera.CineCameraComponent.GetVerticalFieldOfView"));
    struct Params_GetVerticalFieldOfView {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetVerticalFieldOfView params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UCineCameraComponent::SetCurrentFocalLength(float InFocalLength) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CinematicCamera.CineCameraComponent.SetCurrentFocalLength"));
    struct Params_SetCurrentFocalLength {
        float InFocalLength; // 0x0
    }; // Size: 0x4
    Params_SetCurrentFocalLength params{};
    params.InFocalLength = (float)InFocalLength;
    ProcessEvent(func, &params);
}
TArray<FNamedLensPreset> UCineCameraComponent::GetLensPresetsCopy() {
    static auto func = (UFunction*)(find_uobject("Function /Script/CinematicCamera.CineCameraComponent.GetLensPresetsCopy"));
    struct Params_GetLensPresetsCopy {
        TArray<FNamedLensPreset> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetLensPresetsCopy params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<FNamedLensPreset>)params.ReturnValue;
}
FString UCineCameraComponent::GetLensPresetName() {
    static auto func = (UFunction*)(find_uobject("Function /Script/CinematicCamera.CineCameraComponent.GetLensPresetName"));
    struct Params_GetLensPresetName {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetLensPresetName params{};
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
TArray<FNamedFilmbackPreset> UCineCameraComponent::GetFilmbackPresetsCopy() {
    static auto func = (UFunction*)(find_uobject("Function /Script/CinematicCamera.CineCameraComponent.GetFilmbackPresetsCopy"));
    struct Params_GetFilmbackPresetsCopy {
        TArray<FNamedFilmbackPreset> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetFilmbackPresetsCopy params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<FNamedFilmbackPreset>)params.ReturnValue;
}
FString UCineCameraComponent::GetFilmbackPresetName() {
    static auto func = (UFunction*)(find_uobject("Function /Script/CinematicCamera.CineCameraComponent.GetFilmbackPresetName"));
    struct Params_GetFilmbackPresetName {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetFilmbackPresetName params{};
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FString UCineCameraComponent::GetDefaultFilmbackPresetName() {
    static auto func = (UFunction*)(find_uobject("Function /Script/CinematicCamera.CineCameraComponent.GetDefaultFilmbackPresetName"));
    struct Params_GetDefaultFilmbackPresetName {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetDefaultFilmbackPresetName params{};
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
