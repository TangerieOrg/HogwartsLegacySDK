#pragma once
#include <cstdint>
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class UNPC_QBUpdateDataAsset : public UDataAsset {
public:
    char pad_30[0x50];
    static UNPC_QBUpdateDataAsset* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
