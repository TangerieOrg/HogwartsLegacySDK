#pragma once
#include <cstdint>
class UClass;
class UEdGraph;
#pragma pack(push, 1)
struct FBPInterfaceDescription {
    UClass* Interface; // 0x0
    TArray<UEdGraph*> Graphs; // 0x8
}; // Size: 0x18
#pragma pack(pop)
