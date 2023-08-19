#pragma once
#include <cstdint>
#include "AActor.hpp"
class UVolumetricCloudsPreviewComponent;
#pragma pack(push, 1)
class AVolumetricCloudsPreviewActor : public AActor {
public:
    UVolumetricCloudsPreviewComponent* PreviewComponent; // 0x248
    static AVolumetricCloudsPreviewActor* StaticClass();
}; // Size: 0x250
#pragma pack(pop)
