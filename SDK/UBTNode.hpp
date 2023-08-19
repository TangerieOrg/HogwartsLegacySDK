#pragma once
#include <cstdint>
#include "UObject.hpp"
class UBehaviorTree;
class UBTCompositeNode;
#pragma pack(push, 1)
class UBTNode : public UObject {
public:
    char pad_28[0x8];
    FString NodeName; // 0x30
    UBehaviorTree* TreeAsset; // 0x40
    UBTCompositeNode* ParentNode; // 0x48
    char pad_50[0x8];
    static UBTNode* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
