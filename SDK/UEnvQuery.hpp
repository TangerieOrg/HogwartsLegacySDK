#pragma once
#include <cstdint>
#include "UDataAsset.hpp"
class UEnvQueryOption;
#pragma pack(push, 1)
class UEnvQuery : public UDataAsset {
public:
    FName QueryName; // 0x30
    TArray<UEnvQueryOption*> OPTIONS; // 0x38
    static UEnvQuery* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
