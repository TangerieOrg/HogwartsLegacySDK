#pragma once
#include <cstdint>
#include "AProtegoSpellTool.hpp"
#include "FPointerToUberGraphFrame.hpp"
class USceneComponent;
#pragma pack(push, 1)
class ABP_ProtegoSpell_C : public AProtegoSpellTool {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xdb0
    USceneComponent* DefaultSceneRoot; // 0xdb8
    static ABP_ProtegoSpell_C* StaticClass();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_ProtegoSpell(int32_t EntryPoint);
}; // Size: 0xdc0
#pragma pack(pop)
