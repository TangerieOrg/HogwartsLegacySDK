#pragma once
#include <cstdint>
#include "AFireOnceSpellTool.hpp"
class UCurveFloat;
class UMultiFX2_Base;
#pragma pack(push, 1)
class AAvadaKedavraSpellTool : public AFireOnceSpellTool {
public:
    UCurveFloat* TimeDilationCurve; // 0x870
    TArray<UMultiFX2_Base*> KillCursedFX2; // 0x878
    static AAvadaKedavraSpellTool* StaticClass();
}; // Size: 0x888
#pragma pack(pop)
