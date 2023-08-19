#pragma once
#include <cstdint>
#include "FBTDecoratorLogic.hpp"
class UBTCompositeNode;
class UBTTaskNode;
class UBTDecorator;
#pragma pack(push, 1)
struct FBTCompositeChild {
    UBTCompositeNode* ChildComposite; // 0x0
    UBTTaskNode* ChildTask; // 0x8
    TArray<UBTDecorator*> Decorators; // 0x10
    TArray<FBTDecoratorLogic> DecoratorOps; // 0x20
}; // Size: 0x30
#pragma pack(pop)
