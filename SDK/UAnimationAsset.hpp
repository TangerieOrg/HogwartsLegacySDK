#pragma once
#include <cstdint>
#include "UObject.hpp"
class USkeleton;
class UAnimMetaData;
class UAssetUserData;
#pragma pack(push, 1)
class UAnimationAsset : public UObject {
public:
    char pad_28[0x10];
    USkeleton* Skeleton; // 0x38
    char pad_40[0x20];
    TArray<UAnimMetaData*> MetaData; // 0x60
    TArray<UAssetUserData*> AssetUserData; // 0x70
    static UAnimationAsset* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
