#pragma once
#include <cstdint>
#include "AFireOnceSpellTool.hpp"
class UMultiFX2_Base;
class UActorComponent;
#pragma pack(push, 1)
class AReparoMaximaSpellTool : public AFireOnceSpellTool {
public:
    TArray<UMultiFX2_Base*> RestoreLocationFX2; // 0x870
    float FailSafeTime; // 0x880
    char pad_884[0x5c];
    static AReparoMaximaSpellTool* StaticClass();
    void ARepairComplete(UActorComponent* Comp);
}; // Size: 0x8e0
#pragma pack(pop)
