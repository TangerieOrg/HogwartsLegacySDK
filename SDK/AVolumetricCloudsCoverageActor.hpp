#pragma once
#include <cstdint>
#include "AActor.hpp"
class UVolumetricCloudsCoverageComponent;
#pragma pack(push, 1)
class AVolumetricCloudsCoverageActor : public AActor {
public:
    UVolumetricCloudsCoverageComponent* CoverageComponent; // 0x248
    static AVolumetricCloudsCoverageActor* StaticClass();
}; // Size: 0x250
#pragma pack(pop)
