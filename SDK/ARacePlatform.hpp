#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FDbSingleColumnInfo.hpp"
class UCognitionStimuliSourceComponent;
class UClass;
#pragma pack(push, 1)
class ARacePlatform : public AActor {
public:
    UCognitionStimuliSourceComponent* CognitionStimuliSource; // 0x248
    FDbSingleColumnInfo RaceId; // 0x250
    UClass* RaceWidgetClass; // 0x2d8
    static ARacePlatform* StaticClass();
    void OnPlatformUnlocked();
    void OnPlatformLocked();
}; // Size: 0x2e0
#pragma pack(pop)
