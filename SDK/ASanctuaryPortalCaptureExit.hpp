#pragma once
#include <cstdint>
#include "AActor.hpp"
class USceneCaptureComponentCubeIncremental;
class UClass;
#pragma pack(push, 1)
class ASanctuaryPortalCaptureExit : public AActor {
public:
    USceneCaptureComponentCubeIncremental* SceneCaptureComponent; // 0x248
    TArray<UClass*> HiddenActorClasses; // 0x250
    TArray<void*> HiddenActorInstances; // 0x260
    static ASanctuaryPortalCaptureExit* StaticClass();
}; // Size: 0x270
#pragma pack(pop)
