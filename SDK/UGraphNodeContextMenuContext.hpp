#pragma once
#include <cstdint>
#include "UObject.hpp"
class UBlueprint;
class UEdGraph;
class UEdGraphNode;
#pragma pack(push, 1)
class UGraphNodeContextMenuContext : public UObject {
public:
    UBlueprint* Blueprint; // 0x28
    UEdGraph* Graph; // 0x30
    UEdGraphNode* Node; // 0x38
    char pad_40[0x8];
    bool bIsDebugging; // 0x48
    char pad_49[0x7];
    static UGraphNodeContextMenuContext* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
