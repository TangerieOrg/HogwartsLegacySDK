#pragma once
#include <cstdint>
#include "UUserWidget.hpp"
class UImage;
class UButton;
class UCreatureDefinition;
class UCreatureState;
#pragma pack(push, 1)
class UUI_BP_CreatureByproduct_C : public UUserWidget {
public:
    UImage* ByproductIcon; // 0x268
    UButton* HitZone; // 0x270
    UCreatureState* CreatureState; // 0x278
    static UUI_BP_CreatureByproduct_C* StaticClass();
    void Setup(UCreatureState* InCreatureState, UCreatureDefinition* CallFunc_GetDefinition_ReturnValue, FName CallFunc_GetByproductID_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_AsyncFindIconTexture2D_ReturnValue);
}; // Size: 0x280
#pragma pack(pop)
