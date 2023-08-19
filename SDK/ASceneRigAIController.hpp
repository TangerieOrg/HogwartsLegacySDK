#pragma once
#include <cstdint>
#include "ASocialNavigatorController.hpp"
#pragma pack(push, 1)
class ASceneRigAIController : public ASocialNavigatorController {
public:
    char pad_508[0x38];
    static ASceneRigAIController* StaticClass();
}; // Size: 0x540
#pragma pack(pop)
