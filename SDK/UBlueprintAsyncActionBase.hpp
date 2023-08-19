#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UBlueprintAsyncActionBase : public UObject {
public:
    char pad_28[0x8];
    static UBlueprintAsyncActionBase* StaticClass();
    void Activate();
}; // Size: 0x30
#pragma pack(pop)
