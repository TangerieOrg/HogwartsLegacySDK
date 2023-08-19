#pragma once
#include <cstdint>
#include "FComponentOverrideRecord.hpp"
#include "UObject.hpp"
class UActorComponent;
#pragma pack(push, 1)
class UInheritableComponentHandler : public UObject {
public:
    TArray<FComponentOverrideRecord> Records; // 0x28
    TArray<UActorComponent*> UnnecessaryComponents; // 0x38
    static UInheritableComponentHandler* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
