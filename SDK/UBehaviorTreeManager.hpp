#pragma once
#include <cstdint>
#include "FBehaviorTreeTemplateInfo.hpp"
#include "UObject.hpp"
class UBehaviorTreeComponent;
#pragma pack(push, 1)
class UBehaviorTreeManager : public UObject {
public:
    int32_t MaxDebuggerSteps; // 0x28
    char pad_2c[0x4];
    TArray<FBehaviorTreeTemplateInfo> LoadedTemplates; // 0x30
    TArray<UBehaviorTreeComponent*> ActiveComponents; // 0x40
    static UBehaviorTreeManager* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
