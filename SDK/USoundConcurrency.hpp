#pragma once
#include <cstdint>
#include "FSoundConcurrencySettings.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class USoundConcurrency : public UObject {
public:
    FSoundConcurrencySettings Concurrency; // 0x28
    static USoundConcurrency* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
