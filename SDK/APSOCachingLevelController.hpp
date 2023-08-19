#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "EPSOCachingLevelMode.hpp"
#include "FSoftObjectPath.hpp"
class UClass;
#pragma pack(push, 1)
class APSOCachingLevelController : public AActor {
public:
    float CameraRotationSpeed; // 0x248
    char pad_24c[0x4];
    TArray<UClass*> PreviewedAssetTypes; // 0x250
    char pad_260[0x50];
    TArray<FSoftObjectPath> PredefinedAssetsForPreview; // 0x2b0
    int32_t DebugFastAssetsCount; // 0x2c0
    EPSOCachingLevelMode Mode; // 0x2c4
    char pad_2c8[0x18];
    static APSOCachingLevelController* StaticClass();
}; // Size: 0x2e0
#pragma pack(pop)
