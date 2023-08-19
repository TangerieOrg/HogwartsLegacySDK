#pragma once
#include <cstdint>
#include "FDelegateArray.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UPlatformInterfaceBase : public UObject {
public:
    TArray<FDelegateArray> AllDelegates; // 0x28
    static UPlatformInterfaceBase* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
