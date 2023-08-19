#pragma once
#include <cstdint>
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class UPT_Tree : public UDataAsset {
public:
    FName m_upgradeName; // 0x30
    TArray<UPT_Tree*> m_children; // 0x38
    static UPT_Tree* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
