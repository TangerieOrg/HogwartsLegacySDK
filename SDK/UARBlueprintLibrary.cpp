#include "EARCaptureType.hpp"
#include "EARObjectClassification.hpp"
#include "EARSceneReconstruction.hpp"
#include "EARSessionTrackingFeature.hpp"
#include "EARSessionType.hpp"
#include "EARTextureType.hpp"
#include "EARTrackingQuality.hpp"
#include "EARTrackingQualityReason.hpp"
#include "EARWorldMappingState.hpp"
#include "FARCameraIntrinsics.hpp"
#include "FARPose2D.hpp"
#include "FARSessionStatus.hpp"
#include "FARTraceResult.hpp"
#include "FARVideoFormat.hpp"
#include "FIntPoint.hpp"
#include "FLinearColor.hpp"
#include "FRotator.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "UARBlueprintLibrary.hpp"
#include "UARCandidateImage.hpp"
#include "UAREnvironmentCaptureProbe.hpp"
#include "UARLightEstimate.hpp"
#include "UARPin.hpp"
#include "UARPlaneGeometry.hpp"
#include "UARSessionConfig.hpp"
#include "UARTexture.hpp"
#include "UARTextureCameraDepth.hpp"
#include "UARTextureCameraImage.hpp"
#include "UARTrackedGeometry.hpp"
#include "UARTrackedImage.hpp"
#include "UARTrackedPoint.hpp"
#include "UARTrackedPose.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "USceneComponent.hpp"
#include "UTexture2D.hpp"
bool UARBlueprintLibrary::IsSessionTrackingFeatureSupported(EARSessionType SessionType, EARSessionTrackingFeature SessionTrackingFeature) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARBlueprintLibrary.IsSessionTrackingFeatureSupported"));
    struct Params_IsSessionTrackingFeatureSupported {
        EARSessionType SessionType; // 0x0
        EARSessionTrackingFeature SessionTrackingFeature; // 0x1
        bool ReturnValue; // 0x2
    }; // Size: 0x3
    Params_IsSessionTrackingFeatureSupported params{};
    params.SessionType = (EARSessionType)SessionType;
    params.SessionTrackingFeature = (EARSessionTrackingFeature)SessionTrackingFeature;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UARBlueprintLibrary* UARBlueprintLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/AugmentedReality.ARBlueprintLibrary");
    return (UARBlueprintLibrary*)res;
}
bool UARBlueprintLibrary::ToggleARCapture(bool bOnOff, EARCaptureType CaptureType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARBlueprintLibrary.ToggleARCapture"));
    struct Params_ToggleARCapture {
        bool bOnOff; // 0x0
        EARCaptureType CaptureType; // 0x1
        bool ReturnValue; // 0x2
    }; // Size: 0x3
    Params_ToggleARCapture params{};
    params.bOnOff = (bool)bOnOff;
    params.CaptureType = (EARCaptureType)CaptureType;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UARTextureCameraImage* UARBlueprintLibrary::GetCameraImage() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARBlueprintLibrary.GetCameraImage"));
    struct Params_GetCameraImage {
        UARTextureCameraImage* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetCameraImage params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UARTextureCameraImage*)params.ReturnValue;
}
void UARBlueprintLibrary::StopARSession() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARBlueprintLibrary.StopARSession"));
    struct Params_StopARSession {
    }; // Size: 0x0
    Params_StopARSession params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UARBlueprintLibrary::UnpinComponent(USceneComponent* ComponentToUnpin) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARBlueprintLibrary.UnpinComponent"));
    struct Params_UnpinComponent {
        USceneComponent* ComponentToUnpin; // 0x0
    }; // Size: 0x8
    Params_UnpinComponent params{};
    params.ComponentToUnpin = (USceneComponent*)ComponentToUnpin;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UARBlueprintLibrary::StartARSession(UARSessionConfig* SessionConfig) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARBlueprintLibrary.StartARSession"));
    struct Params_StartARSession {
        UARSessionConfig* SessionConfig; // 0x0
    }; // Size: 0x8
    Params_StartARSession params{};
    params.SessionConfig = (UARSessionConfig*)SessionConfig;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
