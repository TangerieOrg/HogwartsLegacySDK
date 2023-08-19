#include "EControllerHand.hpp"
#include "EHMDTrackingOrigin\Type.hpp"
#include "EHMDWornState\Type.hpp"
#include "EOrientPositionSelector\Type.hpp"
#include "ESpectatorScreenMode.hpp"
#include "EXRDeviceConnectionResult\Type.hpp"
#include "EXRTrackedDeviceType.hpp"
#include "FKey.hpp"
#include "FRotator.hpp"
#include "FTimespan.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "FXRDeviceId.hpp"
#include "FXRGestureConfig.hpp"
#include "FXRHMDData.hpp"
#include "FXRMotionControllerData.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
#include "UHeadMountedDisplayFunctionLibrary.hpp"
#include "UObject.hpp"
#include "UTexture.hpp"
int32_t UHeadMountedDisplayFunctionLibrary::GetNumOfTrackingSensors() {
    static auto func = (UFunction*)(find_uobject("Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetNumOfTrackingSensors"));
    struct Params_GetNumOfTrackingSensors {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetNumOfTrackingSensors params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
UHeadMountedDisplayFunctionLibrary* UHeadMountedDisplayFunctionLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary");
    return (UHeadMountedDisplayFunctionLibrary*)res;
}
void UHeadMountedDisplayFunctionLibrary::UpdateExternalTrackingHMDPosition(FTransform& ExternalTrackingTransform) {
    static auto func = (UFunction*)(find_uobject("Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.UpdateExternalTrackingHMDPosition"));
    struct Params_UpdateExternalTrackingHMDPosition {
        FTransform ExternalTrackingTransform; // 0x0
    }; // Size: 0x30
    Params_UpdateExternalTrackingHMDPosition params{};
    params.ExternalTrackingTransform = (FTransform)ExternalTrackingTransform;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ExternalTrackingTransform = params.ExternalTrackingTransform;
}
void UHeadMountedDisplayFunctionLibrary::SetXRTimedInputActionDelegate(FName& ActionName) {}
EXRDeviceConnectionResult::Type UHeadMountedDisplayFunctionLibrary::ConnectRemoteXRDevice(FString IpAddress, int32_t BitRate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ConnectRemoteXRDevice"));
    struct Params_ConnectRemoteXRDevice {
        FString IpAddress; // 0x0
        int32_t BitRate; // 0x10
        EXRDeviceConnectionResult::Type ReturnValue; // 0x14
    }; // Size: 0x15
    Params_ConnectRemoteXRDevice params{};
    params.IpAddress = (FString)IpAddress;
    params.BitRate = (int32_t)BitRate;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (EXRDeviceConnectionResult::Type)params.ReturnValue;
}
void UHeadMountedDisplayFunctionLibrary::SetSpectatorScreenTexture(UTexture* inTexture) {
    static auto func = (UFunction*)(find_uobject("Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenTexture"));
    struct Params_SetSpectatorScreenTexture {
        UTexture* inTexture; // 0x0
    }; // Size: 0x8
    Params_SetSpectatorScreenTexture params{};
    params.inTexture = (UTexture*)inTexture;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UHeadMountedDisplayFunctionLibrary::GetMotionControllerData(UObject* WorldContext, EControllerHand Hand, FXRMotionControllerData& MotionControllerData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetMotionControllerData"));
    struct Params_GetMotionControllerData {
        UObject* WorldContext; // 0x0
        EControllerHand Hand; // 0x8
        char pad_9[0x7];
        FXRMotionControllerData MotionControllerData; // 0x10
    }; // Size: 0xb0
    Params_GetMotionControllerData params{};
    params.WorldContext = (UObject*)WorldContext;
    params.Hand = (EControllerHand)Hand;
    params.MotionControllerData = (FXRMotionControllerData)MotionControllerData;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    MotionControllerData = params.MotionControllerData;
}
void UHeadMountedDisplayFunctionLibrary::SetWorldToMetersScale(UObject* WorldContext, float NewScale) {
    static auto func = (UFunction*)(find_uobject("Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetWorldToMetersScale"));
    struct Params_SetWorldToMetersScale {
        UObject* WorldContext; // 0x0
        float NewScale; // 0x8
    }; // Size: 0xc
    Params_SetWorldToMetersScale params{};
    params.WorldContext = (UObject*)WorldContext;
    params.NewScale = (float)NewScale;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
bool UHeadMountedDisplayFunctionLibrary::IsSpectatorScreenModeControllable() {
    static auto func = (UFunction*)(find_uobject("Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsSpectatorScreenModeControllable"));
    struct Params_IsSpectatorScreenModeControllable {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsSpectatorScreenModeControllable params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UHeadMountedDisplayFunctionLibrary::SetXRDisconnectDelegate() {}
void UHeadMountedDisplayFunctionLibrary::SetTrackingOrigin(EHMDTrackingOrigin::Type Origin) {
    static auto func = (UFunction*)(find_uobject("Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetTrackingOrigin"));
    struct Params_SetTrackingOrigin {
        EHMDTrackingOrigin::Type Origin; // 0x0
    }; // Size: 0x1
    Params_SetTrackingOrigin params{};
    params.Origin = (EHMDTrackingOrigin::Type)Origin;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
FName UHeadMountedDisplayFunctionLibrary::GetHMDDeviceName() {
    static auto func = (UFunction*)(find_uobject("Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDDeviceName"));
    struct Params_GetHMDDeviceName {
        FName ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetHMDDeviceName params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
void UHeadMountedDisplayFunctionLibrary::SetSpectatorScreenModeTexturePlusEyeLayout(FVector2D EyeRectMin, FVector2D EyeRectMax, FVector2D TextureRectMin, FVector2D TextureRectMax, bool bDrawEyeFirst, bool bClearBlack, bool bUseAlpha) {
    static auto func = (UFunction*)(find_uobject("Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenModeTexturePlusEyeLayout"));
    struct Params_SetSpectatorScreenModeTexturePlusEyeLayout {
        FVector2D EyeRectMin; // 0x0
        FVector2D EyeRectMax; // 0x8
        FVector2D TextureRectMin; // 0x10
        FVector2D TextureRectMax; // 0x18
        bool bDrawEyeFirst; // 0x20
        bool bClearBlack; // 0x21
        bool bUseAlpha; // 0x22
    }; // Size: 0x23
    Params_SetSpectatorScreenModeTexturePlusEyeLayout params{};
    params.EyeRectMin = (FVector2D)EyeRectMin;
    params.EyeRectMax = (FVector2D)EyeRectMax;
    params.TextureRectMin = (FVector2D)TextureRectMin;
    params.TextureRectMax = (FVector2D)TextureRectMax;
    params.bDrawEyeFirst = (bool)bDrawEyeFirst;
    params.bClearBlack = (bool)bClearBlack;
    params.bUseAlpha = (bool)bUseAlpha;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
float UHeadMountedDisplayFunctionLibrary::GetScreenPercentage() {
    static auto func = (UFunction*)(find_uobject("Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetScreenPercentage"));
    struct Params_GetScreenPercentage {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetScreenPercentage params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UHeadMountedDisplayFunctionLibrary::SetSpectatorScreenMode(ESpectatorScreenMode Mode) {
    static auto func = (UFunction*)(find_uobject("Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenMode"));
    struct Params_SetSpectatorScreenMode {
        ESpectatorScreenMode Mode; // 0x0
    }; // Size: 0x1
    Params_SetSpectatorScreenMode params{};
    params.Mode = (ESpectatorScreenMode)Mode;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UHeadMountedDisplayFunctionLibrary::SetClippingPlanes(float Near, float Far) {
    static auto func = (UFunction*)(find_uobject("Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetClippingPlanes"));
    struct Params_SetClippingPlanes {
        float Near; // 0x0
        float Far; // 0x4
    }; // Size: 0x8
    Params_SetClippingPlanes params{};
    params.Near = (float)Near;
    params.Far = (float)Far;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UHeadMountedDisplayFunctionLibrary::EnableLowPersistenceMode(bool bEnable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnableLowPersistenceMode"));
    struct Params_EnableLowPersistenceMode {
        bool bEnable; // 0x0
    }; // Size: 0x1
    Params_EnableLowPersistenceMode params{};
    params.bEnable = (bool)bEnable;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UHeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition(float Yaw, EOrientPositionSelector::Type OPTIONS) {
    static auto func = (UFunction*)(find_uobject("Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ResetOrientationAndPosition"));
    struct Params_ResetOrientationAndPosition {
        float Yaw; // 0x0
        EOrientPositionSelector::Type OPTIONS; // 0x4
    }; // Size: 0x5
    Params_ResetOrientationAndPosition params{};
    params.Yaw = (float)Yaw;
    params.OPTIONS = (EOrientPositionSelector::Type)OPTIONS;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UHeadMountedDisplayFunctionLibrary::GetOrientationAndPosition(FRotator& DeviceRotation, FVector& DevicePosition) {
    static auto func = (UFunction*)(find_uobject("Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetOrientationAndPosition"));
    struct Params_GetOrientationAndPosition {
        FRotator DeviceRotation; // 0x0
        FVector DevicePosition; // 0xc
    }; // Size: 0x18
    Params_GetOrientationAndPosition params{};
    params.DeviceRotation = (FRotator)DeviceRotation;
    params.DevicePosition = (FVector)DevicePosition;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    DeviceRotation = params.DeviceRotation;
    DevicePosition = params.DevicePosition;
}
bool UHeadMountedDisplayFunctionLibrary::IsInLowPersistenceMode() {
    static auto func = (UFunction*)(find_uobject("Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsInLowPersistenceMode"));
    struct Params_IsInLowPersistenceMode {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsInLowPersistenceMode params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UHeadMountedDisplayFunctionLibrary::IsHeadMountedDisplayEnabled() {
    static auto func = (UFunction*)(find_uobject("Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsHeadMountedDisplayEnabled"));
    struct Params_IsHeadMountedDisplayEnabled {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsHeadMountedDisplayEnabled params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UHeadMountedDisplayFunctionLibrary::IsHeadMountedDisplayConnected() {
    static auto func = (UFunction*)(find_uobject("Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsHeadMountedDisplayConnected"));
    struct Params_IsHeadMountedDisplayConnected {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsHeadMountedDisplayConnected params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
EHMDTrackingOrigin::Type UHeadMountedDisplayFunctionLibrary::GetTrackingOrigin() {
    static auto func = (UFunction*)(find_uobject("Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingOrigin"));
    struct Params_GetTrackingOrigin {
        EHMDTrackingOrigin::Type ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetTrackingOrigin params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (EHMDTrackingOrigin::Type)params.ReturnValue;
}
bool UHeadMountedDisplayFunctionLibrary::IsDeviceTracking(FXRDeviceId& XRDeviceId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsDeviceTracking"));
    struct Params_IsDeviceTracking {
        FXRDeviceId XRDeviceId; // 0x0
        bool ReturnValue; // 0xc
    }; // Size: 0xd
    Params_IsDeviceTracking params{};
    params.XRDeviceId = (FXRDeviceId)XRDeviceId;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    XRDeviceId = params.XRDeviceId;
    return (bool)params.ReturnValue;
}
void UHeadMountedDisplayFunctionLibrary::GetDeviceWorldPose(UObject* WorldContext, FXRDeviceId& XRDeviceId, bool& bIsTracked, FRotator& Orientation, bool& bHasPositionalTracking, FVector& Position) {
    static auto func = (UFunction*)(find_uobject("Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetDeviceWorldPose"));
    struct Params_GetDeviceWorldPose {
        UObject* WorldContext; // 0x0
        FXRDeviceId XRDeviceId; // 0x8
        bool bIsTracked; // 0x14
        char pad_15[0x3];
        FRotator Orientation; // 0x18
        bool bHasPositionalTracking; // 0x24
        char pad_25[0x3];
        FVector Position; // 0x28
    }; // Size: 0x34
    Params_GetDeviceWorldPose params{};
    params.WorldContext = (UObject*)WorldContext;
    params.XRDeviceId = (FXRDeviceId)XRDeviceId;
    params.bIsTracked = (bool)bIsTracked;
    params.Orientation = (FRotator)Orientation;
    params.bHasPositionalTracking = (bool)bHasPositionalTracking;
    params.Position = (FVector)Position;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bIsTracked = params.bIsTracked;
    XRDeviceId = params.XRDeviceId;
    Orientation = params.Orientation;
    Position = params.Position;
    bHasPositionalTracking = params.bHasPositionalTracking;
}
int32_t UHeadMountedDisplayFunctionLibrary::GetXRSystemFlags() {
    static auto func = (UFunction*)(find_uobject("Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetXRSystemFlags"));
    struct Params_GetXRSystemFlags {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetXRSystemFlags params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
bool UHeadMountedDisplayFunctionLibrary::HasValidTrackingPosition() {
    static auto func = (UFunction*)(find_uobject("Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.HasValidTrackingPosition"));
    struct Params_HasValidTrackingPosition {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HasValidTrackingPosition params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
float UHeadMountedDisplayFunctionLibrary::GetWorldToMetersScale(UObject* WorldContext) {
    static auto func = (UFunction*)(find_uobject("Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetWorldToMetersScale"));
    struct Params_GetWorldToMetersScale {
        UObject* WorldContext; // 0x0
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetWorldToMetersScale params{};
    params.WorldContext = (UObject*)WorldContext;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
bool UHeadMountedDisplayFunctionLibrary::GetControllerTransformForTime(UObject* WorldContext, int32_t ControllerIndex, FName MotionSource, FTimespan Time, bool& bTimeWasUsed, FRotator& Orientation, FVector& Position, bool& bProvidedLinearVelocity, FVector& LinearVelocity, bool& bProvidedAngularVelocity, FVector& AngularVelocityRadPerSec, bool& bProvidedLinearAcceleration, FVector& LinearAcceleration) {
    static auto func = (UFunction*)(find_uobject("Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetControllerTransformForTime"));
    struct Params_GetControllerTransformForTime {
        UObject* WorldContext; // 0x0
        int32_t ControllerIndex; // 0x8
        FName MotionSource; // 0xc
        char pad_14[0x4];
        FTimespan Time; // 0x18
        bool bTimeWasUsed; // 0x20
        char pad_21[0x3];
        FRotator Orientation; // 0x24
        FVector Position; // 0x30
        bool bProvidedLinearVelocity; // 0x3c
        char pad_3d[0x3];
        FVector LinearVelocity; // 0x40
        bool bProvidedAngularVelocity; // 0x4c
        char pad_4d[0x3];
        FVector AngularVelocityRadPerSec; // 0x50
        bool bProvidedLinearAcceleration; // 0x5c
        char pad_5d[0x3];
        FVector LinearAcceleration; // 0x60
        bool ReturnValue; // 0x6c
    }; // Size: 0x6d
    Params_GetControllerTransformForTime params{};
    params.WorldContext = (UObject*)WorldContext;
    params.ControllerIndex = (int32_t)ControllerIndex;
    params.MotionSource = (FName)MotionSource;
    params.Time = (FTimespan)Time;
    params.bTimeWasUsed = (bool)bTimeWasUsed;
    params.Orientation = (FRotator)Orientation;
    params.Position = (FVector)Position;
    params.bProvidedLinearVelocity = (bool)bProvidedLinearVelocity;
    params.LinearVelocity = (FVector)LinearVelocity;
    params.bProvidedAngularVelocity = (bool)bProvidedAngularVelocity;
    params.AngularVelocityRadPerSec = (FVector)AngularVelocityRadPerSec;
    params.bProvidedLinearAcceleration = (bool)bProvidedLinearAcceleration;
    params.LinearAcceleration = (FVector)LinearAcceleration;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bTimeWasUsed = params.bTimeWasUsed;
    Orientation = params.Orientation;
    bProvidedLinearAcceleration = params.bProvidedLinearAcceleration;
    Position = params.Position;
    bProvidedLinearVelocity = params.bProvidedLinearVelocity;
    LinearVelocity = params.LinearVelocity;
    AngularVelocityRadPerSec = params.AngularVelocityRadPerSec;
    bProvidedAngularVelocity = params.bProvidedAngularVelocity;
    LinearAcceleration = params.LinearAcceleration;
    return (bool)params.ReturnValue;
}
void UHeadMountedDisplayFunctionLibrary::GetVRFocusState(bool& bUseFocus, bool& bHasFocus) {
    static auto func = (UFunction*)(find_uobject("Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetVRFocusState"));
    struct Params_GetVRFocusState {
        bool bUseFocus; // 0x0
        bool bHasFocus; // 0x1
    }; // Size: 0x2
    Params_GetVRFocusState params{};
    params.bUseFocus = (bool)bUseFocus;
    params.bHasFocus = (bool)bHasFocus;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bUseFocus = params.bUseFocus;
    bHasFocus = params.bHasFocus;
}
FTransform UHeadMountedDisplayFunctionLibrary::GetTrackingToWorldTransform(UObject* WorldContext) {
    static auto func = (UFunction*)(find_uobject("Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingToWorldTransform"));
    struct Params_GetTrackingToWorldTransform {
        UObject* WorldContext; // 0x0
        char pad_8[0x8];
        FTransform ReturnValue; // 0x10
    }; // Size: 0x40
    Params_GetTrackingToWorldTransform params{};
    params.WorldContext = (UObject*)WorldContext;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FTransform)params.ReturnValue;
}
FString UHeadMountedDisplayFunctionLibrary::GetVersionString() {
    static auto func = (UFunction*)(find_uobject("Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetVersionString"));
    struct Params_GetVersionString {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetVersionString params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
void UHeadMountedDisplayFunctionLibrary::GetTrackingSensorParameters(FVector& Origin, FRotator& Rotation, float& LeftFOV, float& RightFOV, float& TopFOV, float& BottomFOV, float& Distance, float& NearPlane, float& FarPlane, bool& IsActive, int32_t Index) {
    static auto func = (UFunction*)(find_uobject("Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingSensorParameters"));
    struct Params_GetTrackingSensorParameters {
        FVector Origin; // 0x0
        FRotator Rotation; // 0xc
        float LeftFOV; // 0x18
        float RightFOV; // 0x1c
        float TopFOV; // 0x20
        float BottomFOV; // 0x24
        float Distance; // 0x28
        float NearPlane; // 0x2c
        float FarPlane; // 0x30
        bool IsActive; // 0x34
        char pad_35[0x3];
        int32_t Index; // 0x38
    }; // Size: 0x3c
    Params_GetTrackingSensorParameters params{};
    params.Origin = (FVector)Origin;
    params.Rotation = (FRotator)Rotation;
    params.LeftFOV = (float)LeftFOV;
    params.RightFOV = (float)RightFOV;
    params.TopFOV = (float)TopFOV;
    params.BottomFOV = (float)BottomFOV;
    params.Distance = (float)Distance;
    params.NearPlane = (float)NearPlane;
    params.FarPlane = (float)FarPlane;
    params.IsActive = (bool)IsActive;
    params.Index = (int32_t)Index;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Origin = params.Origin;
    Rotation = params.Rotation;
    NearPlane = params.NearPlane;
    Distance = params.Distance;
    LeftFOV = params.LeftFOV;
    RightFOV = params.RightFOV;
    BottomFOV = params.BottomFOV;
    TopFOV = params.TopFOV;
    FarPlane = params.FarPlane;
    IsActive = params.IsActive;
}
void UHeadMountedDisplayFunctionLibrary::GetPositionalTrackingCameraParameters(FVector& CameraOrigin, FRotator& CameraRotation, float& HFOV, float& VFOV, float& CameraDistance, float& NearPlane, float& FarPlane) {
    static auto func = (UFunction*)(find_uobject("Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPositionalTrackingCameraParameters"));
    struct Params_GetPositionalTrackingCameraParameters {
        FVector CameraOrigin; // 0x0
        FRotator CameraRotation; // 0xc
        float HFOV; // 0x18
        float VFOV; // 0x1c
        float CameraDistance; // 0x20
        float NearPlane; // 0x24
        float FarPlane; // 0x28
    }; // Size: 0x2c
    Params_GetPositionalTrackingCameraParameters params{};
    params.CameraOrigin = (FVector)CameraOrigin;
    params.CameraRotation = (FRotator)CameraRotation;
    params.HFOV = (float)HFOV;
    params.VFOV = (float)VFOV;
    params.CameraDistance = (float)CameraDistance;
    params.NearPlane = (float)NearPlane;
    params.FarPlane = (float)FarPlane;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    FarPlane = params.FarPlane;
    CameraOrigin = params.CameraOrigin;
    CameraRotation = params.CameraRotation;
    HFOV = params.HFOV;
    VFOV = params.VFOV;
    CameraDistance = params.CameraDistance;
    NearPlane = params.NearPlane;
}
void UHeadMountedDisplayFunctionLibrary::ClearXRTimedInputActionDelegate(FName& ActionPath) {
    static auto func = (UFunction*)(find_uobject("Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ClearXRTimedInputActionDelegate"));
    struct Params_ClearXRTimedInputActionDelegate {
        FName ActionPath; // 0x0
    }; // Size: 0x8
    Params_ClearXRTimedInputActionDelegate params{};
    params.ActionPath = (FName)ActionPath;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ActionPath = params.ActionPath;
}
FVector2D UHeadMountedDisplayFunctionLibrary::GetPlayAreaBounds(EHMDTrackingOrigin::Type Origin) {
    static auto func = (UFunction*)(find_uobject("Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPlayAreaBounds"));
    struct Params_GetPlayAreaBounds {
        EHMDTrackingOrigin::Type Origin; // 0x0
        char pad_1[0x3];
        FVector2D ReturnValue; // 0x4
    }; // Size: 0xc
    Params_GetPlayAreaBounds params{};
    params.Origin = (EHMDTrackingOrigin::Type)Origin;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector2D)params.ReturnValue;
}
float UHeadMountedDisplayFunctionLibrary::GetPixelDensity() {
    static auto func = (UFunction*)(find_uobject("Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPixelDensity"));
    struct Params_GetPixelDensity {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetPixelDensity params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
EHMDWornState::Type UHeadMountedDisplayFunctionLibrary::GetHMDWornState() {
    static auto func = (UFunction*)(find_uobject("Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDWornState"));
    struct Params_GetHMDWornState {
        EHMDWornState::Type ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetHMDWornState params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (EHMDWornState::Type)params.ReturnValue;
}
void UHeadMountedDisplayFunctionLibrary::GetHMDData(UObject* WorldContext, FXRHMDData& HMDData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDData"));
    struct Params_GetHMDData {
        UObject* WorldContext; // 0x0
        char pad_8[0x8];
        FXRHMDData HMDData; // 0x10
    }; // Size: 0x50
    Params_GetHMDData params{};
    params.WorldContext = (UObject*)WorldContext;
    params.HMDData = (FXRHMDData)HMDData;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    HMDData = params.HMDData;
}
void UHeadMountedDisplayFunctionLibrary::GetDevicePose(FXRDeviceId& XRDeviceId, bool& bIsTracked, FRotator& Orientation, bool& bHasPositionalTracking, FVector& Position) {
    static auto func = (UFunction*)(find_uobject("Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetDevicePose"));
    struct Params_GetDevicePose {
        FXRDeviceId XRDeviceId; // 0x0
        bool bIsTracked; // 0xc
        char pad_d[0x3];
        FRotator Orientation; // 0x10
        bool bHasPositionalTracking; // 0x1c
        char pad_1d[0x3];
        FVector Position; // 0x20
    }; // Size: 0x2c
    Params_GetDevicePose params{};
    params.XRDeviceId = (FXRDeviceId)XRDeviceId;
    params.bIsTracked = (bool)bIsTracked;
    params.Orientation = (FRotator)Orientation;
    params.bHasPositionalTracking = (bool)bHasPositionalTracking;
    params.Position = (FVector)Position;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    XRDeviceId = params.XRDeviceId;
    bIsTracked = params.bIsTracked;
    Orientation = params.Orientation;
    bHasPositionalTracking = params.bHasPositionalTracking;
    Position = params.Position;
}
TArray<FXRDeviceId> UHeadMountedDisplayFunctionLibrary::EnumerateTrackedDevices(FName SystemId, EXRTrackedDeviceType DeviceType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnumerateTrackedDevices"));
    struct Params_EnumerateTrackedDevices {
        FName SystemId; // 0x0
        EXRTrackedDeviceType DeviceType; // 0x8
        char pad_9[0x7];
        TArray<FXRDeviceId> ReturnValue; // 0x10
    }; // Size: 0x20
    Params_EnumerateTrackedDevices params{};
    params.SystemId = (FName)SystemId;
    params.DeviceType = (EXRTrackedDeviceType)DeviceType;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<FXRDeviceId>)params.ReturnValue;
}
bool UHeadMountedDisplayFunctionLibrary::EnableHMD(bool bEnable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnableHMD"));
    struct Params_EnableHMD {
        bool bEnable; // 0x0
        bool ReturnValue; // 0x1
    }; // Size: 0x2
    Params_EnableHMD params{};
    params.bEnable = (bool)bEnable;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UHeadMountedDisplayFunctionLibrary::DisconnectRemoteXRDevice() {
    static auto func = (UFunction*)(find_uobject("Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.DisconnectRemoteXRDevice"));
    struct Params_DisconnectRemoteXRDevice {
    }; // Size: 0x0
    Params_DisconnectRemoteXRDevice params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
bool UHeadMountedDisplayFunctionLibrary::ConfigureGestures(FXRGestureConfig& GestureConfig) {
    static auto func = (UFunction*)(find_uobject("Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ConfigureGestures"));
    struct Params_ConfigureGestures {
        FXRGestureConfig GestureConfig; // 0x0
        bool ReturnValue; // 0x6
    }; // Size: 0x7
    Params_ConfigureGestures params{};
    params.GestureConfig = (FXRGestureConfig)GestureConfig;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    GestureConfig = params.GestureConfig;
    return (bool)params.ReturnValue;
}
void UHeadMountedDisplayFunctionLibrary::CalibrateExternalTrackingToHMD(FTransform& ExternalTrackingTransform) {
    static auto func = (UFunction*)(find_uobject("Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.CalibrateExternalTrackingToHMD"));
    struct Params_CalibrateExternalTrackingToHMD {
        FTransform ExternalTrackingTransform; // 0x0
    }; // Size: 0x30
    Params_CalibrateExternalTrackingToHMD params{};
    params.ExternalTrackingTransform = (FTransform)ExternalTrackingTransform;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ExternalTrackingTransform = params.ExternalTrackingTransform;
}
void UHeadMountedDisplayFunctionLibrary::BreakKey(FKey InKey, FString& InteractionProfile, EControllerHand& Hand, FName& MotionSource, FString& Indentifier, FString& Component) {
    static auto func = (UFunction*)(find_uobject("Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.BreakKey"));
    struct Params_BreakKey {
        FKey InKey; // 0x0
        FString InteractionProfile; // 0x18
        EControllerHand Hand; // 0x28
        char pad_29[0x3];
        FName MotionSource; // 0x2c
        char pad_34[0x4];
        FString Indentifier; // 0x38
        FString Component; // 0x48
    }; // Size: 0x58
    Params_BreakKey params{};
    params.InKey = (FKey)InKey;
    params.InteractionProfile = (FString)InteractionProfile;
    params.Hand = (EControllerHand)Hand;
    params.MotionSource = (FName)MotionSource;
    params.Indentifier = (FString)Indentifier;
    params.Component = (FString)Component;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InteractionProfile = params.InteractionProfile;
    Hand = params.Hand;
    MotionSource = params.MotionSource;
    Indentifier = params.Indentifier;
    Component = params.Component;
}
