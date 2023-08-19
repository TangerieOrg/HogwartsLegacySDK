#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UStencilManagerDynamicLock : public UObject {
public:
    char pad_28[0x8];
    int32_t Priority; // 0x30
    uint32_t LastUsedStencilValue; // 0x34
    static UStencilManagerDynamicLock* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
