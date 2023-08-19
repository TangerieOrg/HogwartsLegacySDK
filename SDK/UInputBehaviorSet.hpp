#pragma once
#include <cstdint>
#include "FBehaviorInfo.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UInputBehaviorSet : public UObject {
public:
    TArray<FBehaviorInfo> Behaviors; // 0x28
    static UInputBehaviorSet* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
