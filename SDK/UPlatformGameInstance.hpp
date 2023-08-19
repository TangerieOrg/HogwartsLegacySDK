#pragma once
#include <cstdint>
#include "UGameInstance.hpp"
#pragma pack(push, 1)
class UPlatformGameInstance : public UGameInstance {
public:
    char pad_1a8[0xd0];
    static UPlatformGameInstance* StaticClass();
}; // Size: 0x278
#pragma pack(pop)
