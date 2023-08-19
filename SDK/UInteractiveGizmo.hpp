#pragma once
#include <cstdint>
#include "UObject.hpp"
class UInputBehaviorSet;
#pragma pack(push, 1)
class UInteractiveGizmo : public UObject {
public:
    char pad_28[0x8];
    UInputBehaviorSet* InputBehaviors; // 0x30
    static UInteractiveGizmo* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
