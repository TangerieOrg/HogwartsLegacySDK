#pragma once
#include <cstdint>
#include "ETransitionType.hpp"
#include "FClassRedirect.hpp"
#include "FColor.hpp"
#include "FDirectoryPath.hpp"
#include "FDropNoteInfo.hpp"
#include "FFloatRange.hpp"
#include "FFrameRate.hpp"
#include "FGameNameRedirect.hpp"
#include "FLinearColor.hpp"
#include "FNetDriverDefinition.hpp"
#include "FPluginRedirect.hpp"
#include "FSoftClassPath.hpp"
#include "FSoftObjectPath.hpp"
#include "FStatColorMapping.hpp"
#include "FStructRedirect.hpp"
#include "UObject.hpp"
class UFont;
class UClass;
class UPhysicalMaterial;
class UGameUserSettings;
class UTexture2D;
class UAssetManager;
class UMaterial;
class UTexture;
class UMaterialInstanceDynamic;
class UGameViewportClient;
class UEngineCustomTimeStep;
class UTimecodeProvider;
#pragma pack(push, 1)
class UEngine : public UObject {
public:
    char pad_28[0x8];
    UFont* TinyFont; // 0x30
    FSoftObjectPath TinyFontName; // 0x38
    UFont* SmallFont; // 0x50
    FSoftObjectPath SmallFontName; // 0x58
    UFont* MediumFont; // 0x70
    FSoftObjectPath MediumFontName; // 0x78
    UFont* LargeFont; // 0x90
    FSoftObjectPath LargeFontName; // 0x98
    UFont* SubtitleFont; // 0xb0
    FSoftObjectPath SubtitleFontName; // 0xb8
    TArray<UFont*> AdditionalFonts; // 0xd0
    TArray<FString> AdditionalFontNames; // 0xe0
    UClass* ConsoleClass; // 0xf0
    FSoftClassPath ConsoleClassName; // 0xf8
    UClass* GameViewportClientClass; // 0x110
    FSoftClassPath GameViewportClientClassName; // 0x118
    UClass* LocalPlayerClass; // 0x130
    FSoftClassPath LocalPlayerClassName; // 0x138
    UClass* WorldSettingsClass; // 0x150
    FSoftClassPath WorldSettingsClassName; // 0x158
    FSoftClassPath NavigationSystemClassName; // 0x170
    UClass* NavigationSystemClass; // 0x188
    FSoftClassPath NavigationSystemConfigClassName; // 0x190
    UClass* NavigationSystemConfigClass; // 0x1a8
    FSoftClassPath AvoidanceManagerClassName; // 0x1b0
    UClass* AvoidanceManagerClass; // 0x1c8
    FSoftClassPath AIControllerClassName; // 0x1d0
    UClass* PhysicsCollisionHandlerClass; // 0x1e8
    FSoftClassPath PhysicsCollisionHandlerClassName; // 0x1f0
    FSoftClassPath GameUserSettingsClassName; // 0x208
    UClass* GameUserSettingsClass; // 0x220
    UGameUserSettings* GameUserSettings; // 0x228
    UClass* LevelScriptActorClass; // 0x230
    FSoftClassPath LevelScriptActorClassName; // 0x238
    FSoftClassPath DefaultBlueprintBaseClassName; // 0x250
    FSoftClassPath GameSingletonClassName; // 0x268
    UObject* GameSingleton; // 0x280
    FSoftClassPath AssetManagerClassName; // 0x288
    UAssetManager* AssetManager; // 0x2a0
    UTexture2D* DefaultTexture; // 0x2a8
    FSoftObjectPath DefaultTextureName; // 0x2b0
    UTexture* DefaultDiffuseTexture; // 0x2c8
    FSoftObjectPath DefaultDiffuseTextureName; // 0x2d0
    UTexture2D* DefaultBSPVertexTexture; // 0x2e8
    FSoftObjectPath DefaultBSPVertexTextureName; // 0x2f0
    UTexture2D* HighFrequencyNoiseTexture; // 0x308
    FSoftObjectPath HighFrequencyNoiseTextureName; // 0x310
    UTexture2D* DefaultBokehTexture; // 0x328
    FSoftObjectPath DefaultBokehTextureName; // 0x330
    UTexture2D* DefaultBloomKernelTexture; // 0x348
    FSoftObjectPath DefaultBloomKernelTextureName; // 0x350
    UMaterial* WireframeMaterial; // 0x368
    FString WireframeMaterialName; // 0x370
    UMaterial* DebugMeshMaterial; // 0x380
    FSoftObjectPath DebugMeshMaterialName; // 0x388
    UMaterial* EmissiveMeshMaterial; // 0x3a0
    FSoftObjectPath EmissiveMeshMaterialName; // 0x3a8
    UMaterial* LevelColorationLitMaterial; // 0x3c0
    FString LevelColorationLitMaterialName; // 0x3c8
    UMaterial* LevelColorationUnlitMaterial; // 0x3d8
    FString LevelColorationUnlitMaterialName; // 0x3e0
    UMaterial* LightingTexelDensityMaterial; // 0x3f0
    FString LightingTexelDensityName; // 0x3f8
    UMaterial* ShadedLevelColorationLitMaterial; // 0x408
    FString ShadedLevelColorationLitMaterialName; // 0x410
    UMaterial* ShadedLevelColorationUnlitMaterial; // 0x420
    FString ShadedLevelColorationUnlitMaterialName; // 0x428
    UMaterial* RemoveSurfaceMaterial; // 0x438
    FSoftObjectPath RemoveSurfaceMaterialName; // 0x440
    UMaterial* VertexColorMaterial; // 0x458
    FString VertexColorMaterialName; // 0x460
    UMaterial* VertexColorViewModeMaterial_ColorOnly; // 0x470
    FString VertexColorViewModeMaterialName_ColorOnly; // 0x478
    UMaterial* VertexColorViewModeMaterial_AlphaAsColor; // 0x488
    FString VertexColorViewModeMaterialName_AlphaAsColor; // 0x490
    UMaterial* VertexColorViewModeMaterial_RedOnly; // 0x4a0
    FString VertexColorViewModeMaterialName_RedOnly; // 0x4a8
    UMaterial* VertexColorViewModeMaterial_GreenOnly; // 0x4b8
    FString VertexColorViewModeMaterialName_GreenOnly; // 0x4c0
    UMaterial* VertexColorViewModeMaterial_BlueOnly; // 0x4d0
    FString VertexColorViewModeMaterialName_BlueOnly; // 0x4d8
    FSoftObjectPath DebugEditorMaterialName; // 0x4e8
    UMaterial* ConstraintLimitMaterial; // 0x500
    UMaterialInstanceDynamic* ConstraintLimitMaterialX; // 0x508
    UMaterialInstanceDynamic* ConstraintLimitMaterialXAxis; // 0x510
    UMaterialInstanceDynamic* ConstraintLimitMaterialY; // 0x518
    UMaterialInstanceDynamic* ConstraintLimitMaterialYAxis; // 0x520
    UMaterialInstanceDynamic* ConstraintLimitMaterialZ; // 0x528
    UMaterialInstanceDynamic* ConstraintLimitMaterialZAxis; // 0x530
    UMaterialInstanceDynamic* ConstraintLimitMaterialPrismatic; // 0x538
    UMaterial* InvalidLightmapSettingsMaterial; // 0x540
    FSoftObjectPath InvalidLightmapSettingsMaterialName; // 0x548
    UMaterial* PreviewShadowsIndicatorMaterial; // 0x560
    FSoftObjectPath PreviewShadowsIndicatorMaterialName; // 0x568
    UMaterial* ArrowMaterial; // 0x580
    UMaterialInstanceDynamic* ArrowMaterialYellow; // 0x588
    FSoftObjectPath ArrowMaterialName; // 0x590
    FLinearColor LightingOnlyBrightness; // 0x5a8
    TArray<FLinearColor> ShaderComplexityColors; // 0x5b8
    TArray<FLinearColor> QuadComplexityColors; // 0x5c8
    TArray<FLinearColor> LightComplexityColors; // 0x5d8
    TArray<FLinearColor> StationaryLightOverlapColors; // 0x5e8
    TArray<FLinearColor> LODColorationColors; // 0x5f8
    TArray<FLinearColor> HLODColorationColors; // 0x608
    TArray<FLinearColor> StreamingAccuracyColors; // 0x618
    float MaxPixelShaderAdditiveComplexityCount; // 0x628
    float MaxES3PixelShaderAdditiveComplexityCount; // 0x62c
    float MinLightMapDensity; // 0x630
    float IdealLightMapDensity; // 0x634
    float MaxLightMapDensity; // 0x638
    uint8_t bRenderLightMapDensityGrayscale : 1; // 0x63c
    uint8_t pad_bitfield_63c_1 : 7;
    char pad_63d[0x3];
    float RenderLightMapDensityGrayscaleScale; // 0x640
    float RenderLightMapDensityColorScale; // 0x644
    FLinearColor LightMapDensityVertexMappedColor; // 0x648
    FLinearColor LightMapDensitySelectedColor; // 0x658
    TArray<FStatColorMapping> StatColorMappings; // 0x668
    UPhysicalMaterial* DefaultPhysMaterial; // 0x678
    FSoftObjectPath DefaultPhysMaterialName; // 0x680
    UPhysicalMaterial* DefaultDestructiblePhysMaterial; // 0x698
    FSoftObjectPath DefaultDestructiblePhysMaterialName; // 0x6a0
    TArray<FGameNameRedirect> ActiveGameNameRedirects; // 0x6b8
    TArray<FClassRedirect> ActiveClassRedirects; // 0x6c8
    TArray<FPluginRedirect> ActivePluginRedirects; // 0x6d8
    TArray<FStructRedirect> ActiveStructRedirects; // 0x6e8
    UTexture2D* PreIntegratedSkinBRDFTexture; // 0x6f8
    FSoftObjectPath PreIntegratedSkinBRDFTextureName; // 0x700
    UTexture2D* BlueNoiseTexture; // 0x718
    FSoftObjectPath BlueNoiseTextureName; // 0x720
    UTexture2D* MiniFontTexture; // 0x738
    FSoftObjectPath MiniFontTextureName; // 0x740
    UTexture* WeightMapPlaceholderTexture; // 0x758
    FSoftObjectPath WeightMapPlaceholderTextureName; // 0x760
    UTexture2D* LightMapDensityTexture; // 0x778
    FSoftObjectPath LightMapDensityTextureName; // 0x780
    char pad_798[0x8];
    UGameViewportClient* GameViewport; // 0x7a0
    TArray<FString> DeferredCommands; // 0x7a8
    float NearClipPlane; // 0x7b8
    uint8_t bSubtitlesEnabled : 1; // 0x7bc
    uint8_t bSubtitlesForcedOff : 1; // 0x7bc
    uint8_t pad_bitfield_7bc_2 : 6;
    char pad_7bd[0x3];
    int32_t MaximumLoopIterationCount; // 0x7c0
    uint8_t bCanBlueprintsTickByDefault : 1; // 0x7c4
    uint8_t bOptimizeAnimBlueprintMemberVariableAccess : 1; // 0x7c4
    uint8_t bAllowMultiThreadedAnimationUpdate : 1; // 0x7c4
    uint8_t bEnableEditorPSysRealtimeLOD : 1; // 0x7c4
    uint8_t pad_bitfield_7c4_4 : 1;
    uint8_t bSmoothFrameRate : 1; // 0x7c4
    uint8_t bUseFixedFrameRate : 1; // 0x7c4
    uint8_t pad_bitfield_7c4_7 : 1;
    char pad_7c5[0x3];
    float FixedFrameRate; // 0x7c8
    FFloatRange SmoothedFrameRateRange; // 0x7cc
    char pad_7dc[0x4];
    UEngineCustomTimeStep* CustomTimeStep; // 0x7e0
    char pad_7e8[0x20];
    FSoftClassPath CustomTimeStepClassName; // 0x808
    UTimecodeProvider* TimecodeProvider; // 0x820
    char pad_828[0x20];
    FSoftClassPath TimecodeProviderClassName; // 0x848
    bool bGenerateDefaultTimecode; // 0x860
    char pad_861[0x3];
    FFrameRate GenerateDefaultTimecodeFrameRate; // 0x864
    float GenerateDefaultTimecodeFrameDelay; // 0x86c
    uint8_t bCheckForMultiplePawnsSpawnedInAFrame : 1; // 0x870
    uint8_t pad_bitfield_870_1 : 7;
    char pad_871[0x3];
    int32_t NumPawnsAllowedToBeSpawnedInAFrame; // 0x874
    uint8_t bShouldGenerateLowQualityLightmaps : 1; // 0x878
    uint8_t pad_bitfield_878_1 : 7;
    char pad_879[0x3];
    FColor C_WorldBox; // 0x87c
    FColor C_BrushWire; // 0x880
    FColor C_AddWire; // 0x884
    FColor C_SubtractWire; // 0x888
    FColor C_SemiSolidWire; // 0x88c
    FColor C_NonSolidWire; // 0x890
    FColor C_WireBackground; // 0x894
    FColor C_ScaleBoxHi; // 0x898
    FColor C_VolumeCollision; // 0x89c
    FColor C_BSPCollision; // 0x8a0
    FColor C_OrthoBackground; // 0x8a4
    FColor C_Volume; // 0x8a8
    FColor C_BrushShape; // 0x8ac
    float StreamingDistanceFactor; // 0x8b0
    char pad_8b4[0x4];
    FDirectoryPath GameScreenshotSaveDirectory; // 0x8b8
    ETransitionType TransitionType; // 0x8c8
    char pad_8c9[0x7];
    FString TransitionDescription; // 0x8d0
    FString TransitionGameMode; // 0x8e0
    uint8_t bAllowMatureLanguage : 1; // 0x8f0
    uint8_t pad_bitfield_8f0_1 : 7;
    char pad_8f1[0x3];
    float CameraRotationThreshold; // 0x8f4
    float CameraTranslationThreshold; // 0x8f8
    float PrimitiveProbablyVisibleTime; // 0x8fc
    float MaxOcclusionPixelsFraction; // 0x900
    uint8_t bPauseOnLossOfFocus : 1; // 0x904
    uint8_t pad_bitfield_904_1 : 7;
    char pad_905[0x3];
    int32_t MaxParticleResize; // 0x908
    int32_t MaxParticleResizeWarn; // 0x90c
    TArray<FDropNoteInfo> PendingDroppedNotes; // 0x910
    float NetClientTicksPerSecond; // 0x920
    float MinDesiredFrameRate; // 0x924
    float DisplayGamma; // 0x928
    FLinearColor DefaultSelectedMaterialColor; // 0x92c
    FLinearColor SelectedMaterialColor; // 0x93c
    FLinearColor SelectionOutlineColor; // 0x94c
    FLinearColor SubduedSelectionOutlineColor; // 0x95c
    FLinearColor SelectedMaterialColorOverride; // 0x96c
    bool bIsOverridingSelectedColor; // 0x97c
    char pad_97d[0x3];
    uint8_t bEnableOnScreenDebugMessages : 1; // 0x980
    uint8_t bEnableOnScreenDebugMessagesDisplay : 1; // 0x980
    uint8_t bSuppressMapWarnings : 1; // 0x980
    uint8_t bDisableAILogging : 1; // 0x980
    uint8_t pad_bitfield_980_4 : 4;
    char pad_981[0x3];
    uint32_t bEnableVisualLogRecordingOnStart; // 0x984
    int32_t ScreenSaverInhibitorSemaphore; // 0x988
    uint8_t bLockReadOnlyLevels : 1; // 0x98c
    uint8_t pad_bitfield_98c_1 : 7;
    char pad_98d[0x3];
    FString ParticleEventManagerClassPath; // 0x990
    float SelectionHighlightIntensity; // 0x9a0
    float BSPSelectionHighlightIntensity; // 0x9a4
    float SelectionHighlightIntensityBillboards; // 0x9a8
    char pad_9ac[0x314];
    TArray<FNetDriverDefinition> NetDriverDefinitions; // 0xcc0
    TArray<FString> ServerActors; // 0xcd0
    TArray<FString> RuntimeServerActors; // 0xce0
    float NetErrorLogInterval; // 0xcf0
    uint8_t bStartedLoadMapMovie : 1; // 0xcf4
    uint8_t pad_bitfield_cf4_1 : 7;
    char pad_cf5[0x1b];
    int32_t NextWorldContextHandle; // 0xd10
    char pad_d14[0xd4];
    FSoftObjectPath WHDRGradientTextureName; // 0xde8
    UTexture2D* WHDRGradientTexture; // 0xe00
    static UEngine* StaticClass();
}; // Size: 0xe08
#pragma pack(pop)
