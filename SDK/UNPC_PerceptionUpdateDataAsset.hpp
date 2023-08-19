#pragma once
#include <cstdint>
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class UNPC_PerceptionUpdateDataAsset : public UDataAsset {
public:
    char pad_30[0x50];
    static UNPC_PerceptionUpdateDataAsset* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
