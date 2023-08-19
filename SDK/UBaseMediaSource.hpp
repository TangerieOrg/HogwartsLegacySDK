#pragma once
#include <cstdint>
#include "UMediaSource.hpp"
#pragma pack(push, 1)
class UBaseMediaSource : public UMediaSource {
public:
    FName PlayerName; // 0x80
    static UBaseMediaSource* StaticClass();
}; // Size: 0x88
#pragma pack(pop)
