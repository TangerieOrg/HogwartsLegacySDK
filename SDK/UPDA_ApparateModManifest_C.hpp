#pragma once
#include <cstdint>
#include "UPrimaryDataAsset.hpp"
#pragma pack(push, 1)
class UPDA_ApparateModManifest_C : public UPrimaryDataAsset {
public:
    TArray<FString> Dependencies; // 0x30
    char pad_40[0x50];
    static UPDA_ApparateModManifest_C* StaticClass();
    void GetInfoOrDefault(FString Key, FString Default, FString& Value, FString CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, FString CallFunc_SelectString_ReturnValue);
}; // Size: 0x90
#pragma pack(pop)
