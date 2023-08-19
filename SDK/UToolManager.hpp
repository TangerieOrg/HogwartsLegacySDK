#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UToolManager : public UObject {
public:
    char pad_28[0x8];
    TArray<void*> ToolList; // 0x30
    static UToolManager* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
