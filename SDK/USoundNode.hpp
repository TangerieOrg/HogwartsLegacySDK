#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class USoundNode : public UObject {
public:
    TArray<USoundNode*> ChildNodes; // 0x28
    char pad_38[0x10];
    static USoundNode* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
