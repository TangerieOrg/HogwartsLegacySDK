#pragma once
#include <cstdint>
#include "FSoftClassPath.hpp"
#include "FSoftObjectPath.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UPhoenixPreloadSettings : public UObject {
public:
    bool bPreloadAssets; // 0x28
    char pad_29[0x7];
    TArray<FSoftClassPath> ClassesToPreload; // 0x30
    bool bPreloadArchitectAssets; // 0x40
    char pad_41[0x7];
    FSoftObjectPath ArchitectPreloadListPath; // 0x48
    bool bPreloadCreatureManagerAssets; // 0x60
    char pad_61[0x7];
    static UPhoenixPreloadSettings* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
