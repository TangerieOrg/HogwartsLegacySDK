#pragma once
#include <cstdint>
#include "UObject.hpp"
class UThumbnailInfo;
#pragma pack(push, 1)
class UHoudiniAsset : public UObject {
public:
    FString AssetFileName; // 0x28
    UThumbnailInfo* ThumbnailInfo; // 0x38
    char pad_40[0x18];
    static UHoudiniAsset* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
