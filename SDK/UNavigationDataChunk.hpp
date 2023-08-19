#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UNavigationDataChunk : public UObject {
public:
    FName NavigationDataName; // 0x28
    static UNavigationDataChunk* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
