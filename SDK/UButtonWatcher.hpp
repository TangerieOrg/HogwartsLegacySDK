#pragma once
#include <cstdint>
#include "UBaseWatcher.hpp"
class UWatcherRecord;
#pragma pack(push, 1)
class UButtonWatcher : public UBaseWatcher {
public:
    char pad_110[0x48];
    static UButtonWatcher* StaticClass();
    void ModifierChanged(bool NewResult);
    void FlushQueuedActions(UWatcherRecord* InWatcherRecord);
    void ExpressionChanged(bool NewResult);
    void ButtonReleased();
    void ButtonPressed();
    void ActionInitiate();
    void ActionCancel();
}; // Size: 0x158
#pragma pack(pop)
