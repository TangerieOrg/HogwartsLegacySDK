#pragma once
#include <cstdint>
#include "AActor.hpp"
class UHoudiniAssetComponent;
#pragma pack(push, 1)
class AHoudiniAssetActor : public AActor {
public:
    UHoudiniAssetComponent* HoudiniAssetComponent; // 0x248
    char pad_250[0x8];
    static AHoudiniAssetActor* StaticClass();
}; // Size: 0x258
#pragma pack(pop)
