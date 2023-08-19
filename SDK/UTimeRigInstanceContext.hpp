#pragma once
#include <cstdint>
#include "FRandomStream.hpp"
#include "FTimeRigCoordinate.hpp"
#include "FTimeRigCursor.hpp"
#include "FTimeRigEnterExitEntry.hpp"
#include "FTimeRigEventToHandle.hpp"
#include "UObject.hpp"
class UTimeRig;
class UTimeRigEvent;
#pragma pack(push, 1)
class UTimeRigInstanceContext : public UObject {
public:
    UTimeRig* TimeRig; // 0x28
    char pad_30[0x50];
    bool IsHammerTime; // 0x80
    char pad_81[0x3];
    FRandomStream RandomStream; // 0x84
    bool InitializeAsPaused; // 0x8c
    bool IsInEditor; // 0x8d
    char pad_8e[0x2];
    FTimeRigCursor CurrentCursor; // 0x90
    FTimeRigCoordinate InitializationDuration; // 0x98
    FTimeRigCoordinate LastInitializationError; // 0x9c
    bool bSkippingEnabled; // 0xa0
    bool bInUnskippableSection; // 0xa1
    bool bSkipping; // 0xa2
    char pad_a3[0x115];
    TArray<UTimeRigInstanceContext*> EmbeddedContexts; // 0x1b8
    char pad_1c8[0xf8];
    TArray<FTimeRigEnterExitEntry> EnteringExitingEntries; // 0x2c0
    char pad_2d0[0x190];
    TArray<FTimeRigEventToHandle> EventsToHandle; // 0x460
    TArray<UTimeRigEvent*> EventsRegisteredToBeHandled; // 0x470
    char pad_480[0x238];
    static UTimeRigInstanceContext* StaticClass();
}; // Size: 0x6b8
#pragma pack(pop)
