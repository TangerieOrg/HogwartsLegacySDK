#pragma once
#include <cstdint>
#include "EAvaReflectionCullType.hpp"
#include "EAvaReflectionTimeType.hpp"
#include "EMobileReflectionCompression.hpp"
#include "EReflectionSourceType.hpp"
#include "FGuid.hpp"
#include "FVector.hpp"
#include "USceneComponent.hpp"
class UBillboardComponent;
class UTextureCube;
#pragma pack(push, 1)
class UReflectionCaptureComponent : public USceneComponent {
public:
    EReflectionSourceType ReflectionSourceType; // 0x220
    EMobileReflectionCompression MobileReflectionCompression; // 0x221
    char pad_222[0x6];
    UTextureCube* CubeMap; // 0x228
    float SourceCubemapAngle; // 0x230
    float Brightness; // 0x234
    bool bModifyMaxValueRGBM; // 0x238
    char pad_239[0x3];
    float MaxValueRGBM; // 0x23c
    FVector CaptureOffset; // 0x240
    EAvaReflectionCullType CullType; // 0x24c
    bool bStaticSceneOnly; // 0x250
    char pad_251[0x3];
    EAvaReflectionTimeType CaptureTimeType; // 0x254
    float CaptureTimeHour; // 0x258
    int32_t CaptureTimeSlot; // 0x25c
    float DirectionalLightScale; // 0x260
    bool bCaptureFog; // 0x264
    bool bCaptureFogVolumetric; // 0x265
    bool bExcludeFromWater; // 0x266
    char pad_267[0x1];
    FGuid MapBuildDataId; // 0x268
    char pad_278[0x10];
    UTextureCube* CachedEncodedHDRCubemap; // 0x288
    char pad_290[0x20];
    static UReflectionCaptureComponent* StaticClass();
}; // Size: 0x2b0
#pragma pack(pop)
