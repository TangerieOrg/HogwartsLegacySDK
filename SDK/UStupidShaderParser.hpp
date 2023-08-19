#pragma once
#include <cstdint>
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class UStupidShaderParser : public UDataAsset {
public:
    static UStupidShaderParser* StaticClass();
    void WriteCSV();
    void Import();
}; // Size: 0x30
#pragma pack(pop)
