#include "APlayerController.hpp"
#include "FPhoenixCameraSettingsData.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UPhoenixCameraSettings.hpp"
UPhoenixCameraSettings* UPhoenixCameraSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PhoenixCameraSettings");
    return (UPhoenixCameraSettings*)res;
}
void UPhoenixCameraSettings::SetSettingsData(FPhoenixCameraSettingsData& InSettingsData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraSettings.SetSettingsData"));
    struct Params_SetSettingsData {
        FPhoenixCameraSettingsData InSettingsData; // 0x0
    }; // Size: 0x88
    Params_SetSettingsData params{};
    params.InSettingsData = (FPhoenixCameraSettingsData)InSettingsData;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InSettingsData = params.InSettingsData;
}
void UPhoenixCameraSettings::SetToggleAim(bool bInToggleAim) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraSettings.SetToggleAim"));
    struct Params_SetToggleAim {
        bool bInToggleAim; // 0x0
    }; // Size: 0x1
    Params_SetToggleAim params{};
    params.bInToggleAim = (bool)bInToggleAim;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
bool UPhoenixCameraSettings::GetMotionBlur() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraSettings.GetMotionBlur"));
    struct Params_GetMotionBlur {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetMotionBlur params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UPhoenixCameraSettings::SetDirectorCam_SwitchRollAndZoomInput(bool bInValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraSettings.SetDirectorCam_SwitchRollAndZoomInput"));
    struct Params_SetDirectorCam_SwitchRollAndZoomInput {
        bool bInValue; // 0x0
    }; // Size: 0x1
    Params_SetDirectorCam_SwitchRollAndZoomInput params{};
    params.bInValue = (bool)bInValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UPhoenixCameraSettings::SetDirectorCam_MoveInputAcceleration(float InAcceleration) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraSettings.SetDirectorCam_MoveInputAcceleration"));
    struct Params_SetDirectorCam_MoveInputAcceleration {
        float InAcceleration; // 0x0
    }; // Size: 0x4
    Params_SetDirectorCam_MoveInputAcceleration params{};
    params.InAcceleration = (float)InAcceleration;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UPhoenixCameraSettings::SetInvertFlightY(bool bInInvertFlightY) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraSettings.SetInvertFlightY"));
    struct Params_SetInvertFlightY {
        bool bInInvertFlightY; // 0x0
    }; // Size: 0x1
    Params_SetInvertFlightY params{};
    params.bInInvertFlightY = (bool)bInInvertFlightY;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
float UPhoenixCameraSettings::GetDirectorCam_RollInputAcceleration() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraSettings.GetDirectorCam_RollInputAcceleration"));
    struct Params_GetDirectorCam_RollInputAcceleration {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetDirectorCam_RollInputAcceleration params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UPhoenixCameraSettings::SetDirectorCam_AmbientFrequency(float InFrequency) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraSettings.SetDirectorCam_AmbientFrequency"));
    struct Params_SetDirectorCam_AmbientFrequency {
        float InFrequency; // 0x0
    }; // Size: 0x4
    Params_SetDirectorCam_AmbientFrequency params{};
    params.InFrequency = (float)InFrequency;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UPhoenixCameraSettings::SetSpeedFollowCamera(float InFollowSpeed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraSettings.SetSpeedFollowCamera"));
    struct Params_SetSpeedFollowCamera {
        float InFollowSpeed; // 0x0
    }; // Size: 0x4
    Params_SetSpeedFollowCamera params{};
    params.InFollowSpeed = (float)InFollowSpeed;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UPhoenixCameraSettings::SetMotionBlur(bool bInMotionBlur) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraSettings.SetMotionBlur"));
    struct Params_SetMotionBlur {
        bool bInMotionBlur; // 0x0
    }; // Size: 0x1
    Params_SetMotionBlur params{};
    params.bInMotionBlur = (bool)bInMotionBlur;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UPhoenixCameraSettings::SetInvertY(bool bInInvertY) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraSettings.SetInvertY"));
    struct Params_SetInvertY {
        bool bInInvertY; // 0x0
    }; // Size: 0x1
    Params_SetInvertY params{};
    params.bInInvertY = (bool)bInInvertY;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UPhoenixCameraSettings::SetInvertX(bool bInInvertX) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraSettings.SetInvertX"));
    struct Params_SetInvertX {
        bool bInInvertX; // 0x0
    }; // Size: 0x1
    Params_SetInvertX params{};
    params.bInInvertX = (bool)bInInvertX;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UPhoenixCameraSettings::SetInputSensitivityDefault(float InSensitivity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraSettings.SetInputSensitivityDefault"));
    struct Params_SetInputSensitivityDefault {
        float InSensitivity; // 0x0
    }; // Size: 0x4
    Params_SetInputSensitivityDefault params{};
    params.InSensitivity = (float)InSensitivity;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UPhoenixCameraSettings::SetInputSensitivityAiming(float InSensitivity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraSettings.SetInputSensitivityAiming"));
    struct Params_SetInputSensitivityAiming {
        float InSensitivity; // 0x0
    }; // Size: 0x4
    Params_SetInputSensitivityAiming params{};
    params.InSensitivity = (float)InSensitivity;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UPhoenixCameraSettings::SetInputAccelerationDefault(float InAcceleration) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraSettings.SetInputAccelerationDefault"));
    struct Params_SetInputAccelerationDefault {
        float InAcceleration; // 0x0
    }; // Size: 0x4
    Params_SetInputAccelerationDefault params{};
    params.InAcceleration = (float)InAcceleration;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UPhoenixCameraSettings::SetInputAccelerationAiming(float InAcceleration) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraSettings.SetInputAccelerationAiming"));
    struct Params_SetInputAccelerationAiming {
        float InAcceleration; // 0x0
    }; // Size: 0x4
    Params_SetInputAccelerationAiming params{};
    params.InAcceleration = (float)InAcceleration;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UPhoenixCameraSettings::SetGamepadSouthpaw(bool bInSouthpaw) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraSettings.SetGamepadSouthpaw"));
    struct Params_SetGamepadSouthpaw {
        bool bInSouthpaw; // 0x0
    }; // Size: 0x1
    Params_SetGamepadSouthpaw params{};
    params.bInSouthpaw = (bool)bInSouthpaw;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UPhoenixCameraSettings::SetGamepadDeadzone(float InDeadzone) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraSettings.SetGamepadDeadzone"));
    struct Params_SetGamepadDeadzone {
        float InDeadzone; // 0x0
    }; // Size: 0x4
    Params_SetGamepadDeadzone params{};
    params.InDeadzone = (float)InDeadzone;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UPhoenixCameraSettings::SetDirectorCam_ZoomFiltering(float InFiltering) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraSettings.SetDirectorCam_ZoomFiltering"));
    struct Params_SetDirectorCam_ZoomFiltering {
        float InFiltering; // 0x0
    }; // Size: 0x4
    Params_SetDirectorCam_ZoomFiltering params{};
    params.InFiltering = (float)InFiltering;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UPhoenixCameraSettings::SetDepthOfField(bool bInDepthOfField) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraSettings.SetDepthOfField"));
    struct Params_SetDepthOfField {
        bool bInDepthOfField; // 0x0
    }; // Size: 0x1
    Params_SetDepthOfField params{};
    params.bInDepthOfField = (bool)bInDepthOfField;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
float UPhoenixCameraSettings::GetAppliedFieldOfView(UObject* InWorldContextObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraSettings.GetAppliedFieldOfView"));
    struct Params_GetAppliedFieldOfView {
        UObject* InWorldContextObject; // 0x0
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetAppliedFieldOfView params{};
    params.InWorldContextObject = (UObject*)InWorldContextObject;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UPhoenixCameraSettings::SetGamepadAimingSwitch(bool bInAimingSwitch) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraSettings.SetGamepadAimingSwitch"));
    struct Params_SetGamepadAimingSwitch {
        bool bInAimingSwitch; // 0x0
    }; // Size: 0x1
    Params_SetGamepadAimingSwitch params{};
    params.bInAimingSwitch = (bool)bInAimingSwitch;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
bool UPhoenixCameraSettings::SetFilmGrain(bool bInFilmGrain) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraSettings.SetFilmGrain"));
    struct Params_SetFilmGrain {
        bool bInFilmGrain; // 0x0
        bool ReturnValue; // 0x1
    }; // Size: 0x2
    Params_SetFilmGrain params{};
    params.bInFilmGrain = (bool)bInFilmGrain;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UPhoenixCameraSettings::GetToggleAim() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraSettings.GetToggleAim"));
    struct Params_GetToggleAim {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetToggleAim params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UPhoenixCameraSettings::ResetConsoleDisplaySettings() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraSettings.ResetConsoleDisplaySettings"));
    struct Params_ResetConsoleDisplaySettings {
    }; // Size: 0x0
    Params_ResetConsoleDisplaySettings params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UPhoenixCameraSettings::SetFieldOfViewOffset(float InFieldOfViewOffset) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraSettings.SetFieldOfViewOffset"));
    struct Params_SetFieldOfViewOffset {
        float InFieldOfViewOffset; // 0x0
    }; // Size: 0x4
    Params_SetFieldOfViewOffset params{};
    params.InFieldOfViewOffset = (float)InFieldOfViewOffset;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UPhoenixCameraSettings::SetDirectorCam_ZoomInputSensitivity(float InSensitivity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraSettings.SetDirectorCam_ZoomInputSensitivity"));
    struct Params_SetDirectorCam_ZoomInputSensitivity {
        float InSensitivity; // 0x0
    }; // Size: 0x4
    Params_SetDirectorCam_ZoomInputSensitivity params{};
    params.InSensitivity = (float)InSensitivity;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UPhoenixCameraSettings::SetDirectorCam_FocusDistanceInputSensitivity(float InSensitivity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraSettings.SetDirectorCam_FocusDistanceInputSensitivity"));
    struct Params_SetDirectorCam_FocusDistanceInputSensitivity {
        float InSensitivity; // 0x0
    }; // Size: 0x4
    Params_SetDirectorCam_FocusDistanceInputSensitivity params{};
    params.InSensitivity = (float)InSensitivity;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UPhoenixCameraSettings::SetDirectorCam_ZoomInputAcceleration(float InAcceleration) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraSettings.SetDirectorCam_ZoomInputAcceleration"));
    struct Params_SetDirectorCam_ZoomInputAcceleration {
        float InAcceleration; // 0x0
    }; // Size: 0x4
    Params_SetDirectorCam_ZoomInputAcceleration params{};
    params.InAcceleration = (float)InAcceleration;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UPhoenixCameraSettings::SetDirectorCam_RotationFiltering(float InFiltering) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraSettings.SetDirectorCam_RotationFiltering"));
    struct Params_SetDirectorCam_RotationFiltering {
        float InFiltering; // 0x0
    }; // Size: 0x4
    Params_SetDirectorCam_RotationFiltering params{};
    params.InFiltering = (float)InFiltering;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UPhoenixCameraSettings::SetDirectorCam_TruckInLocalSpace(bool bInValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraSettings.SetDirectorCam_TruckInLocalSpace"));
    struct Params_SetDirectorCam_TruckInLocalSpace {
        bool bInValue; // 0x0
    }; // Size: 0x1
    Params_SetDirectorCam_TruckInLocalSpace params{};
    params.bInValue = (bool)bInValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UPhoenixCameraSettings::SetDirectorCam_RotationInputSensitivity(float InSensitivity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraSettings.SetDirectorCam_RotationInputSensitivity"));
    struct Params_SetDirectorCam_RotationInputSensitivity {
        float InSensitivity; // 0x0
    }; // Size: 0x4
    Params_SetDirectorCam_RotationInputSensitivity params{};
    params.InSensitivity = (float)InSensitivity;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
bool UPhoenixCameraSettings::GetFlightInvertY() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraSettings.GetFlightInvertY"));
    struct Params_GetFlightInvertY {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetFlightInvertY params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UPhoenixCameraSettings::SetDirectorCam_FocusDistanceFiltering(float InFiltering) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraSettings.SetDirectorCam_FocusDistanceFiltering"));
    struct Params_SetDirectorCam_FocusDistanceFiltering {
        float InFiltering; // 0x0
    }; // Size: 0x4
    Params_SetDirectorCam_FocusDistanceFiltering params{};
    params.InFiltering = (float)InFiltering;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UPhoenixCameraSettings::SetDirectorCam_PedestalInputSensitivity(float InSensitivity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraSettings.SetDirectorCam_PedestalInputSensitivity"));
    struct Params_SetDirectorCam_PedestalInputSensitivity {
        float InSensitivity; // 0x0
    }; // Size: 0x4
    Params_SetDirectorCam_PedestalInputSensitivity params{};
    params.InSensitivity = (float)InSensitivity;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UPhoenixCameraSettings::SetDirectorCam_RotationInputAcceleration(float InAcceleration) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraSettings.SetDirectorCam_RotationInputAcceleration"));
    struct Params_SetDirectorCam_RotationInputAcceleration {
        float InAcceleration; // 0x0
    }; // Size: 0x4
    Params_SetDirectorCam_RotationInputAcceleration params{};
    params.InAcceleration = (float)InAcceleration;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
float UPhoenixCameraSettings::GetDirectorCam_PedestalInputSensitivity() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraSettings.GetDirectorCam_PedestalInputSensitivity"));
    struct Params_GetDirectorCam_PedestalInputSensitivity {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetDirectorCam_PedestalInputSensitivity params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UPhoenixCameraSettings::SetCameraShake(float InCameraShake) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraSettings.SetCameraShake"));
    struct Params_SetCameraShake {
        float InCameraShake; // 0x0
    }; // Size: 0x4
    Params_SetCameraShake params{};
    params.InCameraShake = (float)InCameraShake;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UPhoenixCameraSettings::SetDirectorCam_RollInputSensitivity(float InSensitivity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraSettings.SetDirectorCam_RollInputSensitivity"));
    struct Params_SetDirectorCam_RollInputSensitivity {
        float InSensitivity; // 0x0
    }; // Size: 0x4
    Params_SetDirectorCam_RollInputSensitivity params{};
    params.InSensitivity = (float)InSensitivity;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UPhoenixCameraSettings::SetDirectorCam_RollInputAcceleration(float InAcceleration) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraSettings.SetDirectorCam_RollInputAcceleration"));
    struct Params_SetDirectorCam_RollInputAcceleration {
        float InAcceleration; // 0x0
    }; // Size: 0x4
    Params_SetDirectorCam_RollInputAcceleration params{};
    params.InAcceleration = (float)InAcceleration;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UPhoenixCameraSettings::SetDirectorCam_PedestalInputAcceleration(float InAcceleration) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraSettings.SetDirectorCam_PedestalInputAcceleration"));
    struct Params_SetDirectorCam_PedestalInputAcceleration {
        float InAcceleration; // 0x0
    }; // Size: 0x4
    Params_SetDirectorCam_PedestalInputAcceleration params{};
    params.InAcceleration = (float)InAcceleration;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UPhoenixCameraSettings::ResetDisplaySettings() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraSettings.ResetDisplaySettings"));
    struct Params_ResetDisplaySettings {
    }; // Size: 0x0
    Params_ResetDisplaySettings params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UPhoenixCameraSettings::SetDirectorCam_PedestalInLocalSpace(bool bInValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraSettings.SetDirectorCam_PedestalInLocalSpace"));
    struct Params_SetDirectorCam_PedestalInLocalSpace {
        bool bInValue; // 0x0
    }; // Size: 0x1
    Params_SetDirectorCam_PedestalInLocalSpace params{};
    params.bInValue = (bool)bInValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UPhoenixCameraSettings::SetDirectorCam_MoveInputSensitivity(float InSensitivity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraSettings.SetDirectorCam_MoveInputSensitivity"));
    struct Params_SetDirectorCam_MoveInputSensitivity {
        float InSensitivity; // 0x0
    }; // Size: 0x4
    Params_SetDirectorCam_MoveInputSensitivity params{};
    params.InSensitivity = (float)InSensitivity;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UPhoenixCameraSettings::SetAmountMotionBlur(float InMotionBlurAmount) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraSettings.SetAmountMotionBlur"));
    struct Params_SetAmountMotionBlur {
        float InMotionBlurAmount; // 0x0
    }; // Size: 0x4
    Params_SetAmountMotionBlur params{};
    params.InMotionBlurAmount = (float)InMotionBlurAmount;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UPhoenixCameraSettings::SetCineCameraShake(bool bInCineCameraShake) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraSettings.SetCineCameraShake"));
    struct Params_SetCineCameraShake {
        bool bInCineCameraShake; // 0x0
    }; // Size: 0x1
    Params_SetCineCameraShake params{};
    params.bInCineCameraShake = (bool)bInCineCameraShake;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UPhoenixCameraSettings::SetDirectorCam_MoveFiltering(float InFiltering) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraSettings.SetDirectorCam_MoveFiltering"));
    struct Params_SetDirectorCam_MoveFiltering {
        float InFiltering; // 0x0
    }; // Size: 0x4
    Params_SetDirectorCam_MoveFiltering params{};
    params.InFiltering = (float)InFiltering;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
bool UPhoenixCameraSettings::GetInvertX() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraSettings.GetInvertX"));
    struct Params_GetInvertX {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetInvertX params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UPhoenixCameraSettings::SetDirectorCam_FocusDistanceInputAcceleration(float InAcceleration) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraSettings.SetDirectorCam_FocusDistanceInputAcceleration"));
    struct Params_SetDirectorCam_FocusDistanceInputAcceleration {
        float InAcceleration; // 0x0
    }; // Size: 0x4
    Params_SetDirectorCam_FocusDistanceInputAcceleration params{};
    params.InAcceleration = (float)InAcceleration;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UPhoenixCameraSettings::SetDirectorCam_DollyInLocalSpace(bool bInValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraSettings.SetDirectorCam_DollyInLocalSpace"));
    struct Params_SetDirectorCam_DollyInLocalSpace {
        bool bInValue; // 0x0
    }; // Size: 0x1
    Params_SetDirectorCam_DollyInLocalSpace params{};
    params.bInValue = (bool)bInValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
float UPhoenixCameraSettings::GetInputSensitivityAiming() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraSettings.GetInputSensitivityAiming"));
    struct Params_GetInputSensitivityAiming {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetInputSensitivityAiming params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UPhoenixCameraSettings::SetDirectorCam_Aperture(float InAperture) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraSettings.SetDirectorCam_Aperture"));
    struct Params_SetDirectorCam_Aperture {
        float InAperture; // 0x0
    }; // Size: 0x4
    Params_SetDirectorCam_Aperture params{};
    params.InAperture = (float)InAperture;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UPhoenixCameraSettings::SetDirectorCam_AmbientIntensity(float InIntensity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraSettings.SetDirectorCam_AmbientIntensity"));
    struct Params_SetDirectorCam_AmbientIntensity {
        float InIntensity; // 0x0
    }; // Size: 0x4
    Params_SetDirectorCam_AmbientIntensity params{};
    params.InIntensity = (float)InIntensity;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
bool UPhoenixCameraSettings::GetGamepadAimingSwitch() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraSettings.GetGamepadAimingSwitch"));
    struct Params_GetGamepadAimingSwitch {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetGamepadAimingSwitch params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UPhoenixCameraSettings::SetChromaticAberration(bool bInChromaticAberration) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraSettings.SetChromaticAberration"));
    struct Params_SetChromaticAberration {
        bool bInChromaticAberration; // 0x0
        bool ReturnValue; // 0x1
    }; // Size: 0x2
    Params_SetChromaticAberration params{};
    params.bInChromaticAberration = (bool)bInChromaticAberration;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UPhoenixCameraSettings::SetAimAssistStrength(float InStrength) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraSettings.SetAimAssistStrength"));
    struct Params_SetAimAssistStrength {
        float InStrength; // 0x0
    }; // Size: 0x4
    Params_SetAimAssistStrength params{};
    params.InStrength = (float)InStrength;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UPhoenixCameraSettings::ResetGameplaySettings() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraSettings.ResetGameplaySettings"));
    struct Params_ResetGameplaySettings {
    }; // Size: 0x0
    Params_ResetGameplaySettings params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
float UPhoenixCameraSettings::GetGamepadDeadzone() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraSettings.GetGamepadDeadzone"));
    struct Params_GetGamepadDeadzone {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetGamepadDeadzone params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UPhoenixCameraSettings::GetDirectorCam_RotationFiltering() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraSettings.GetDirectorCam_RotationFiltering"));
    struct Params_GetDirectorCam_RotationFiltering {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetDirectorCam_RotationFiltering params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UPhoenixCameraSettings::ResetAccessibilitySettings() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraSettings.ResetAccessibilitySettings"));
    struct Params_ResetAccessibilitySettings {
    }; // Size: 0x0
    Params_ResetAccessibilitySettings params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
float UPhoenixCameraSettings::GetInputAccelerationAiming() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraSettings.GetInputAccelerationAiming"));
    struct Params_GetInputAccelerationAiming {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetInputAccelerationAiming params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UPhoenixCameraSettings::GetFieldOfViewOffset() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraSettings.GetFieldOfViewOffset"));
    struct Params_GetFieldOfViewOffset {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetFieldOfViewOffset params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UPhoenixCameraSettings::GetSpeedFollowCamera() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraSettings.GetSpeedFollowCamera"));
    struct Params_GetSpeedFollowCamera {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetSpeedFollowCamera params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FPhoenixCameraSettingsData UPhoenixCameraSettings::GetSettingsData() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraSettings.GetSettingsData"));
    struct Params_GetSettingsData {
        FPhoenixCameraSettingsData ReturnValue; // 0x0
    }; // Size: 0x88
    Params_GetSettingsData params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FPhoenixCameraSettingsData)params.ReturnValue;
}
bool UPhoenixCameraSettings::GetInvertY() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraSettings.GetInvertY"));
    struct Params_GetInvertY {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetInvertY params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
float UPhoenixCameraSettings::GetInputSensitivityDefault() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraSettings.GetInputSensitivityDefault"));
    struct Params_GetInputSensitivityDefault {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetInputSensitivityDefault params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UPhoenixCameraSettings::GetInputAccelerationDefault() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraSettings.GetInputAccelerationDefault"));
    struct Params_GetInputAccelerationDefault {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetInputAccelerationDefault params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
bool UPhoenixCameraSettings::GetGamepadSouthpaw() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraSettings.GetGamepadSouthpaw"));
    struct Params_GetGamepadSouthpaw {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetGamepadSouthpaw params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UPhoenixCameraSettings::GetFilmGrain() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraSettings.GetFilmGrain"));
    struct Params_GetFilmGrain {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetFilmGrain params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UPhoenixCameraSettings::GetDirty() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraSettings.GetDirty"));
    struct Params_GetDirty {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetDirty params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
float UPhoenixCameraSettings::GetDirectorCam_FocusDistanceFiltering() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraSettings.GetDirectorCam_FocusDistanceFiltering"));
    struct Params_GetDirectorCam_FocusDistanceFiltering {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetDirectorCam_FocusDistanceFiltering params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UPhoenixCameraSettings::GetDirectorCam_ZoomInputSensitivity() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraSettings.GetDirectorCam_ZoomInputSensitivity"));
    struct Params_GetDirectorCam_ZoomInputSensitivity {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetDirectorCam_ZoomInputSensitivity params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UPhoenixCameraSettings::GetCameraShake() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraSettings.GetCameraShake"));
    struct Params_GetCameraShake {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetCameraShake params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UPhoenixCameraSettings::GetDirectorCam_ZoomInputAcceleration() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraSettings.GetDirectorCam_ZoomInputAcceleration"));
    struct Params_GetDirectorCam_ZoomInputAcceleration {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetDirectorCam_ZoomInputAcceleration params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UPhoenixCameraSettings::GetDirectorCam_ZoomFiltering() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraSettings.GetDirectorCam_ZoomFiltering"));
    struct Params_GetDirectorCam_ZoomFiltering {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetDirectorCam_ZoomFiltering params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
bool UPhoenixCameraSettings::GetDirectorCam_TruckInLocalSpace() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraSettings.GetDirectorCam_TruckInLocalSpace"));
    struct Params_GetDirectorCam_TruckInLocalSpace {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetDirectorCam_TruckInLocalSpace params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UPhoenixCameraSettings::GetDirectorCam_SwitchRollAndZoomInput() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraSettings.GetDirectorCam_SwitchRollAndZoomInput"));
    struct Params_GetDirectorCam_SwitchRollAndZoomInput {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetDirectorCam_SwitchRollAndZoomInput params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
float UPhoenixCameraSettings::GetDirectorCam_RotationInputSensitivity() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraSettings.GetDirectorCam_RotationInputSensitivity"));
    struct Params_GetDirectorCam_RotationInputSensitivity {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetDirectorCam_RotationInputSensitivity params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UPhoenixCameraSettings::GetDirectorCam_RotationInputAcceleration() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraSettings.GetDirectorCam_RotationInputAcceleration"));
    struct Params_GetDirectorCam_RotationInputAcceleration {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetDirectorCam_RotationInputAcceleration params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UPhoenixCameraSettings::GetDirectorCam_RollInputSensitivity() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraSettings.GetDirectorCam_RollInputSensitivity"));
    struct Params_GetDirectorCam_RollInputSensitivity {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetDirectorCam_RollInputSensitivity params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UPhoenixCameraSettings::GetDirectorCam_PedestalInputAcceleration() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraSettings.GetDirectorCam_PedestalInputAcceleration"));
    struct Params_GetDirectorCam_PedestalInputAcceleration {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetDirectorCam_PedestalInputAcceleration params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
bool UPhoenixCameraSettings::GetDirectorCam_PedestalInLocalSpace() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraSettings.GetDirectorCam_PedestalInLocalSpace"));
    struct Params_GetDirectorCam_PedestalInLocalSpace {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetDirectorCam_PedestalInLocalSpace params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
float UPhoenixCameraSettings::GetDirectorCam_MoveInputSensitivity() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraSettings.GetDirectorCam_MoveInputSensitivity"));
    struct Params_GetDirectorCam_MoveInputSensitivity {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetDirectorCam_MoveInputSensitivity params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UPhoenixCameraSettings::GetDirectorCam_MoveInputAcceleration() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraSettings.GetDirectorCam_MoveInputAcceleration"));
    struct Params_GetDirectorCam_MoveInputAcceleration {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetDirectorCam_MoveInputAcceleration params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UPhoenixCameraSettings::GetDirectorCam_MoveFiltering() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraSettings.GetDirectorCam_MoveFiltering"));
    struct Params_GetDirectorCam_MoveFiltering {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetDirectorCam_MoveFiltering params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UPhoenixCameraSettings::GetDirectorCam_FocusDistanceInputSensitivity() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraSettings.GetDirectorCam_FocusDistanceInputSensitivity"));
    struct Params_GetDirectorCam_FocusDistanceInputSensitivity {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetDirectorCam_FocusDistanceInputSensitivity params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UPhoenixCameraSettings::GetDirectorCam_FocusDistanceInputAcceleration() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraSettings.GetDirectorCam_FocusDistanceInputAcceleration"));
    struct Params_GetDirectorCam_FocusDistanceInputAcceleration {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetDirectorCam_FocusDistanceInputAcceleration params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
bool UPhoenixCameraSettings::GetDirectorCam_DollyInLocalSpace() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraSettings.GetDirectorCam_DollyInLocalSpace"));
    struct Params_GetDirectorCam_DollyInLocalSpace {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetDirectorCam_DollyInLocalSpace params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
float UPhoenixCameraSettings::GetDirectorCam_Aperture() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraSettings.GetDirectorCam_Aperture"));
    struct Params_GetDirectorCam_Aperture {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetDirectorCam_Aperture params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UPhoenixCameraSettings::GetDirectorCam_AmbientIntensity() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraSettings.GetDirectorCam_AmbientIntensity"));
    struct Params_GetDirectorCam_AmbientIntensity {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetDirectorCam_AmbientIntensity params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UPhoenixCameraSettings::GetDirectorCam_AmbientFrequency() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraSettings.GetDirectorCam_AmbientFrequency"));
    struct Params_GetDirectorCam_AmbientFrequency {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetDirectorCam_AmbientFrequency params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
bool UPhoenixCameraSettings::GetDepthOfField() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraSettings.GetDepthOfField"));
    struct Params_GetDepthOfField {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetDepthOfField params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UPhoenixCameraSettings::GetCineCameraShake() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraSettings.GetCineCameraShake"));
    struct Params_GetCineCameraShake {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetCineCameraShake params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UPhoenixCameraSettings::GetChromaticAberration() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraSettings.GetChromaticAberration"));
    struct Params_GetChromaticAberration {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetChromaticAberration params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
float UPhoenixCameraSettings::GetAmountMotionBlur() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraSettings.GetAmountMotionBlur"));
    struct Params_GetAmountMotionBlur {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetAmountMotionBlur params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UPhoenixCameraSettings::GetAimAssistStrength() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraSettings.GetAimAssistStrength"));
    struct Params_GetAimAssistStrength {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetAimAssistStrength params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UPhoenixCameraSettings::ApplyToCameraManager(APlayerController* PC) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraSettings.ApplyToCameraManager"));
    struct Params_ApplyToCameraManager {
        APlayerController* PC; // 0x0
    }; // Size: 0x8
    Params_ApplyToCameraManager params{};
    params.PC = (APlayerController*)PC;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UPhoenixCameraSettings::Apply(UObject* InWorldContextObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraSettings.Apply"));
    struct Params_Apply {
        UObject* InWorldContextObject; // 0x0
    }; // Size: 0x8
    Params_Apply params{};
    params.InWorldContextObject = (UObject*)InWorldContextObject;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
