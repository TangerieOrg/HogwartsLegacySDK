#pragma once
#include <cstdint>
#include "AInfo.hpp"
class UVolumetricCloudComponent;
#pragma pack(push, 1)
class AVolumetricCloud : public AInfo {
public:
    UVolumetricCloudComponent* VolumetricCloudComponent; // 0x248
    static AVolumetricCloud* StaticClass();
}; // Size: 0x250
#pragma pack(pop)
