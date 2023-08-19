#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FPhoenixCameraSettingsData {
    float FieldOfViewOffset; // 0x0
    float InputSensitivityDefault; // 0x4
    float InputSensitivityAiming; // 0x8
    float InputAccelerationDefault; // 0xc
    float InputAccelerationAiming; // 0x10
    float AimAssistStrength; // 0x14
    float GamepadDeadzone; // 0x18
    bool bGamepadSouthpaw; // 0x1c
    bool bGamepadAimingSwitch; // 0x1d
    bool bInvertX; // 0x1e
    bool bInvertY; // 0x1f
    bool bInvertFlightY; // 0x20
    bool bToggleAim; // 0x21
    char pad_22[0x2];
    float FollowSpeed; // 0x24
    float CameraShake; // 0x28
    bool bCineCameraShake; // 0x2c
    bool bDepthOfField; // 0x2d
    bool bChromaticAberration; // 0x2e
    bool bFilmGrain; // 0x2f
    bool bMotionBlur; // 0x30
    char pad_31[0x3];
    float MotionBlurAmount; // 0x34
    float DirectorCam_RotationInputSensitivity; // 0x38
    float DirectorCam_RotationInputAcceleration; // 0x3c
    float DirectorCam_RollInputSensitivity; // 0x40
    float DirectorCam_RollInputAcceleration; // 0x44
    float DirectorCam_RotationFiltering; // 0x48
    float DirectorCam_MoveInputSensitivity; // 0x4c
    float DirectorCam_MoveInputAcceleration; // 0x50
    float DirectorCam_PedestalInputSensitivity; // 0x54
    float DirectorCam_PedestalInputAcceleration; // 0x58
    float DirectorCam_MoveFiltering; // 0x5c
    float DirectorCam_ZoomInputSensitivity; // 0x60
    float DirectorCam_ZoomInputAcceleration; // 0x64
    float DirectorCam_ZoomFiltering; // 0x68
    float DirectorCam_FocusDistanceInputSensitivity; // 0x6c
    float DirectorCam_FocusDistanceInputAcceleration; // 0x70
    float DirectorCam_FocusDistanceFiltering; // 0x74
    float DirectorCam_Aperture; // 0x78
    float DirectorCam_AmbientIntensity; // 0x7c
    float DirectorCam_AmbientFrequency; // 0x80
    bool bDirectorCam_DollyInLocalSpace; // 0x84
    bool bDirectorCam_TruckInLocalSpace; // 0x85
    bool bDirectorCam_PedestalInLocalSpace; // 0x86
    bool bDirectorCam_SwitchRollAndZoomInput; // 0x87
}; // Size: 0x88
#pragma pack(pop)
