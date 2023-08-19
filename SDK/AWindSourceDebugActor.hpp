#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
class UStaticMesh;
class UMaterialInterface;
class UWindSourceDebugUpdateComponent;
class UInstancedStaticMeshComponent;
#pragma pack(push, 1)
class AWindSourceDebugActor : public AActor {
public:
    int32_t PointsXY; // 0x248
    int32_t PointsZ; // 0x24c
    float SpacingXY; // 0x250
    float SpacingZ; // 0x254
    FVector2D WindSpeedMinMax; // 0x258
    FVector2D WindSpeedLengthScaleMinMax; // 0x260
    UStaticMesh* WindArrowMesh; // 0x268
    UMaterialInterface* WindArrowMeshMaterialOverride; // 0x270
    FVector ScaleXYZ; // 0x278
    bool bExactIndoors; // 0x284
    bool bPerSampleInsideTesting; // 0x285
    bool bWindSpeedLengthScaling; // 0x286
    char pad_287[0x1];
    UWindSourceDebugUpdateComponent* UpdatePump; // 0x288
    UInstancedStaticMeshComponent* WindArrows; // 0x290
    static AWindSourceDebugActor* StaticClass();
}; // Size: 0x298
#pragma pack(pop)
