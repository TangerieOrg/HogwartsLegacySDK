#pragma once
#include <cstdint>
#include "EControllerHand.hpp"
#include "EHMDTrackingOrigin\Type.hpp"
#include "EHMDWornState\Type.hpp"
#include "EOrientPositionSelector\Type.hpp"
#include "ESpectatorScreenMode.hpp"
#include "EXRDeviceConnectionResult\Type.hpp"
#include "EXRTrackedDeviceType.hpp"
#include "FKey.hpp"
#include "FTimespan.hpp"
#include "FTransform.hpp"
#include "FVector2D.hpp"
#include "FXRDeviceId.hpp"
#include "UBlueprintFunctionLibrary.hpp"
struct FVector;
struct FXRMotionControllerData;
class UObject;
class UTexture;
struct FRotator;
struct FXRHMDData;
struct FXRGestureConfig;
#pragma pack(push, 1)
class UHeadMountedDisplayFunctionLibrary : public UBlueprintFunctionLibrary {
public:
    static UHeadMountedDisplayFunctionLibrary* StaticClass();
    static void UpdateExternalTrackingHMDPosition(FTransform& ExternalTrackingTransform);
    static void SetXRTimedInputActionDelegate(FName& ActionName);
    static void SetXRDisconnectDelegate();
    static void SetWorldToMetersScale(UObject* WorldContext, float NewScale);
    static void SetTrackingOrigin(EHMDTrackingOrigin::Type Origin);
    static void SetSpectatorScreenTexture(UTexture* inTexture);
    static void SetSpectatorScreenModeTexturePlusEyeLayout(FVector2D EyeRectMin, FVector2D EyeRectMax, FVector2D TextureRectMin, FVector2D TextureRectMax, bool bDrawEyeFirst, bool bClearBlack, bool bUseAlpha);
    static void SetSpectatorScreenMode(ESpectatorScreenMode Mode);
    static void SetClippingPlanes(float Near, float Far);
    static void ResetOrientationAndPosition(float Yaw, EOrientPositionSelector::Type OPTIONS);
    static bool IsSpectatorScreenModeControllable();
    static bool IsInLowPersistenceMode();
    static bool IsHeadMountedDisplayEnabled();
    static bool IsHeadMountedDisplayConnected();
    static bool IsDeviceTracking(FXRDeviceId& XRDeviceId);
    static bool HasValidTrackingPosition();
    static int32_t GetXRSystemFlags();
    static float GetWorldToMetersScale(UObject* WorldContext);
    static void GetVRFocusState(bool& bUseFocus, bool& bHasFocus);
    static FString GetVersionString();
    static FTransform GetTrackingToWorldTransform(UObject* WorldContext);
    static void GetTrackingSensorParameters(FVector& Origin, FRotator& Rotation, float& LeftFOV, float& RightFOV, float& TopFOV, float& BottomFOV, float& Distance, float& NearPlane, float& FarPlane, bool& IsActive, int32_t Index);
    static EHMDTrackingOrigin::Type GetTrackingOrigin();
    static float GetScreenPercentage();
    static void GetPositionalTrackingCameraParameters(FVector& CameraOrigin, FRotator& CameraRotation, float& HFOV, float& VFOV, float& CameraDistance, float& NearPlane, float& FarPlane);
    static FVector2D GetPlayAreaBounds(EHMDTrackingOrigin::Type Origin);
    static float GetPixelDensity();
    static void GetOrientationAndPosition(FRotator& DeviceRotation, FVector& DevicePosition);
    static int32_t GetNumOfTrackingSensors();
    static void GetMotionControllerData(UObject* WorldContext, EControllerHand Hand, FXRMotionControllerData& MotionControllerData);
    static EHMDWornState::Type GetHMDWornState();
    static FName GetHMDDeviceName();
    static void GetHMDData(UObject* WorldContext, FXRHMDData& HMDData);
    static void GetDeviceWorldPose(UObject* WorldContext, FXRDeviceId& XRDeviceId, bool& bIsTracked, FRotator& Orientation, bool& bHasPositionalTracking, FVector& Position);
    static void GetDevicePose(FXRDeviceId& XRDeviceId, bool& bIsTracked, FRotator& Orientation, bool& bHasPositionalTracking, FVector& Position);
    static bool GetControllerTransformForTime(UObject* WorldContext, int32_t ControllerIndex, FName MotionSource, FTimespan Time, bool& bTimeWasUsed, FRotator& Orientation, FVector& Position, bool& bProvidedLinearVelocity, FVector& LinearVelocity, bool& bProvidedAngularVelocity, FVector& AngularVelocityRadPerSec, bool& bProvidedLinearAcceleration, FVector& LinearAcceleration);
    static TArray<FXRDeviceId> EnumerateTrackedDevices(FName SystemId, EXRTrackedDeviceType DeviceType);
    static void EnableLowPersistenceMode(bool bEnable);
    static bool EnableHMD(bool bEnable);
    static void DisconnectRemoteXRDevice();
    static EXRDeviceConnectionResult::Type ConnectRemoteXRDevice(FString IpAddress, int32_t BitRate);
    static bool ConfigureGestures(FXRGestureConfig& GestureConfig);
    static void ClearXRTimedInputActionDelegate(FName& ActionPath);
    static void CalibrateExternalTrackingToHMD(FTransform& ExternalTrackingTransform);
    static void BreakKey(FKey InKey, FString& InteractionProfile, EControllerHand& Hand, FName& MotionSource, FString& Indentifier, FString& Component);
}; // Size: 0x28
#pragma pack(pop)
