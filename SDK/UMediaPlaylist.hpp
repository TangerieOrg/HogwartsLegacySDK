#pragma once
#include <cstdint>
#include "UObject.hpp"
class UMediaSource;
#pragma pack(push, 1)
class UMediaPlaylist : public UObject {
public:
    TArray<UMediaSource*> Items; // 0x28
    static UMediaPlaylist* StaticClass();
    bool Replace(int32_t Index, UMediaSource* Replacement);
    bool RemoveAt(int32_t Index);
    bool Remove(UMediaSource* MediaSource);
    int32_t Num();
    void Insert(UMediaSource* MediaSource, int32_t Index);
    UMediaSource* GetRandom(int32_t& OutIndex);
    UMediaSource* GetPrevious(int32_t& InOutIndex);
    UMediaSource* GetNext(int32_t& InOutIndex);
    UMediaSource* Get(int32_t Index);
    bool AddUrl(FString URL);
    bool AddFile(FString FilePath);
    bool Add(UMediaSource* MediaSource);
}; // Size: 0x38
#pragma pack(pop)
