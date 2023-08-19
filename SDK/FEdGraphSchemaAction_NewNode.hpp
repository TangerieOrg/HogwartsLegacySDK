#pragma once
#include <cstdint>
#include "FEdGraphSchemaAction.hpp"
class UEdGraphNode;
#pragma pack(push, 1)
struct FEdGraphSchemaAction_NewNode : public FEdGraphSchemaAction {
    UEdGraphNode* NodeTemplate; // 0x100
}; // Size: 0x108
#pragma pack(pop)