UARTexture* UARBlueprintLibrary::GetPersonSegmentationDepthImage() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARBlueprintLibrary.GetPersonSegmentationDepthImage"));
    struct Params_GetPersonSegmentationDepthImage {
        UARTexture* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetPersonSegmentationDepthImage params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UARTexture*)params.ReturnValue;
}
void UARBlueprintLibrary::SetEnabledXRCamera(bool bOnOff) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARBlueprintLibrary.SetEnabledXRCamera"));
    struct Params_SetEnabledXRCamera {
        bool bOnOff; // 0x0
    }; // Size: 0x1
    Params_SetEnabledXRCamera params{};
    params.bOnOff = (bool)bOnOff;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
TArray<UARTrackedPoint*> UARBlueprintLibrary::FindTrackedPointsByName(FString PointName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARBlueprintLibrary.FindTrackedPointsByName"));
    struct Params_FindTrackedPointsByName {
        FString PointName; // 0x0
        TArray<UARTrackedPoint*> ReturnValue; // 0x10
    }; // Size: 0x20
    Params_FindTrackedPointsByName params{};
    params.PointName = (FString)PointName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<UARTrackedPoint*>)params.ReturnValue;
}
TArray<UAREnvironmentCaptureProbe*> UARBlueprintLibrary::GetAllTrackedEnvironmentCaptureProbes() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARBlueprintLibrary.GetAllTrackedEnvironmentCaptureProbes"));
    struct Params_GetAllTrackedEnvironmentCaptureProbes {
        TArray<UAREnvironmentCaptureProbe*> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetAllTrackedEnvironmentCaptureProbes params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<UAREnvironmentCaptureProbe*>)params.ReturnValue;
}
void UARBlueprintLibrary::SetARWorldScale(float InWorldScale) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARBlueprintLibrary.SetARWorldScale"));
    struct Params_SetARWorldScale {
        float InWorldScale; // 0x0
    }; // Size: 0x4
    Params_SetARWorldScale params{};
    params.InWorldScale = (float)InWorldScale;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
