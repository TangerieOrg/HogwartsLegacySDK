#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UPageStack : public UObject {
public:
    char pad_28[0x10];
    static UPageStack* StaticClass();
    void Reset();
    void Push(FString Widget);
    FString Pop();
    FString Peek();
    TArray<FString> GetStack();
}; // Size: 0x38
#pragma pack(pop)
