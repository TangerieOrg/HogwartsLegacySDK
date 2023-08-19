#pragma once
#include <cstdint>
#include "AActor.hpp"
class URuntimeVirtualTextureComponent;
#pragma pack(push, 1)
class ARuntimeVirtualTextureVolume : public AActor {
public:
    URuntimeVirtualTextureComponent* VirtualTextureComponent; // 0x248
    static ARuntimeVirtualTextureVolume* StaticClass();
}; // Size: 0x250
#pragma pack(pop)
