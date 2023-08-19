#pragma once
#include <cstdint>
#include "UObject.hpp"
class UInputBehaviorSet;
#pragma pack(push, 1)
class UInteractiveTool : public UObject {
public:
    char pad_28[0x20];
    UInputBehaviorSet* InputBehaviors; // 0x48
    TArray<UObject*> ToolPropertyObjects; // 0x50
    char pad_60[0x20];
    static UInteractiveTool* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
