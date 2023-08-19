#pragma once
#include <cstdint>
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
#include "UDataAsset.hpp"
class UARCandidateImage;
class UARCandidateObject;
class UClass;
class UMaterialInterface;
#pragma pack(push, 1)
class UARSessionConfig : public UDataAsset {
public:
    bool bGenerateMeshDataFromTrackedGeometry; // 0x30
    bool bGenerateCollisionForMeshData; // 0x31
    bool bGenerateNavMeshForMeshData; // 0x32
    bool bUseMeshDataForOcclusion; // 0x33
    bool bRenderMeshDataInWireframe; // 0x34
    bool bTrackSceneObjects; // 0x35
    bool bUsePersonSegmentationForOcclusion; // 0x36
    bool bUseSceneDepthForOcclusion; // 0x37
    bool bUseAutomaticImageScaleEstimation; // 0x38
    bool bUseStandardOnboardingUX; // 0x39
    EARWorldAlignment WorldAlignment; // 0x3a
    EARSessionType SessionType; // 0x3b
    EARPlaneDetectionMode PlaneDetectionMode; // 0x3c
    bool bHorizontalPlaneDetection; // 0x3d
    bool bVerticalPlaneDetection; // 0x3e
    bool bEnableAutoFocus; // 0x3f
    EARLightEstimationMode LightEstimationMode; // 0x40
    EARFrameSyncMode FrameSyncMode; // 0x41
    bool bEnableAutomaticCameraOverlay; // 0x42
    bool bEnableAutomaticCameraTracking; // 0x43
    bool bResetCameraTracking; // 0x44
    bool bResetTrackedObjects; // 0x45
    char pad_46[0x2];
    TArray<UARCandidateImage*> CandidateImages; // 0x48
    int32_t MaxNumSimultaneousImagesTracked; // 0x58
    EAREnvironmentCaptureProbeType EnvironmentCaptureProbeType; // 0x5c
    char pad_5d[0x3];
    TArray<uint8_t> WorldMapData; // 0x60
    TArray<UARCandidateObject*> CandidateObjects; // 0x70
    FARVideoFormat DesiredVideoFormat; // 0x80
    bool bUseOptimalVideoFormat; // 0x8c
    EARFaceTrackingDirection FaceTrackingDirection; // 0x8d
    EARFaceTrackingUpdate FaceTrackingUpdate; // 0x8e
    char pad_8f[0x1];
    int32_t MaxNumberOfTrackedFaces; // 0x90
    char pad_94[0x4];
    TArray<uint8_t> SerializedARCandidateImageDatabase; // 0x98
    EARSessionTrackingFeature EnabledSessionTrackingFeature; // 0xa8
    EARSceneReconstruction SceneReconstructionMethod; // 0xa9
    char pad_aa[0x6];
    UClass* PlaneComponentClass; // 0xb0
    UClass* PointComponentClass; // 0xb8
    UClass* FaceComponentClass; // 0xc0
    UClass* ImageComponentClass; // 0xc8
    UClass* QRCodeComponentClass; // 0xd0
    UClass* PoseComponentClass; // 0xd8
    UClass* EnvironmentProbeComponentClass; // 0xe0
    UClass* ObjectComponentClass; // 0xe8
    UClass* MeshComponentClass; // 0xf0
    UClass* GeoAnchorComponentClass; // 0xf8
    UMaterialInterface* DefaultMeshMaterial; // 0x100
    UMaterialInterface* DefaultWireframeMeshMaterial; // 0x108
    static UARSessionConfig* StaticClass();
    bool ShouldResetTrackedObjects();
    bool ShouldResetCameraTracking();
    bool ShouldRenderCameraOverlay();
    bool ShouldEnableCameraTracking();
    bool ShouldEnableAutoFocus();
    void SetWorldMapData(TArray<uint8_t> WorldMapData);
    void SetSessionTrackingFeatureToEnable(EARSessionTrackingFeature InSessionTrackingFeature);
    void SetSceneReconstructionMethod(EARSceneReconstruction InSceneReconstructionMethod);
    void SetResetTrackedObjects(bool bNewValue);
    void SetResetCameraTracking(bool bNewValue);
    void SetFaceTrackingUpdate(EARFaceTrackingUpdate InUpdate);
    void SetFaceTrackingDirection(EARFaceTrackingDirection InDirection);
    void SetEnableAutoFocus(bool bNewValue);
    void SetDesiredVideoFormat(FARVideoFormat NewFormat);
    void SetCandidateObjectList(TArray<UARCandidateObject*>& InCandidateObjects);
    TArray<uint8_t> GetWorldMapData();
    EARWorldAlignment GetWorldAlignment();
    EARSessionType GetSessionType();
    EARSceneReconstruction GetSceneReconstructionMethod();
    EARPlaneDetectionMode GetPlaneDetectionMode();
    int32_t GetMaxNumSimultaneousImagesTracked();
    EARLightEstimationMode GetLightEstimationMode();
    EARFrameSyncMode GetFrameSyncMode();
    EARFaceTrackingUpdate GetFaceTrackingUpdate();
    EARFaceTrackingDirection GetFaceTrackingDirection();
    EAREnvironmentCaptureProbeType GetEnvironmentCaptureProbeType();
    EARSessionTrackingFeature GetEnabledSessionTrackingFeature();
    FARVideoFormat GetDesiredVideoFormat();
    TArray<UARCandidateObject*> GetCandidateObjectList();
    TArray<UARCandidateImage*> GetCandidateImageList();
    void AddCandidateObject(UARCandidateObject* CandidateObject);
    void AddCandidateImage(UARCandidateImage* NewCandidateImage);
}; // Size: 0x110
#pragma pack(pop)
