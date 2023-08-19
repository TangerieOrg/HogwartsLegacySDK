#pragma once
#include <cstdint>
#include "AActor.hpp"
class UObjectStateComponent;
#pragma pack(push, 1)
class ASimpleBreakable : public AActor {
public:
    UObjectStateComponent* ObjectState; // 0x248
    static ASimpleBreakable* StaticClass();
}; // Size: 0x250
#pragma pack(pop)
