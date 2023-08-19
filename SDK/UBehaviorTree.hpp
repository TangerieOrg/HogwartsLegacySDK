#pragma once
#include <cstdint>
#include "FBTDecoratorLogic.hpp"
#include "UObject.hpp"
class UBTCompositeNode;
class UBlackboardData;
class UBTDecorator;
#pragma pack(push, 1)
class UBehaviorTree : public UObject {
public:
    char pad_28[0x8];
    UBTCompositeNode* RootNode; // 0x30
    UBlackboardData* BlackboardAsset; // 0x38
    TArray<UBTDecorator*> RootDecorators; // 0x40
    TArray<FBTDecoratorLogic> RootDecoratorOps; // 0x50
    char pad_60[0x8];
    static UBehaviorTree* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
