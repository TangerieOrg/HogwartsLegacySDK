#pragma once
#include <cstdint>
#include "AFireOnceSpellTool.hpp"
class UMultiFX2_Base;
class UGameplayPropertyMod;
class UStateEffectComponent;
#pragma pack(push, 1)
class AImperiusSpellTool : public AFireOnceSpellTool {
public:
    TArray<UMultiFX2_Base*> ImperiusFX2; // 0x870
    UGameplayPropertyMod* Mod; // 0x880
    char pad_888[0x8];
    static AImperiusSpellTool* StaticClass();
    void DoSpellComponentSetup(UStateEffectComponent* StateEffectComponent);
}; // Size: 0x890
#pragma pack(pop)
