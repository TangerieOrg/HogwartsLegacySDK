#pragma once
#include <cstdint>
#include "ECollisionTraceFlag.hpp"
#include "EHoudiniRuntimeSettingsAxisImport.hpp"
#include "EHoudiniRuntimeSettingsRecomputeFlag.hpp"
#include "EHoudiniRuntimeSettingsSessionType.hpp"
#include "FBodyInstance.hpp"
#include "FDirectoryPath.hpp"
#include "FHoudiniToolDirectory.hpp"
#include "FWalkableSlopeOverride.hpp"
#include "UObject.hpp"
class UPhysicalMaterial;
class UFoliageType_InstancedStaticMesh;
class UAssetUserData;
#pragma pack(push, 1)
class UHoudiniRuntimeSettings : public UObject {
public:
    EHoudiniRuntimeSettingsSessionType SessionType; // 0x28
    char pad_29[0x7];
    FString ServerHost; // 0x30
    int32_t ServerPort; // 0x40
    char pad_44[0x4];
    FString ServerPipeName; // 0x48
    bool bStartAutomaticServer; // 0x58
    char pad_59[0x3];
    float AutomaticServerTimeout; // 0x5c
    bool bShowMultiAssetDialog; // 0x60
    bool bPauseCookingOnStart; // 0x61
    bool bEnableCooking; // 0x62
    bool bUploadTransformsToHoudiniEngine; // 0x63
    bool bTransformChangeTriggersCooks; // 0x64
    bool bDisplaySlateCookingNotifications; // 0x65
    bool bCookCurvesOnMouseRelease; // 0x66
    char pad_67[0x19];
    bool bTreatRampParametersAsMultiparms; // 0x80
    char pad_81[0x7];
    FString CollisionGroupNamePrefix; // 0x88
    FString RenderedCollisionGroupNamePrefix; // 0x98
    FString UCXCollisionGroupNamePrefix; // 0xa8
    FString UCXRenderedCollisionGroupNamePrefix; // 0xb8
    FString SimpleCollisionGroupNamePrefix; // 0xc8
    FString SimpleRenderedCollisionGroupNamePrefix; // 0xd8
    FString MarshallingAttributeMaterial; // 0xe8
    FString MarshallingAttributeMaterialHole; // 0xf8
    FString MarshallingAttributeInstanceOverride; // 0x108
    FString MarshallingAttributeFaceSmoothingMask; // 0x118
    FString MarshallingAttributeLightmapResolution; // 0x128
    FString MarshallingAttributeGeneratedMeshName; // 0x138
    FString MarshallingAttributeInputMeshName; // 0x148
    FString MarshallingAttributeInputSourceFile; // 0x158
    float MarshallingSplineResolution; // 0x168
    bool MarshallingLandscapesUseDefaultUnrealScaling; // 0x16c
    bool MarshallingLandscapesUseFullResolution; // 0x16d
    bool MarshallingLandscapesForceMinMaxValues; // 0x16e
    char pad_16f[0x1];
    float MarshallingLandscapesForcedMinValue; // 0x170
    float MarshallingLandscapesForcedMaxValue; // 0x174
    float GeneratedGeometryScaleFactor; // 0x178
    float TransformScaleFactor; // 0x17c
    EHoudiniRuntimeSettingsAxisImport ImportAxis; // 0x180
    char pad_181[0x3];
    uint8_t bDoubleSidedGeometry : 1; // 0x184
    uint8_t pad_bitfield_184_1 : 7;
    char pad_185[0x3];
    UPhysicalMaterial* PhysMaterial; // 0x188
    FBodyInstance DefaultBodyInstance; // 0x190
    ECollisionTraceFlag CollisionTraceFlag; // 0x2e8
    char pad_2e9[0x3];
    int32_t LightMapResolution; // 0x2ec
    float LpvBiasMultiplier; // 0x2f0
    float GeneratedDistanceFieldResolutionScale; // 0x2f4
    FWalkableSlopeOverride WalkableSlopeOverride; // 0x2f8
    int32_t LightMapCoordinateIndex; // 0x308
    uint8_t bUseMaximumStreamingTexelRatio : 1; // 0x30c
    uint8_t pad_bitfield_30c_1 : 7;
    char pad_30d[0x3];
    float StreamingDistanceMultiplier; // 0x310
    char pad_314[0x4];
    UFoliageType_InstancedStaticMesh* FoliageDefaultSettings; // 0x318
    TArray<UAssetUserData*> AssetUserData; // 0x320
    bool bUseFullPrecisionUVs; // 0x330
    char pad_331[0x3];
    int32_t SrcLightmapIndex; // 0x334
    int32_t DstLightmapIndex; // 0x338
    int32_t MinLightmapResolution; // 0x33c
    bool bRemoveDegenerates; // 0x340
    EHoudiniRuntimeSettingsRecomputeFlag GenerateLightmapUVsFlag; // 0x341
    EHoudiniRuntimeSettingsRecomputeFlag RecomputeNormalsFlag; // 0x342
    EHoudiniRuntimeSettingsRecomputeFlag RecomputeTangentsFlag; // 0x343
    bool bUseMikkTSpace; // 0x344
    bool bBuildAdjacencyBuffer; // 0x345
    bool bUseCustomHoudiniLocation; // 0x346
    char pad_347[0x1];
    FDirectoryPath CustomHoudiniLocation; // 0x348
    bool bHidePlacementModeHoudiniTools; // 0x358
    char pad_359[0x7];
    TArray<FHoudiniToolDirectory> CustomHoudiniToolsLocation; // 0x360
    int32_t CookingThreadStackSize; // 0x370
    char pad_374[0x4];
    FString HoudiniEnvironmentFiles; // 0x378
    FString OtlSearchPath; // 0x388
    FString DsoSearchPath; // 0x398
    FString ImageDsoSearchPath; // 0x3a8
    FString AudioDsoSearchPath; // 0x3b8
    static UHoudiniRuntimeSettings* StaticClass();
}; // Size: 0x3c8
#pragma pack(pop)
