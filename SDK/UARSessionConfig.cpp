#include "EAREnvironmentCaptureProbeType.hpp"
#include "EARFaceTrackingDirection.hpp"
#include "EARFaceTrackingUpdate.hpp"
#include "EARFrameSyncMode.hpp"
#include "EARLightEstimationMode.hpp"
#include "EARPlaneDetectionMode.hpp"
#include "EARSceneReconstruction.hpp"
#include "EARSessionTrackingFeature.hpp"
#include "EARSessionType.hpp"
#include "EARWorldAlignment.hpp"
#include "FARVideoFormat.hpp"
#include "UARCandidateImage.hpp"
#include "UARCandidateObject.hpp"
#include "UARSessionConfig.hpp"
#include "UClass.hpp"
#include "UDataAsset.hpp"
#include "UFunction.hpp"
#include "UMaterialInterface.hpp"
bool UARSessionConfig::ShouldEnableAutoFocus() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARSessionConfig.ShouldEnableAutoFocus"));
    struct Params_ShouldEnableAutoFocus {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_ShouldEnableAutoFocus params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FARVideoFormat UARSessionConfig::GetDesiredVideoFormat() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARSessionConfig.GetDesiredVideoFormat"));
    struct Params_GetDesiredVideoFormat {
        FARVideoFormat ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetDesiredVideoFormat params{};
    ProcessEvent(func, &params);
    return (FARVideoFormat)params.ReturnValue;
}
EARPlaneDetectionMode UARSessionConfig::GetPlaneDetectionMode() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARSessionConfig.GetPlaneDetectionMode"));
    struct Params_GetPlaneDetectionMode {
        EARPlaneDetectionMode ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetPlaneDetectionMode params{};
    ProcessEvent(func, &params);
    return (EARPlaneDetectionMode)params.ReturnValue;
}
UARSessionConfig* UARSessionConfig::StaticClass() {
    static auto res = find_uobject("Class /Script/AugmentedReality.ARSessionConfig");
    return (UARSessionConfig*)res;
}
bool UARSessionConfig::ShouldResetTrackedObjects() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARSessionConfig.ShouldResetTrackedObjects"));
    struct Params_ShouldResetTrackedObjects {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_ShouldResetTrackedObjects params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UARSessionConfig::SetWorldMapData(TArray<uint8_t> WorldMapData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARSessionConfig.SetWorldMapData"));
    struct Params_SetWorldMapData {
        TArray<uint8_t> WorldMapData; // 0x0
    }; // Size: 0x10
    Params_SetWorldMapData params{};
    params.WorldMapData = (TArray<uint8_t>)WorldMapData;
    ProcessEvent(func, &params);
}
EARFaceTrackingUpdate UARSessionConfig::GetFaceTrackingUpdate() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARSessionConfig.GetFaceTrackingUpdate"));
    struct Params_GetFaceTrackingUpdate {
        EARFaceTrackingUpdate ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetFaceTrackingUpdate params{};
    ProcessEvent(func, &params);
    return (EARFaceTrackingUpdate)params.ReturnValue;
}
bool UARSessionConfig::ShouldResetCameraTracking() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARSessionConfig.ShouldResetCameraTracking"));
    struct Params_ShouldResetCameraTracking {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_ShouldResetCameraTracking params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UARSessionConfig::SetSessionTrackingFeatureToEnable(EARSessionTrackingFeature InSessionTrackingFeature) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARSessionConfig.SetSessionTrackingFeatureToEnable"));
    struct Params_SetSessionTrackingFeatureToEnable {
        EARSessionTrackingFeature InSessionTrackingFeature; // 0x0
    }; // Size: 0x1
    Params_SetSessionTrackingFeatureToEnable params{};
    params.InSessionTrackingFeature = (EARSessionTrackingFeature)InSessionTrackingFeature;
    ProcessEvent(func, &params);
}
bool UARSessionConfig::ShouldRenderCameraOverlay() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARSessionConfig.ShouldRenderCameraOverlay"));
    struct Params_ShouldRenderCameraOverlay {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_ShouldRenderCameraOverlay params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UARSessionConfig::ShouldEnableCameraTracking() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARSessionConfig.ShouldEnableCameraTracking"));
    struct Params_ShouldEnableCameraTracking {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_ShouldEnableCameraTracking params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UARSessionConfig::SetSceneReconstructionMethod(EARSceneReconstruction InSceneReconstructionMethod) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARSessionConfig.SetSceneReconstructionMethod"));
    struct Params_SetSceneReconstructionMethod {
        EARSceneReconstruction InSceneReconstructionMethod; // 0x0
    }; // Size: 0x1
    Params_SetSceneReconstructionMethod params{};
    params.InSceneReconstructionMethod = (EARSceneReconstruction)InSceneReconstructionMethod;
    ProcessEvent(func, &params);
}
void UARSessionConfig::SetDesiredVideoFormat(FARVideoFormat NewFormat) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARSessionConfig.SetDesiredVideoFormat"));
    struct Params_SetDesiredVideoFormat {
        FARVideoFormat NewFormat; // 0x0
    }; // Size: 0xc
    Params_SetDesiredVideoFormat params{};
    params.NewFormat = (FARVideoFormat)NewFormat;
    ProcessEvent(func, &params);
}
void UARSessionConfig::SetResetTrackedObjects(bool bNewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARSessionConfig.SetResetTrackedObjects"));
    struct Params_SetResetTrackedObjects {
        bool bNewValue; // 0x0
    }; // Size: 0x1
    Params_SetResetTrackedObjects params{};
    params.bNewValue = (bool)bNewValue;
    ProcessEvent(func, &params);
}
EARFrameSyncMode UARSessionConfig::GetFrameSyncMode() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARSessionConfig.GetFrameSyncMode"));
    struct Params_GetFrameSyncMode {
        EARFrameSyncMode ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetFrameSyncMode params{};
    ProcessEvent(func, &params);
    return (EARFrameSyncMode)params.ReturnValue;
}
void UARSessionConfig::SetResetCameraTracking(bool bNewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARSessionConfig.SetResetCameraTracking"));
    struct Params_SetResetCameraTracking {
        bool bNewValue; // 0x0
    }; // Size: 0x1
    Params_SetResetCameraTracking params{};
    params.bNewValue = (bool)bNewValue;
    ProcessEvent(func, &params);
}
void UARSessionConfig::SetFaceTrackingUpdate(EARFaceTrackingUpdate InUpdate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARSessionConfig.SetFaceTrackingUpdate"));
    struct Params_SetFaceTrackingUpdate {
        EARFaceTrackingUpdate InUpdate; // 0x0
    }; // Size: 0x1
    Params_SetFaceTrackingUpdate params{};
    params.InUpdate = (EARFaceTrackingUpdate)InUpdate;
    ProcessEvent(func, &params);
}
void UARSessionConfig::SetFaceTrackingDirection(EARFaceTrackingDirection InDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARSessionConfig.SetFaceTrackingDirection"));
    struct Params_SetFaceTrackingDirection {
        EARFaceTrackingDirection InDirection; // 0x0
    }; // Size: 0x1
    Params_SetFaceTrackingDirection params{};
    params.InDirection = (EARFaceTrackingDirection)InDirection;
    ProcessEvent(func, &params);
}
void UARSessionConfig::SetEnableAutoFocus(bool bNewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARSessionConfig.SetEnableAutoFocus"));
    struct Params_SetEnableAutoFocus {
        bool bNewValue; // 0x0
    }; // Size: 0x1
    Params_SetEnableAutoFocus params{};
    params.bNewValue = (bool)bNewValue;
    ProcessEvent(func, &params);
}
void UARSessionConfig::SetCandidateObjectList(TArray<UARCandidateObject*>& InCandidateObjects) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARSessionConfig.SetCandidateObjectList"));
    struct Params_SetCandidateObjectList {
        TArray<UARCandidateObject*> InCandidateObjects; // 0x0
    }; // Size: 0x10
    Params_SetCandidateObjectList params{};
    params.InCandidateObjects = (TArray<UARCandidateObject*>)InCandidateObjects;
    ProcessEvent(func, &params);
    InCandidateObjects = params.InCandidateObjects;
}
TArray<uint8_t> UARSessionConfig::GetWorldMapData() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARSessionConfig.GetWorldMapData"));
    struct Params_GetWorldMapData {
        TArray<uint8_t> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetWorldMapData params{};
    ProcessEvent(func, &params);
    return (TArray<uint8_t>)params.ReturnValue;
}
TArray<UARCandidateObject*> UARSessionConfig::GetCandidateObjectList() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARSessionConfig.GetCandidateObjectList"));
    struct Params_GetCandidateObjectList {
        TArray<UARCandidateObject*> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetCandidateObjectList params{};
    ProcessEvent(func, &params);
    return (TArray<UARCandidateObject*>)params.ReturnValue;
}
EARWorldAlignment UARSessionConfig::GetWorldAlignment() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARSessionConfig.GetWorldAlignment"));
    struct Params_GetWorldAlignment {
        EARWorldAlignment ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetWorldAlignment params{};
    ProcessEvent(func, &params);
    return (EARWorldAlignment)params.ReturnValue;
}
EARSessionType UARSessionConfig::GetSessionType() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARSessionConfig.GetSessionType"));
    struct Params_GetSessionType {
        EARSessionType ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetSessionType params{};
    ProcessEvent(func, &params);
    return (EARSessionType)params.ReturnValue;
}
EARSceneReconstruction UARSessionConfig::GetSceneReconstructionMethod() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARSessionConfig.GetSceneReconstructionMethod"));
    struct Params_GetSceneReconstructionMethod {
        EARSceneReconstruction ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetSceneReconstructionMethod params{};
    ProcessEvent(func, &params);
    return (EARSceneReconstruction)params.ReturnValue;
}
int32_t UARSessionConfig::GetMaxNumSimultaneousImagesTracked() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARSessionConfig.GetMaxNumSimultaneousImagesTracked"));
    struct Params_GetMaxNumSimultaneousImagesTracked {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetMaxNumSimultaneousImagesTracked params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
EARLightEstimationMode UARSessionConfig::GetLightEstimationMode() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARSessionConfig.GetLightEstimationMode"));
    struct Params_GetLightEstimationMode {
        EARLightEstimationMode ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetLightEstimationMode params{};
    ProcessEvent(func, &params);
    return (EARLightEstimationMode)params.ReturnValue;
}
EARFaceTrackingDirection UARSessionConfig::GetFaceTrackingDirection() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARSessionConfig.GetFaceTrackingDirection"));
    struct Params_GetFaceTrackingDirection {
        EARFaceTrackingDirection ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetFaceTrackingDirection params{};
    ProcessEvent(func, &params);
    return (EARFaceTrackingDirection)params.ReturnValue;
}
EAREnvironmentCaptureProbeType UARSessionConfig::GetEnvironmentCaptureProbeType() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARSessionConfig.GetEnvironmentCaptureProbeType"));
    struct Params_GetEnvironmentCaptureProbeType {
        EAREnvironmentCaptureProbeType ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetEnvironmentCaptureProbeType params{};
    ProcessEvent(func, &params);
    return (EAREnvironmentCaptureProbeType)params.ReturnValue;
}
void UARSessionConfig::AddCandidateObject(UARCandidateObject* CandidateObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARSessionConfig.AddCandidateObject"));
    struct Params_AddCandidateObject {
        UARCandidateObject* CandidateObject; // 0x0
    }; // Size: 0x8
    Params_AddCandidateObject params{};
    params.CandidateObject = (UARCandidateObject*)CandidateObject;
    ProcessEvent(func, &params);
}
EARSessionTrackingFeature UARSessionConfig::GetEnabledSessionTrackingFeature() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARSessionConfig.GetEnabledSessionTrackingFeature"));
    struct Params_GetEnabledSessionTrackingFeature {
        EARSessionTrackingFeature ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetEnabledSessionTrackingFeature params{};
    ProcessEvent(func, &params);
    return (EARSessionTrackingFeature)params.ReturnValue;
}
TArray<UARCandidateImage*> UARSessionConfig::GetCandidateImageList() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARSessionConfig.GetCandidateImageList"));
    struct Params_GetCandidateImageList {
        TArray<UARCandidateImage*> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetCandidateImageList params{};
    ProcessEvent(func, &params);
    return (TArray<UARCandidateImage*>)params.ReturnValue;
}
void UARSessionConfig::AddCandidateImage(UARCandidateImage* NewCandidateImage) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARSessionConfig.AddCandidateImage"));
    struct Params_AddCandidateImage {
        UARCandidateImage* NewCandidateImage; // 0x0
    }; // Size: 0x8
    Params_AddCandidateImage params{};
    params.NewCandidateImage = (UARCandidateImage*)NewCandidateImage;
    ProcessEvent(func, &params);
}
