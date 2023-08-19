#pragma once
#include <cstdint>
#include "UEngine.hpp"
class UGameInstance;
#pragma pack(push, 1)
class UGameEngine : public UEngine {
public:
    float MaxDeltaTime; // 0xe08
    float ServerFlushLogInterval; // 0xe0c
    UGameInstance* GameInstance; // 0xe10
    char pad_e18[0x40];
    static UGameEngine* StaticClass();
}; // Size: 0xe58
#pragma pack(pop)
