#pragma once
#include <cstdint>
#include "FTurnDirectionNavMeshCheckSettings.hpp"
#include "UAblAnimationTagChooser_TurnDirection.hpp"
#pragma pack(push, 1)
class UAblAnimationTagChooser_CreatureTurnDirectionWithNavCheck : public UAblAnimationTagChooser_TurnDirection {
public:
    TArray<FTurnDirectionNavMeshCheckSettings> NavMeshCheckSettings; // 0x68
    static UAblAnimationTagChooser_CreatureTurnDirectionWithNavCheck* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
