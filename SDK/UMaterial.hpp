#pragma once
#include <cstdint>
#include "EBlendMode.hpp"
#include "EBlendableLocation.hpp"
#include "EDecalBlendMode.hpp"
#include "EMaterialDecalResponse.hpp"
#include "EMaterialDomain.hpp"
#include "EMaterialShadingModel.hpp"
#include "EMaterialShadingRate.hpp"
#include "EMaterialStencilCompare.hpp"
#include "EMaterialTessellationMode.hpp"
#include "ERefractionMode.hpp"
#include "ETranslucencyLightingMode.hpp"
#include "FColorMaterialInput.hpp"
#include "FGuid.hpp"
#include "FLinearColor.hpp"
#include "FMaterialAttributesInput.hpp"
#include "FMaterialCachedExpressionData.hpp"
#include "FMaterialShadingModelField.hpp"
#include "FScalarMaterialInput.hpp"
#include "FShadingModelMaterialInput.hpp"
#include "FVector2MaterialInput.hpp"
#include "FVectorMaterialInput.hpp"
#include "UMaterialInterface.hpp"
class UPhysicalMaterial;
class UPhysicalMaterialMask;
#pragma pack(push, 1)
class UMaterial : public UMaterialInterface {
public:
    UPhysicalMaterial* PhysMaterial; // 0x98
    UPhysicalMaterialMask* PhysMaterialMask; // 0xa0
    UPhysicalMaterial* PhysicalMaterialMap[8]; // 0xa8
    FScalarMaterialInput Metallic; // 0xe8
    FScalarMaterialInput Specular; // 0xfc
    FScalarMaterialInput Anisotropy; // 0x110
    FVectorMaterialInput Normal; // 0x124
    FVectorMaterialInput Tangent; // 0x138
    FColorMaterialInput EmissiveColor; // 0x14c
    EMaterialDomain MaterialDomain; // 0x160
    EBlendMode BlendMode; // 0x161
    EDecalBlendMode DecalBlendMode; // 0x162
    EMaterialDecalResponse MaterialDecalResponse; // 0x163
    EMaterialShadingModel ShadingModel; // 0x164
    uint8_t bCastDynamicShadowAsMasked : 1; // 0x165
    uint8_t pad_bitfield_165_1 : 7;
    FMaterialShadingModelField ShadingModels; // 0x166
    float OpacityMaskClipValue; // 0x168
    FVectorMaterialInput WorldPositionOffset; // 0x16c
    FScalarMaterialInput Refraction; // 0x180
    char pad_194[0x4];
    FMaterialAttributesInput MaterialAttributes; // 0x198
    FScalarMaterialInput PixelDepthOffset; // 0x1b8
    FShadingModelMaterialInput ShadingModelFromMaterialExpression; // 0x1cc
    FScalarMaterialInput Opacity1; // 0x1e0
    FScalarMaterialInput Opacity2; // 0x1f4
    FScalarMaterialInput Opacity3; // 0x208
    FScalarMaterialInput wMotionDither; // 0x21c
    FVector2MaterialInput wMotion; // 0x230
    uint8_t bIsSkyDome : 1; // 0x244
    uint8_t bwEnableFullResolutionTranslucency : 1; // 0x244
    uint8_t pad_bitfield_244_2 : 6;
    char pad_245[0x3];
    uint8_t bEnableSeparateTranslucency : 1; // 0x248
    uint8_t bEnableMobileSeparateTranslucency : 1; // 0x248
    uint8_t bEnableResponsiveAA : 1; // 0x248
    uint8_t bScreenSpaceReflections : 1; // 0x248
    uint8_t bContactShadows : 1; // 0x248
    uint8_t TwoSided : 1; // 0x248
    uint8_t DitheredLODTransition : 1; // 0x248
    uint8_t DitherOpacityMask : 1; // 0x248
    uint8_t bAllowNegativeEmissiveColor : 1; // 0x249
    uint8_t pad_bitfield_249_1 : 7;
    ETranslucencyLightingMode TranslucencyLightingMode; // 0x24a
    char pad_24b[0x1];
    int32_t NumCustomizedUVs; // 0x24c
    float TranslucencyDirectionalLightingIntensity; // 0x250
    float TranslucentShadowDensityScale; // 0x254
    float TranslucentSelfShadowDensityScale; // 0x258
    float TranslucentSelfShadowSecondDensityScale; // 0x25c
    float TranslucentSelfShadowSecondOpacity; // 0x260
    float TranslucentBackscatteringExponent; // 0x264
    FLinearColor TranslucentMultipleScatteringExtinction; // 0x268
    float TranslucentShadowStartOffset; // 0x278
    uint8_t bDisableDepthTest : 1; // 0x27c
    uint8_t bWriteOnlyAlpha : 1; // 0x27c
    uint8_t bGenerateSphericalParticleNormals : 1; // 0x27c
    uint8_t bTangentSpaceNormal : 1; // 0x27c
    uint8_t bUseEmissiveForDynamicAreaLighting : 1; // 0x27c
    uint8_t bBlockGI : 1; // 0x27c
    uint8_t bUsedAsSpecialEngineMaterial : 1; // 0x27c
    uint8_t bUsedWithSkeletalMesh : 1; // 0x27c
    uint8_t bUsedWithEditorCompositing : 1; // 0x27d
    uint8_t bUsedWithParticleSprites : 1; // 0x27d
    uint8_t bUsedWithBeamTrails : 1; // 0x27d
    uint8_t bUsedWithMeshParticles : 1; // 0x27d
    uint8_t bUsedWithNiagaraSprites : 1; // 0x27d
    uint8_t bUsedWithNiagaraRibbons : 1; // 0x27d
    uint8_t bUsedWithNiagaraMeshParticles : 1; // 0x27d
    uint8_t bUsedWithGeometryCache : 1; // 0x27d
    uint8_t bUsedWithStaticLighting : 1; // 0x27e
    uint8_t bUsedWithMorphTargets : 1; // 0x27e
    uint8_t bUsedWithSplineMeshes : 1; // 0x27e
    uint8_t bUsedWithInstancedStaticMeshes : 1; // 0x27e
    uint8_t bUsedWithGeometryCollections : 1; // 0x27e
    uint8_t bUsesDistortion : 1; // 0x27e
    uint8_t pad_bitfield_27e_6 : 2;
    char pad_27f[0x1];
    uint8_t bwWritesMotionVector : 1; // 0x280
    uint8_t pad_bitfield_280_1 : 7;
    char pad_281[0x3];
    uint8_t bUsedWithClothing : 1; // 0x284
    uint8_t pad_bitfield_284_1 : 7;
    char pad_285[0x3];
    uint8_t bUsedWithWater : 1; // 0x288
    uint8_t bUsedWithHairStrands : 1; // 0x288
    uint8_t bUsedWithLidarPointCloud : 1; // 0x288
    uint8_t bUsedWithVirtualHeightfieldMesh : 1; // 0x288
    uint8_t pad_bitfield_288_4 : 4;
    char pad_289[0x3];
    uint8_t bUsedWithUI : 1; // 0x28c
    uint8_t bAutomaticallySetUsageInEditor : 1; // 0x28c
    uint8_t bFullyRough : 1; // 0x28c
    uint8_t bUseFullPrecision : 1; // 0x28c
    uint8_t bUseLightmapDirectionality : 1; // 0x28c
    uint8_t bUseAlphaToCoverage : 1; // 0x28c
    uint8_t pad_bitfield_28c_6 : 2;
    char pad_28d[0x3];
    uint8_t bForwardRenderUsePreintegratedGFForSimpleIBL : 1; // 0x290
    uint8_t pad_bitfield_290_1 : 7;
    char pad_291[0x3];
    uint8_t bUseHQForwardReflections : 1; // 0x294
    uint8_t bForwardBlendsSkyLightCubemaps : 1; // 0x294
    uint8_t bUsePlanarForwardReflections : 1; // 0x294
    uint8_t bNormalCurvatureToRoughness : 1; // 0x294
    uint8_t pad_bitfield_294_4 : 4;
    EMaterialTessellationMode D3D11TessellationMode; // 0x295
    uint8_t bEnableCrackFreeDisplacement : 1; // 0x296
    uint8_t bEnableAdaptiveTessellation : 1; // 0x296
    uint8_t AllowTranslucentCustomDepthWrites : 1; // 0x296
    uint8_t Wireframe : 1; // 0x296
    uint8_t WriteDepthToTranslucentMaterial : 1; // 0x296
    uint8_t pad_bitfield_296_5 : 3;
    EMaterialShadingRate ShadingRate; // 0x297
    uint8_t bCanMaskedBeAssumedOpaque : 1; // 0x298
    uint8_t bIsMasked : 1; // 0x298
    uint8_t bIsPreviewMaterial : 1; // 0x298
    uint8_t bIsFunctionPreviewMaterial : 1; // 0x298
    uint8_t bUseMaterialAttributes : 1; // 0x298
    uint8_t bCastRayTracedShadows : 1; // 0x298
    uint8_t bUseTranslucencyVertexFog : 1; // 0x298
    uint8_t bApplyCloudFogging : 1; // 0x298
    uint8_t bIsSky : 1; // 0x299
    uint8_t bComputeFogPerPixel : 1; // 0x299
    uint8_t bOutputTranslucentVelocity : 1; // 0x299
    uint8_t pad_bitfield_299_3 : 5;
    bool bAllowMotionVectorRendering; // 0x29a
    char pad_29b[0x1];
    uint8_t bDecalManualyApplyLifetime : 1; // 0x29c
    uint8_t bDecalCustomZFade : 1; // 0x29c
    uint8_t pad_bitfield_29c_2 : 6;
    char pad_29d[0x3];
    uint8_t bAllowDevelopmentShaderCompile : 1; // 0x2a0
    uint8_t bIsMaterialEditorStatsMaterial : 1; // 0x2a0
    uint8_t pad_bitfield_2a0_2 : 6;
    EBlendableLocation BlendableLocation; // 0x2a1
    uint8_t BlendableOutputAlpha : 1; // 0x2a2
    uint8_t bEnableStencilTest : 1; // 0x2a2
    uint8_t pad_bitfield_2a2_2 : 6;
    EMaterialStencilCompare StencilCompare; // 0x2a3
    uint8_t StencilRefValue; // 0x2a4
    ERefractionMode RefractionMode; // 0x2a5
    char pad_2a6[0x2];
    int32_t BlendablePriority; // 0x2a8
    uint8_t bIsBlendable : 1; // 0x2ac
    uint8_t pad_bitfield_2ac_1 : 7;
    char pad_2ad[0x3];
    uint32_t UsageFlagWarnings; // 0x2b0
    float RefractionDepthBias; // 0x2b4
    FGuid StateId; // 0x2b8
    float MaxDisplacement; // 0x2c8
    char pad_2cc[0x34];
    FMaterialCachedExpressionData CachedExpressionData; // 0x300
    static UMaterial* StaticClass();
}; // Size: 0x4d8
#pragma pack(pop)
