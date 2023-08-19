#pragma once
#include <cstdint>
#include "FGuid.hpp"
class UEdGraph;
class UBlueprint;
#pragma pack(push, 1)
struct FGraphReference {
    UEdGraph* MacroGraph; // 0x0
    UBlueprint* GraphBlueprint; // 0x8
    FGuid GraphGuid; // 0x10
}; // Size: 0x20
#pragma pack(pop)
