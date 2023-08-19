#pragma once
#include <cstdint>
#include "UObject.hpp"
class UWatcherRecord;
#pragma pack(push, 1)
class UBaseWatcher : public UObject {
public:
    char pad_28[0x90];
    UWatcherRecord* WatcherRecord; // 0xb8
    char pad_c0[0x50];
    static UBaseWatcher* StaticClass();
    void FiltersHaveChanged(bool bNewResult);
}; // Size: 0x110
#pragma pack(pop)
