#pragma once
#include <cstdint>
#include "AFireOnceSpellTool.hpp"
#pragma pack(push, 1)
class AObliviateSpellTool : public AFireOnceSpellTool {
public:
    float DazeTime; // 0x870
    char pad_874[0x4];
    static AObliviateSpellTool* StaticClass();
}; // Size: 0x878
#pragma pack(pop)
