#pragma once
#include <cstdint>
#include "UObject.hpp"
class UClass;
class UEdGraphNode;
#pragma pack(push, 1)
class UEdGraph : public UObject {
public:
    UClass* Schema; // 0x28
    TArray<UEdGraphNode*> Nodes; // 0x30
    uint8_t bEditable : 1; // 0x40
    uint8_t bAllowDeletion : 1; // 0x40
    uint8_t bAllowRenaming : 1; // 0x40
    uint8_t pad_bitfield_40_3 : 5;
    char pad_41[0x1f];
    static UEdGraph* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
