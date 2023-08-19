#pragma once
#include <cstdint>
#include "UBaseMediaSource.hpp"
#pragma pack(push, 1)
class UStreamMediaSource : public UBaseMediaSource {
public:
    FString StreamUrl; // 0x88
    static UStreamMediaSource* StaticClass();
}; // Size: 0x98
#pragma pack(pop)
