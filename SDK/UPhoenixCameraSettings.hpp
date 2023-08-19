#pragma once
#include <cstdint>
#include "FPhoenixCameraSettingsData.hpp"
#include "UObject.hpp"
class APlayerController;
#pragma pack(push, 1)
class UPhoenixCameraSettings : public UObject {
public:
    FPhoenixCameraSettingsData SettingsData; // 0x28
    bool bDirty; // 0xb0
    char pad_b1[0x7];
    static UPhoenixCameraSettings* StaticClass();
    static void SetToggleAim(bool bInToggleAim);
    static void SetSpeedFollowCamera(float InFollowSpeed);
    static void SetSettingsData(FPhoenixCameraSettingsData& InSettingsData);
    static void SetMotionBlur(bool bInMotionBlur);
    static void SetInvertY(bool bInInvertY);
    static void SetInvertX(bool bInInvertX);
    static void SetInvertFlightY(bool bInInvertFlightY);
    static void SetInputSensitivityDefault(float InSensitivity);
    static void SetInputSensitivityAiming(float InSensitivity);
    static void SetInputAccelerationDefault(float InAcceleration);
    static void SetInputAccelerationAiming(float InAcceleration);
    static void SetGamepadSouthpaw(bool bInSouthpaw);
    static void SetGamepadDeadzone(float InDeadzone);
    static void SetGamepadAimingSwitch(bool bInAimingSwitch);
    static bool SetFilmGrain(bool bInFilmGrain);
    static void SetFieldOfViewOffset(float InFieldOfViewOffset);
    static void SetDirectorCam_ZoomInputSensitivity(float InSensitivity);
    static void SetDirectorCam_ZoomInputAcceleration(float InAcceleration);
    static void SetDirectorCam_ZoomFiltering(float InFiltering);
    static void SetDirectorCam_TruckInLocalSpace(bool bInValue);
    static void SetDirectorCam_SwitchRollAndZoomInput(bool bInValue);
    static void SetDirectorCam_RotationInputSensitivity(float InSensitivity);
    static void SetDirectorCam_RotationInputAcceleration(float InAcceleration);
    static void SetDirectorCam_RotationFiltering(float InFiltering);
    static void SetDirectorCam_RollInputSensitivity(float InSensitivity);
    static void SetDirectorCam_RollInputAcceleration(float InAcceleration);
    static void SetDirectorCam_PedestalInputSensitivity(float InSensitivity);
    static void SetDirectorCam_PedestalInputAcceleration(float InAcceleration);
    static void SetDirectorCam_PedestalInLocalSpace(bool bInValue);
    static void SetDirectorCam_MoveInputSensitivity(float InSensitivity);
    static void SetDirectorCam_MoveInputAcceleration(float InAcceleration);
    static void SetDirectorCam_MoveFiltering(float InFiltering);
    static void SetDirectorCam_FocusDistanceInputSensitivity(float InSensitivity);
    static void SetDirectorCam_FocusDistanceInputAcceleration(float InAcceleration);
    static void SetDirectorCam_FocusDistanceFiltering(float InFiltering);
    static void SetDirectorCam_DollyInLocalSpace(bool bInValue);
    static void SetDirectorCam_Aperture(float InAperture);
    static void SetDirectorCam_AmbientIntensity(float InIntensity);
    static void SetDirectorCam_AmbientFrequency(float InFrequency);
    static void SetDepthOfField(bool bInDepthOfField);
    static void SetCineCameraShake(bool bInCineCameraShake);
    static bool SetChromaticAberration(bool bInChromaticAberration);
    static void SetCameraShake(float InCameraShake);
    static void SetAmountMotionBlur(float InMotionBlurAmount);
    static void SetAimAssistStrength(float InStrength);
    static void ResetGameplaySettings();
    static void ResetDisplaySettings();
    static void ResetConsoleDisplaySettings();
    static void ResetAccessibilitySettings();
    static bool GetToggleAim();
    static float GetSpeedFollowCamera();
    static FPhoenixCameraSettingsData GetSettingsData();
    static bool GetMotionBlur();
    static bool GetInvertY();
    static bool GetInvertX();
    static float GetInputSensitivityDefault();
    static float GetInputSensitivityAiming();
    static float GetInputAccelerationDefault();
    static float GetInputAccelerationAiming();
    static bool GetGamepadSouthpaw();
    static float GetGamepadDeadzone();
    static bool GetGamepadAimingSwitch();
    static bool GetFlightInvertY();
    static bool GetFilmGrain();
    static float GetFieldOfViewOffset();
    static bool GetDirty();
    static float GetDirectorCam_ZoomInputSensitivity();
    static float GetDirectorCam_ZoomInputAcceleration();
    static float GetDirectorCam_ZoomFiltering();
    static bool GetDirectorCam_TruckInLocalSpace();
    static bool GetDirectorCam_SwitchRollAndZoomInput();
    static float GetDirectorCam_RotationInputSensitivity();
    static float GetDirectorCam_RotationInputAcceleration();
    static float GetDirectorCam_RotationFiltering();
    static float GetDirectorCam_RollInputSensitivity();
    static float GetDirectorCam_RollInputAcceleration();
    static float GetDirectorCam_PedestalInputSensitivity();
    static float GetDirectorCam_PedestalInputAcceleration();
    static bool GetDirectorCam_PedestalInLocalSpace();
    static float GetDirectorCam_MoveInputSensitivity();
    static float GetDirectorCam_MoveInputAcceleration();
    static float GetDirectorCam_MoveFiltering();
    static float GetDirectorCam_FocusDistanceInputSensitivity();
    static float GetDirectorCam_FocusDistanceInputAcceleration();
    static float GetDirectorCam_FocusDistanceFiltering();
    static bool GetDirectorCam_DollyInLocalSpace();
    static float GetDirectorCam_Aperture();
    static float GetDirectorCam_AmbientIntensity();
    static float GetDirectorCam_AmbientFrequency();
    static bool GetDepthOfField();
    static bool GetCineCameraShake();
    static bool GetChromaticAberration();
    static float GetCameraShake();
    static float GetAppliedFieldOfView(UObject* InWorldContextObject);
    static float GetAmountMotionBlur();
    static float GetAimAssistStrength();
    static void ApplyToCameraManager(APlayerController* PC);
    static void Apply(UObject* InWorldContextObject);
}; // Size: 0xb8
#pragma pack(pop)
