#pragma once
#include <cstdint>
#include "UMastermindDebugCommandManager.hpp"
class UObject;
#pragma pack(push, 1)
class UPhoenixMMDebugCommandManager : public UMastermindDebugCommandManager {
public:
    TArray<UObject*> CommandClasses; // 0x60
    static UPhoenixMMDebugCommandManager* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
