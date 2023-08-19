#pragma once
#include <cstdint>
#include "UUtilityContext.hpp"
class ACreature_Character;
class UCreatureDefinition;
class UObjectStateInfo;
class UCreatureState;
class AActor;
#pragma pack(push, 1)
class UCreatureUtilityContext : public UUtilityContext {
public:
    ACreature_Character* SelfCreatureCharacter; // 0x118
    UObjectStateInfo* SelfObjectStateInfo; // 0x120
    UCreatureDefinition* SelfCreatureDefinition; // 0x128
    UCreatureState* SelfCreatureState; // 0x130
    TArray<AActor*> TransfigurationActors; // 0x138
    char pad_148[0x50];
    static UCreatureUtilityContext* StaticClass();
}; // Size: 0x198
#pragma pack(pop)
