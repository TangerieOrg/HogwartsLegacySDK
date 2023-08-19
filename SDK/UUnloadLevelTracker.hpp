#pragma once
#include <cstdint>
#include "UObject.hpp"
class UWorld;
class ULevelStreaming;
class UObjectStateManager;
#pragma pack(push, 1)
class UUnloadLevelTracker : public UObject {
public:
    char pad_28[0x8];
    UWorld* World; // 0x30
    ULevelStreaming* StreamingLevel; // 0x38
    UObjectStateManager* Manager; // 0x40
    TArray<FString> RemovedOSINames; // 0x48
    char pad_58[0x18];
    static UUnloadLevelTracker* StaticClass();
    void OnLevelUnloaded();
    void Cleanup();
}; // Size: 0x70
#pragma pack(pop)
