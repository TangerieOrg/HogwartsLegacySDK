#pragma once
#include <cstdint>
#include "UObject.hpp"
class UInputBehaviorSet;
#pragma pack(push, 1)
class UInputRouter : public UObject {
public:
    bool bAutoInvalidateOnHover; // 0x28
    bool bAutoInvalidateOnCapture; // 0x29
    char pad_2a[0xe];
    UInputBehaviorSet* ActiveInputBehaviors; // 0x38
    char pad_40[0x70];
    static UInputRouter* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)
