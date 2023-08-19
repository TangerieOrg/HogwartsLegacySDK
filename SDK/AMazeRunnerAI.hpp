#pragma once
#include <cstdint>
#include "ASocialNavigatorController.hpp"
#pragma pack(push, 1)
class AMazeRunnerAI : public ASocialNavigatorController {
public:
    char pad_508[0x8];
    static AMazeRunnerAI* StaticClass();
}; // Size: 0x510
#pragma pack(pop)
