#pragma once
#include <cstdint>
#include "ACreatureInteractionTool.hpp"
#pragma pack(push, 1)
class ACreaturePettingTool : public ACreatureInteractionTool {
public:
    static ACreaturePettingTool* StaticClass();
    void RemoveAimAtTarget();
    void AddAimAtTarget();
}; // Size: 0x450
#pragma pack(pop)
