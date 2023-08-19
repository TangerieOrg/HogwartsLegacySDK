#pragma once
#include <cstdint>
#include "ASocialNavigatorController.hpp"
#pragma pack(push, 1)
class AWalkToLocationAutomationAIController : public ASocialNavigatorController {
public:
    char pad_508[0x130];
    static AWalkToLocationAutomationAIController* StaticClass();
}; // Size: 0x638
#pragma pack(pop)
