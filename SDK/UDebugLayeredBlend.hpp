#pragma once
#include <cstdint>
#include "UDebugWindow.hpp"
class AActor;
#pragma pack(push, 1)
class UDebugLayeredBlend : public UDebugWindow {
public:
    AActor* DebugActor; // 0x40
    char pad_48[0x80];
    static UDebugLayeredBlend* StaticClass();
}; // Size: 0xc8
#pragma pack(pop)