int32_t UARBlueprintLibrary::GetNumberOfTrackedFacesSupported() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARBlueprintLibrary.GetNumberOfTrackedFacesSupported"));
    struct Params_GetNumberOfTrackedFacesSupported {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetNumberOfTrackedFacesSupported params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void UARBlueprintLibrary::SetARWorldOriginLocationAndRotation(FVector OriginLocation, FRotator OriginRotation, bool bIsTransformInWorldSpace, bool bMaintainUpDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARBlueprintLibrary.SetARWorldOriginLocationAndRotation"));
    struct Params_SetARWorldOriginLocationAndRotation {
        FVector OriginLocation; // 0x0
        FRotator OriginRotation; // 0xc
        bool bIsTransformInWorldSpace; // 0x18
        bool bMaintainUpDirection; // 0x19
    }; // Size: 0x1a
    Params_SetARWorldOriginLocationAndRotation params{};
    params.OriginLocation = (FVector)OriginLocation;
    params.OriginRotation = (FRotator)OriginRotation;
    params.bIsTransformInWorldSpace = (bool)bIsTransformInWorldSpace;
    params.bMaintainUpDirection = (bool)bMaintainUpDirection;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
bool UARBlueprintLibrary::AddManualEnvironmentCaptureProbe(FVector Location, FVector Extent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARBlueprintLibrary.AddManualEnvironmentCaptureProbe"));
    struct Params_AddManualEnvironmentCaptureProbe {
        FVector Location; // 0x0
        FVector Extent; // 0xc
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_AddManualEnvironmentCaptureProbe params{};
    params.Location = (FVector)Location;
    params.Extent = (FVector)Extent;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
TArray<UARTrackedPose*> UARBlueprintLibrary::GetAllTrackedPoses() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARBlueprintLibrary.GetAllTrackedPoses"));
    struct Params_GetAllTrackedPoses {
        TArray<UARTrackedPose*> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetAllTrackedPoses params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<UARTrackedPose*>)params.ReturnValue;
}
float UARBlueprintLibrary::GetARWorldScale() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARBlueprintLibrary.GetARWorldScale"));
    struct Params_GetARWorldScale {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetARWorldScale params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UARBlueprintLibrary::SetAlignmentTransform(FTransform& InAlignmentTransform) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARBlueprintLibrary.SetAlignmentTransform"));
    struct Params_SetAlignmentTransform {
        FTransform InAlignmentTransform; // 0x0
    }; // Size: 0x30
    Params_SetAlignmentTransform params{};
    params.InAlignmentTransform = (FTransform)InAlignmentTransform;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InAlignmentTransform = params.InAlignmentTransform;
}
UARPin* UARBlueprintLibrary::PinComponentToTraceResult(USceneComponent* ComponentToPin, FARTraceResult& TraceResult, FName DebugName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARBlueprintLibrary.PinComponentToTraceResult"));
    struct Params_PinComponentToTraceResult {
        USceneComponent* ComponentToPin; // 0x0
        char pad_8[0x8];
        FARTraceResult TraceResult; // 0x10
        FName DebugName; // 0x70
        UARPin* ReturnValue; // 0x78
    }; // Size: 0x80
    Params_PinComponentToTraceResult params{};
    params.ComponentToPin = (USceneComponent*)ComponentToPin;
    params.TraceResult = (FARTraceResult)TraceResult;
    params.DebugName = (FName)DebugName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    TraceResult = params.TraceResult;
    return (UARPin*)params.ReturnValue;
}
bool UARBlueprintLibrary::SaveARPinToLocalStore(FName InSaveName, UARPin* InPin) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARBlueprintLibrary.SaveARPinToLocalStore"));
    struct Params_SaveARPinToLocalStore {
        FName InSaveName; // 0x0
        UARPin* InPin; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_SaveARPinToLocalStore params{};
    params.InSaveName = (FName)InSaveName;
    params.InPin = (UARPin*)InPin;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
TArray<FARPose2D> UARBlueprintLibrary::GetAllTracked2DPoses() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARBlueprintLibrary.GetAllTracked2DPoses"));
    struct Params_GetAllTracked2DPoses {
        TArray<FARPose2D> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetAllTracked2DPoses params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<FARPose2D>)params.ReturnValue;
}
FIntPoint UARBlueprintLibrary::ResizeXRCamera(FIntPoint& InSize) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARBlueprintLibrary.ResizeXRCamera"));
    struct Params_ResizeXRCamera {
        FIntPoint InSize; // 0x0
        FIntPoint ReturnValue; // 0x8
    }; // Size: 0x10
    Params_ResizeXRCamera params{};
    params.InSize = (FIntPoint)InSize;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InSize = params.InSize;
    return (FIntPoint)params.ReturnValue;
}
void UARBlueprintLibrary::RemovePin(UARPin* PinToRemove) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARBlueprintLibrary.RemovePin"));
    struct Params_RemovePin {
        UARPin* PinToRemove; // 0x0
    }; // Size: 0x8
    Params_RemovePin params{};
    params.PinToRemove = (UARPin*)PinToRemove;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UARBlueprintLibrary::RemoveARPinFromLocalStore(FName InSaveName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARBlueprintLibrary.RemoveARPinFromLocalStore"));
    struct Params_RemoveARPinFromLocalStore {
        FName InSaveName; // 0x0
    }; // Size: 0x8
    Params_RemoveARPinFromLocalStore params{};
    params.InSaveName = (FName)InSaveName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UARBlueprintLibrary::RemoveAllARPinsFromLocalStore() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARBlueprintLibrary.RemoveAllARPinsFromLocalStore"));
    struct Params_RemoveAllARPinsFromLocalStore {
    }; // Size: 0x0
    Params_RemoveAllARPinsFromLocalStore params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
UARLightEstimate* UARBlueprintLibrary::GetCurrentLightEstimate() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARBlueprintLibrary.GetCurrentLightEstimate"));
    struct Params_GetCurrentLightEstimate {
        UARLightEstimate* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetCurrentLightEstimate params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UARLightEstimate*)params.ReturnValue;
}
bool UARBlueprintLibrary::PinComponentToARPin(USceneComponent* ComponentToPin, UARPin* Pin) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARBlueprintLibrary.PinComponentToARPin"));
    struct Params_PinComponentToARPin {
        USceneComponent* ComponentToPin; // 0x0
        UARPin* Pin; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_PinComponentToARPin params{};
    params.ComponentToPin = (USceneComponent*)ComponentToPin;
    params.Pin = (UARPin*)Pin;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UARBlueprintLibrary::AddTrackedPointWithName(FTransform& WorldTransform, FString PointName, bool bDeletePointsWithSameName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARBlueprintLibrary.AddTrackedPointWithName"));
    struct Params_AddTrackedPointWithName {
        FTransform WorldTransform; // 0x0
        FString PointName; // 0x30
        bool bDeletePointsWithSameName; // 0x40
        bool ReturnValue; // 0x41
    }; // Size: 0x42
    Params_AddTrackedPointWithName params{};
    params.WorldTransform = (FTransform)WorldTransform;
    params.PointName = (FString)PointName;
    params.bDeletePointsWithSameName = (bool)bDeletePointsWithSameName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    WorldTransform = params.WorldTransform;
    return (bool)params.ReturnValue;
}
UARPin* UARBlueprintLibrary::PinComponent(USceneComponent* ComponentToPin, FTransform& PinToWorldTransform, UARTrackedGeometry* TrackedGeometry, FName DebugName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARBlueprintLibrary.PinComponent"));
    struct Params_PinComponent {
        USceneComponent* ComponentToPin; // 0x0
        char pad_8[0x8];
        FTransform PinToWorldTransform; // 0x10
        UARTrackedGeometry* TrackedGeometry; // 0x40
        FName DebugName; // 0x48
        UARPin* ReturnValue; // 0x50
    }; // Size: 0x58
    Params_PinComponent params{};
    params.ComponentToPin = (USceneComponent*)ComponentToPin;
    params.PinToWorldTransform = (FTransform)PinToWorldTransform;
    params.TrackedGeometry = (UARTrackedGeometry*)TrackedGeometry;
    params.DebugName = (FName)DebugName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    PinToWorldTransform = params.PinToWorldTransform;
    return (UARPin*)params.ReturnValue;
}
void UARBlueprintLibrary::PauseARSession() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARBlueprintLibrary.PauseARSession"));
    struct Params_PauseARSession {
    }; // Size: 0x0
    Params_PauseARSession params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UARBlueprintLibrary::LoadARPinsFromLocalStore() {}
TArray<FARTraceResult> UARBlueprintLibrary::LineTraceTrackedObjects3D(FVector Start, FVector End, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects3D"));
    struct Params_LineTraceTrackedObjects3D {
        FVector Start; // 0x0
        FVector End; // 0xc
        bool bTestFeaturePoints; // 0x18
        bool bTestGroundPlane; // 0x19
        bool bTestPlaneExtents; // 0x1a
        bool bTestPlaneBoundaryPolygon; // 0x1b
        char pad_1c[0x4];
        TArray<FARTraceResult> ReturnValue; // 0x20
    }; // Size: 0x30
    Params_LineTraceTrackedObjects3D params{};
    params.Start = (FVector)Start;
    params.End = (FVector)End;
    params.bTestFeaturePoints = (bool)bTestFeaturePoints;
    params.bTestGroundPlane = (bool)bTestGroundPlane;
    params.bTestPlaneExtents = (bool)bTestPlaneExtents;
    params.bTestPlaneBoundaryPolygon = (bool)bTestPlaneBoundaryPolygon;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<FARTraceResult>)params.ReturnValue;
}
void UARBlueprintLibrary::CalculateClosestIntersection(TArray<FVector>& StartPoints, TArray<FVector>& EndPoints, FVector& ClosestIntersection) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARBlueprintLibrary.CalculateClosestIntersection"));
    struct Params_CalculateClosestIntersection {
        TArray<FVector> StartPoints; // 0x0
        TArray<FVector> EndPoints; // 0x10
        FVector ClosestIntersection; // 0x20
    }; // Size: 0x2c
    Params_CalculateClosestIntersection params{};
    params.StartPoints = (TArray<FVector>)StartPoints;
    params.EndPoints = (TArray<FVector>)EndPoints;
    params.ClosestIntersection = (FVector)ClosestIntersection;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    StartPoints = params.StartPoints;
    EndPoints = params.EndPoints;
    ClosestIntersection = params.ClosestIntersection;
}
TArray<FARTraceResult> UARBlueprintLibrary::LineTraceTrackedObjects(FVector2D ScreenCoord, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects"));
    struct Params_LineTraceTrackedObjects {
        FVector2D ScreenCoord; // 0x0
        bool bTestFeaturePoints; // 0x8
        bool bTestGroundPlane; // 0x9
        bool bTestPlaneExtents; // 0xa
        bool bTestPlaneBoundaryPolygon; // 0xb
        char pad_c[0x4];
        TArray<FARTraceResult> ReturnValue; // 0x10
    }; // Size: 0x20
    Params_LineTraceTrackedObjects params{};
    params.ScreenCoord = (FVector2D)ScreenCoord;
    params.bTestFeaturePoints = (bool)bTestFeaturePoints;
    params.bTestGroundPlane = (bool)bTestGroundPlane;
    params.bTestPlaneExtents = (bool)bTestPlaneExtents;
    params.bTestPlaneBoundaryPolygon = (bool)bTestPlaneBoundaryPolygon;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<FARTraceResult>)params.ReturnValue;
}
bool UARBlueprintLibrary::IsSessionTypeSupported(EARSessionType SessionType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARBlueprintLibrary.IsSessionTypeSupported"));
    struct Params_IsSessionTypeSupported {
        EARSessionType SessionType; // 0x0
        bool ReturnValue; // 0x1
    }; // Size: 0x2
    Params_IsSessionTypeSupported params{};
    params.SessionType = (EARSessionType)SessionType;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
TArray<UARPin*> UARBlueprintLibrary::GetAllPins() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARBlueprintLibrary.GetAllPins"));
    struct Params_GetAllPins {
        TArray<UARPin*> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetAllPins params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<UARPin*>)params.ReturnValue;
}
bool UARBlueprintLibrary::IsSceneReconstructionSupported(EARSessionType SessionType, EARSceneReconstruction SceneReconstructionMethod) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARBlueprintLibrary.IsSceneReconstructionSupported"));
    struct Params_IsSceneReconstructionSupported {
        EARSessionType SessionType; // 0x0
        EARSceneReconstruction SceneReconstructionMethod; // 0x1
        bool ReturnValue; // 0x2
    }; // Size: 0x3
    Params_IsSceneReconstructionSupported params{};
    params.SessionType = (EARSessionType)SessionType;
    params.SceneReconstructionMethod = (EARSceneReconstruction)SceneReconstructionMethod;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UARBlueprintLibrary::IsARSupported() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARBlueprintLibrary.IsARSupported"));
    struct Params_IsARSupported {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsARSupported params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UARBlueprintLibrary::IsARPinLocalStoreSupported() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARBlueprintLibrary.IsARPinLocalStoreSupported"));
    struct Params_IsARPinLocalStoreSupported {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsARPinLocalStoreSupported params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UARBlueprintLibrary::IsARPinLocalStoreReady() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARBlueprintLibrary.IsARPinLocalStoreReady"));
    struct Params_IsARPinLocalStoreReady {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsARPinLocalStoreReady params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
EARWorldMappingState UARBlueprintLibrary::GetWorldMappingStatus() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARBlueprintLibrary.GetWorldMappingStatus"));
    struct Params_GetWorldMappingStatus {
        EARWorldMappingState ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetWorldMappingStatus params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (EARWorldMappingState)params.ReturnValue;
}
void UARBlueprintLibrary::DebugDrawPin(UARPin* ARPin, UObject* WorldContextObject, FLinearColor Color, float Scale, float PersistForSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARBlueprintLibrary.DebugDrawPin"));
    struct Params_DebugDrawPin {
        UARPin* ARPin; // 0x0
        UObject* WorldContextObject; // 0x8
        FLinearColor Color; // 0x10
        float Scale; // 0x20
        float PersistForSeconds; // 0x24
    }; // Size: 0x28
    Params_DebugDrawPin params{};
    params.ARPin = (UARPin*)ARPin;
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Color = (FLinearColor)Color;
    params.Scale = (float)Scale;
    params.PersistForSeconds = (float)PersistForSeconds;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
EARTrackingQualityReason UARBlueprintLibrary::GetTrackingQualityReason() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARBlueprintLibrary.GetTrackingQualityReason"));
    struct Params_GetTrackingQualityReason {
        EARTrackingQualityReason ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetTrackingQualityReason params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (EARTrackingQualityReason)params.ReturnValue;
}
EARTrackingQuality UARBlueprintLibrary::GetTrackingQuality() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARBlueprintLibrary.GetTrackingQuality"));
    struct Params_GetTrackingQuality {
        EARTrackingQuality ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetTrackingQuality params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (EARTrackingQuality)params.ReturnValue;
}
bool UARBlueprintLibrary::GetObjectClassificationAtLocation(FVector& InWorldLocation, EARObjectClassification& OutClassification, FVector& OutClassificationLocation, float MaxLocationDiff) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARBlueprintLibrary.GetObjectClassificationAtLocation"));
    struct Params_GetObjectClassificationAtLocation {
        FVector InWorldLocation; // 0x0
        EARObjectClassification OutClassification; // 0xc
        char pad_d[0x3];
        FVector OutClassificationLocation; // 0x10
        float MaxLocationDiff; // 0x1c
        bool ReturnValue; // 0x20
    }; // Size: 0x21
    Params_GetObjectClassificationAtLocation params{};
    params.InWorldLocation = (FVector)InWorldLocation;
    params.OutClassification = (EARObjectClassification)OutClassification;
    params.OutClassificationLocation = (FVector)OutClassificationLocation;
    params.MaxLocationDiff = (float)MaxLocationDiff;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InWorldLocation = params.InWorldLocation;
    OutClassification = params.OutClassification;
    OutClassificationLocation = params.OutClassificationLocation;
    return (bool)params.ReturnValue;
}
TArray<FARVideoFormat> UARBlueprintLibrary::GetSupportedVideoFormats(EARSessionType SessionType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARBlueprintLibrary.GetSupportedVideoFormats"));
    struct Params_GetSupportedVideoFormats {
        EARSessionType SessionType; // 0x0
        char pad_1[0x7];
        TArray<FARVideoFormat> ReturnValue; // 0x8
    }; // Size: 0x18
    Params_GetSupportedVideoFormats params{};
    params.SessionType = (EARSessionType)SessionType;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<FARVideoFormat>)params.ReturnValue;
}
UARSessionConfig* UARBlueprintLibrary::GetSessionConfig() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARBlueprintLibrary.GetSessionConfig"));
    struct Params_GetSessionConfig {
        UARSessionConfig* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetSessionConfig params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UARSessionConfig*)params.ReturnValue;
}
TArray<FVector> UARBlueprintLibrary::GetPointCloud() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARBlueprintLibrary.GetPointCloud"));
    struct Params_GetPointCloud {
        TArray<FVector> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetPointCloud params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<FVector>)params.ReturnValue;
}
UARTexture* UARBlueprintLibrary::GetPersonSegmentationImage() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARBlueprintLibrary.GetPersonSegmentationImage"));
    struct Params_GetPersonSegmentationImage {
        UARTexture* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetPersonSegmentationImage params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UARTexture*)params.ReturnValue;
}
bool UARBlueprintLibrary::GetCameraIntrinsics(FARCameraIntrinsics& OutCameraIntrinsics) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARBlueprintLibrary.GetCameraIntrinsics"));
    struct Params_GetCameraIntrinsics {
        FARCameraIntrinsics OutCameraIntrinsics; // 0x0
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_GetCameraIntrinsics params{};
    params.OutCameraIntrinsics = (FARCameraIntrinsics)OutCameraIntrinsics;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    OutCameraIntrinsics = params.OutCameraIntrinsics;
    return (bool)params.ReturnValue;
}
UARTextureCameraDepth* UARBlueprintLibrary::GetCameraDepth() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARBlueprintLibrary.GetCameraDepth"));
    struct Params_GetCameraDepth {
        UARTextureCameraDepth* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetCameraDepth params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UARTextureCameraDepth*)params.ReturnValue;
}
UARTexture* UARBlueprintLibrary::GetARTexture(EARTextureType TextureType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARBlueprintLibrary.GetARTexture"));
    struct Params_GetARTexture {
        EARTextureType TextureType; // 0x0
        char pad_1[0x7];
        UARTexture* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetARTexture params{};
    params.TextureType = (EARTextureType)TextureType;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UARTexture*)params.ReturnValue;
}
FARSessionStatus UARBlueprintLibrary::GetARSessionStatus() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARBlueprintLibrary.GetARSessionStatus"));
    struct Params_GetARSessionStatus {
        FARSessionStatus ReturnValue; // 0x0
    }; // Size: 0x18
    Params_GetARSessionStatus params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FARSessionStatus)params.ReturnValue;
}
TArray<UARPlaneGeometry*> UARBlueprintLibrary::GetAllTrackedPlanes() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARBlueprintLibrary.GetAllTrackedPlanes"));
    struct Params_GetAllTrackedPlanes {
        TArray<UARPlaneGeometry*> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetAllTrackedPlanes params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<UARPlaneGeometry*>)params.ReturnValue;
}
TArray<UARTrackedPoint*> UARBlueprintLibrary::GetAllTrackedPoints() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARBlueprintLibrary.GetAllTrackedPoints"));
    struct Params_GetAllTrackedPoints {
        TArray<UARTrackedPoint*> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetAllTrackedPoints params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<UARTrackedPoint*>)params.ReturnValue;
}
TArray<UARTrackedGeometry*> UARBlueprintLibrary::GetAllGeometriesByClass(UClass* GeometryClass) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARBlueprintLibrary.GetAllGeometriesByClass"));
    struct Params_GetAllGeometriesByClass {
        UClass* GeometryClass; // 0x0
        TArray<UARTrackedGeometry*> ReturnValue; // 0x8
    }; // Size: 0x18
    Params_GetAllGeometriesByClass params{};
    params.GeometryClass = (UClass*)GeometryClass;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<UARTrackedGeometry*>)params.ReturnValue;
}
TArray<UARTrackedImage*> UARBlueprintLibrary::GetAllTrackedImages() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARBlueprintLibrary.GetAllTrackedImages"));
    struct Params_GetAllTrackedImages {
        TArray<UARTrackedImage*> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetAllTrackedImages params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<UARTrackedImage*>)params.ReturnValue;
}
TArray<UARTrackedGeometry*> UARBlueprintLibrary::GetAllGeometries() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARBlueprintLibrary.GetAllGeometries"));
    struct Params_GetAllGeometries {
        TArray<UARTrackedGeometry*> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetAllGeometries params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<UARTrackedGeometry*>)params.ReturnValue;
}
FTransform UARBlueprintLibrary::GetAlignmentTransform() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARBlueprintLibrary.GetAlignmentTransform"));
    struct Params_GetAlignmentTransform {
        FTransform ReturnValue; // 0x0
    }; // Size: 0x30
    Params_GetAlignmentTransform params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FTransform)params.ReturnValue;
}
void UARBlueprintLibrary::DebugDrawTrackedGeometry(UARTrackedGeometry* TrackedGeometry, UObject* WorldContextObject, FLinearColor Color, float OutlineThickness, float PersistForSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARBlueprintLibrary.DebugDrawTrackedGeometry"));
    struct Params_DebugDrawTrackedGeometry {
        UARTrackedGeometry* TrackedGeometry; // 0x0
        UObject* WorldContextObject; // 0x8
        FLinearColor Color; // 0x10
        float OutlineThickness; // 0x20
        float PersistForSeconds; // 0x24
    }; // Size: 0x28
    Params_DebugDrawTrackedGeometry params{};
    params.TrackedGeometry = (UARTrackedGeometry*)TrackedGeometry;
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Color = (FLinearColor)Color;
    params.OutlineThickness = (float)OutlineThickness;
    params.PersistForSeconds = (float)PersistForSeconds;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UARBlueprintLibrary::CalculateAlignmentTransform(FTransform& TransformInFirstCoordinateSystem, FTransform& TransformInSecondCoordinateSystem, FTransform& AlignmentTransform) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARBlueprintLibrary.CalculateAlignmentTransform"));
    struct Params_CalculateAlignmentTransform {
        FTransform TransformInFirstCoordinateSystem; // 0x0
        FTransform TransformInSecondCoordinateSystem; // 0x30
        FTransform AlignmentTransform; // 0x60
    }; // Size: 0x90
    Params_CalculateAlignmentTransform params{};
    params.TransformInFirstCoordinateSystem = (FTransform)TransformInFirstCoordinateSystem;
    params.TransformInSecondCoordinateSystem = (FTransform)TransformInSecondCoordinateSystem;
    params.AlignmentTransform = (FTransform)AlignmentTransform;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    TransformInSecondCoordinateSystem = params.TransformInSecondCoordinateSystem;
    TransformInFirstCoordinateSystem = params.TransformInFirstCoordinateSystem;
    AlignmentTransform = params.AlignmentTransform;
}
UARCandidateImage* UARBlueprintLibrary::AddRuntimeCandidateImage(UARSessionConfig* SessionConfig, UTexture2D* CandidateTexture, FString FriendlyName, float PhysicalWidth) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARBlueprintLibrary.AddRuntimeCandidateImage"));
    struct Params_AddRuntimeCandidateImage {
        UARSessionConfig* SessionConfig; // 0x0
        UTexture2D* CandidateTexture; // 0x8
        FString FriendlyName; // 0x10
        float PhysicalWidth; // 0x20
        char pad_24[0x4];
        UARCandidateImage* ReturnValue; // 0x28
    }; // Size: 0x30
    Params_AddRuntimeCandidateImage params{};
    params.SessionConfig = (UARSessionConfig*)SessionConfig;
    params.CandidateTexture = (UTexture2D*)CandidateTexture;
    params.FriendlyName = (FString)FriendlyName;
    params.PhysicalWidth = (float)PhysicalWidth;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UARCandidateImage*)params.ReturnValue;
}
