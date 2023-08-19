#pragma once
#include <cstdint>
#include "FCameraStackData.hpp"
#include "UDataAsset.hpp"
class UObject;
#pragma pack(push, 1)
class UCameraStackSettings : public UDataAsset {
public:
    FCameraStackData StackData; // 0x30
    char pad_48[0x50];
    static UCameraStackSettings* StaticClass();
    FCameraStackData GetStackData(UObject* WorldContextObject);
}; // Size: 0x98
#pragma pack(pop)
