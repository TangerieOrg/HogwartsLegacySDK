#pragma once
#include <cstdint>
#include "AActor.hpp"
class USCT_StreamingEventWrapper;
class UWorld;
#pragma pack(push, 1)
class ASCT_LevelController : public AActor {
public:
    char pad_248[0x28];
    TArray<void*> ConstLevelsToStream; // 0x270
    bool bUseBlockingStreaming; // 0x280
    bool bRunLevelMiners; // 0x281
    char pad_282[0x6];
    TArray<FName> MinerNamesToRun; // 0x288
    bool bFlushAsyncThreadBeforeStreaming; // 0x298
    bool bStreamLevelsIndependently; // 0x299
    bool bUnloadLevelsPriorExit; // 0x29a
    bool bExitAtEnd; // 0x29b
    char pad_29c[0x2c];
    TArray<USCT_StreamingEventWrapper*> StreamingEvents; // 0x2c8
    UWorld* LevelToAnalyze; // 0x2d8
    char pad_2e0[0x8];
    static ASCT_LevelController* StaticClass();
}; // Size: 0x2e8
#pragma pack(pop)
