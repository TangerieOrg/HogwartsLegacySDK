#pragma once
#include <cstdint>
#include "ECoverageShapeType.hpp"
#include "UPrimitiveComponent.hpp"
#pragma pack(push, 1)
class UVolumetricCloudsCoverageComponent : public UPrimitiveComponent {
public:
    ECoverageShapeType ShapeType; // 0x480
    char pad_481[0x3];
    float InnerRadius; // 0x484
    float InnerRadiusCoverage; // 0x488
    float OuterRadius; // 0x48c
    float OuterRadiusCoverage; // 0x490
    char pad_494[0x2c];
    static UVolumetricCloudsCoverageComponent* StaticClass();
}; // Size: 0x4c0
#pragma pack(pop)
