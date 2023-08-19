#pragma once
#include <cstdint>
#include "UDataAsset.hpp"
class UPT_Tree;
class UDataTable;
#pragma pack(push, 1)
class UPT_Progression : public UDataAsset {
public:
    UPT_Tree* m_tree; // 0x30
    UDataTable* m_baseValues; // 0x38
    UDataTable* m_upgrades; // 0x40
    static UPT_Progression* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
