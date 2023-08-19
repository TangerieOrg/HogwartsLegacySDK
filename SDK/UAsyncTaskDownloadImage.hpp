#pragma once
#include <cstdint>
#include "UBlueprintAsyncActionBase.hpp"
#pragma pack(push, 1)
class UAsyncTaskDownloadImage : public UBlueprintAsyncActionBase {
public:
    char pad_30[0x20];
    static UAsyncTaskDownloadImage* StaticClass();
    static UAsyncTaskDownloadImage* DownloadImage(FString URL);
}; // Size: 0x50
#pragma pack(pop)
