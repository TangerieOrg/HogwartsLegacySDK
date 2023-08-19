#pragma once
#include <cstdint>
#include "AFireOnceSpellTool.hpp"
class UMultiFX2_Base;
class UClass;
#pragma pack(push, 1)
class AArrestoMomentumSpellTool : public AFireOnceSpellTool {
public:
    float SlowDownTime; // 0x870
    float SpeedUpTime; // 0x874
    float ObjectMassMax; // 0x878
    float CharacterMassMax; // 0x87c
    float MaxLinearDamping; // 0x880
    float MaxAngularDamping; // 0x884
    float CharacterTimeDilation; // 0x888
    char pad_88c[0x4];
    TArray<UMultiFX2_Base*> ArrestoMomentumFX2; // 0x890
    UClass* AOEMunition; // 0x8a0
    char pad_8a8[0x10];
    static AArrestoMomentumSpellTool* StaticClass();
}; // Size: 0x8b8
#pragma pack(pop)
