#pragma once
#include <cstdint>
#include "EARCaptureType.hpp"
#include "EARObjectClassification.hpp"
#include "EARSceneReconstruction.hpp"
#include "EARSessionTrackingFeature.hpp"
#include "EARSessionType.hpp"
#include "EARTextureType.hpp"
#include "EARTrackingQuality.hpp"
#include "EARTrackingQualityReason.hpp"
#include "EARWorldMappingState.hpp"
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
#include "UBlueprintFunctionLibrary.hpp"
class USceneComponent;
class UARSessionConfig;
struct FARCameraIntrinsics;
class UARPin;
class UARTexture;
class UARTrackedGeometry;
class UARLightEstimate;
class UARTextureCameraImage;
class UARTextureCameraDepth;
class UARTrackedPose;
class UARTrackedPoint;
class UARPlaneGeometry;
class UARTrackedImage;
class UAREnvironmentCaptureProbe;
class UClass;
class UObject;
class UTexture2D;
class UARCandidateImage;
#pragma pack(push, 1)
class UARBlueprintLibrary : public UBlueprintFunctionLibrary {
public:
    static UARBlueprintLibrary* StaticClass();
    static void UnpinComponent(USceneComponent* ComponentToUnpin);
    static bool ToggleARCapture(bool bOnOff, EARCaptureType CaptureType);
    static void StopARSession();
    static void StartARSession(UARSessionConfig* SessionConfig);
    static void SetEnabledXRCamera(bool bOnOff);
    static void SetARWorldScale(float InWorldScale);
    static void SetARWorldOriginLocationAndRotation(FVector OriginLocation, FRotator OriginRotation, bool bIsTransformInWorldSpace, bool bMaintainUpDirection);
    static void SetAlignmentTransform(FTransform& InAlignmentTransform);
    static bool SaveARPinToLocalStore(FName InSaveName, UARPin* InPin);
    static FIntPoint ResizeXRCamera(FIntPoint& InSize);
    static void RemovePin(UARPin* PinToRemove);
    static void RemoveARPinFromLocalStore(FName InSaveName);
    static void RemoveAllARPinsFromLocalStore();
    static UARPin* PinComponentToTraceResult(USceneComponent* ComponentToPin, FARTraceResult& TraceResult, FName DebugName);
    static bool PinComponentToARPin(USceneComponent* ComponentToPin, UARPin* Pin);
    static UARPin* PinComponent(USceneComponent* ComponentToPin, FTransform& PinToWorldTransform, UARTrackedGeometry* TrackedGeometry, FName DebugName);
    static void PauseARSession();
    static void LoadARPinsFromLocalStore();
    static TArray<FARTraceResult> LineTraceTrackedObjects3D(FVector Start, FVector End, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon);
    static TArray<FARTraceResult> LineTraceTrackedObjects(FVector2D ScreenCoord, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon);
    static bool IsSessionTypeSupported(EARSessionType SessionType);
    static bool IsSessionTrackingFeatureSupported(EARSessionType SessionType, EARSessionTrackingFeature SessionTrackingFeature);
    static bool IsSceneReconstructionSupported(EARSessionType SessionType, EARSceneReconstruction SceneReconstructionMethod);
    static bool IsARSupported();
    static bool IsARPinLocalStoreSupported();
    static bool IsARPinLocalStoreReady();
    static EARWorldMappingState GetWorldMappingStatus();
    static EARTrackingQualityReason GetTrackingQualityReason();
    static EARTrackingQuality GetTrackingQuality();
    static TArray<FARVideoFormat> GetSupportedVideoFormats(EARSessionType SessionType);
    static UARSessionConfig* GetSessionConfig();
    static TArray<FVector> GetPointCloud();
    static UARTexture* GetPersonSegmentationImage();
    static UARTexture* GetPersonSegmentationDepthImage();
    static bool GetObjectClassificationAtLocation(FVector& InWorldLocation, EARObjectClassification& OutClassification, FVector& OutClassificationLocation, float MaxLocationDiff);
    static int32_t GetNumberOfTrackedFacesSupported();
    static UARLightEstimate* GetCurrentLightEstimate();
    static bool GetCameraIntrinsics(FARCameraIntrinsics& OutCameraIntrinsics);
    static UARTextureCameraImage* GetCameraImage();
    static UARTextureCameraDepth* GetCameraDepth();
    static float GetARWorldScale();
    static UARTexture* GetARTexture(EARTextureType TextureType);
    static FARSessionStatus GetARSessionStatus();
    static TArray<UARTrackedPose*> GetAllTrackedPoses();
    static TArray<UARTrackedPoint*> GetAllTrackedPoints();
    static TArray<UARPlaneGeometry*> GetAllTrackedPlanes();
    static TArray<UARTrackedImage*> GetAllTrackedImages();
    static TArray<UAREnvironmentCaptureProbe*> GetAllTrackedEnvironmentCaptureProbes();
    static TArray<FARPose2D> GetAllTracked2DPoses();
    static TArray<UARPin*> GetAllPins();
    static TArray<UARTrackedGeometry*> GetAllGeometriesByClass(UClass* GeometryClass);
    static TArray<UARTrackedGeometry*> GetAllGeometries();
    static FTransform GetAlignmentTransform();
    static TArray<UARTrackedPoint*> FindTrackedPointsByName(FString PointName);
    static void DebugDrawTrackedGeometry(UARTrackedGeometry* TrackedGeometry, UObject* WorldContextObject, FLinearColor Color, float OutlineThickness, float PersistForSeconds);
    static void DebugDrawPin(UARPin* ARPin, UObject* WorldContextObject, FLinearColor Color, float Scale, float PersistForSeconds);
    static void CalculateClosestIntersection(TArray<FVector>& StartPoints, TArray<FVector>& EndPoints, FVector& ClosestIntersection);
    static void CalculateAlignmentTransform(FTransform& TransformInFirstCoordinateSystem, FTransform& TransformInSecondCoordinateSystem, FTransform& AlignmentTransform);
    static bool AddTrackedPointWithName(FTransform& WorldTransform, FString PointName, bool bDeletePointsWithSameName);
    static UARCandidateImage* AddRuntimeCandidateImage(UARSessionConfig* SessionConfig, UTexture2D* CandidateTexture, FString FriendlyName, float PhysicalWidth);
    static bool AddManualEnvironmentCaptureProbe(FVector Location, FVector Extent);
}; // Size: 0x28
#pragma pack(pop)
