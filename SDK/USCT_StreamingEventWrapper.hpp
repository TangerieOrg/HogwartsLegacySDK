#pragma once
#include <cstdint>
#include "UObject.hpp"
class ASCT_LevelController;
class ULevelStreaming;
#pragma pack(push, 1)
class USCT_StreamingEventWrapper : public UObject {
public:
    ASCT_LevelController* LevelController; // 0x28
    ULevelStreaming* LevelStreaming; // 0x30
    char pad_38[0x18];
    static USCT_StreamingEventWrapper* StaticClass();
    void OnLevelUnloaded();
    void OnLevelShown();
    void OnLevelLoaded();
    void OnLevelHidden();
}; // Size: 0x50
#pragma pack(pop)
