#pragma once
#include <cstdint>
#include "AActor.hpp"
class USceneComponent;
#pragma pack(push, 1)
class ABP_OverlandVars_C : public AActor {
public:
    USceneComponent* DefaultSceneRoot; // 0x248
    bool All_Additional_Levels_OFF; // 0x250
    bool Hogwarts_OFF; // 0x251
    bool Hogsmeade_OFF; // 0x252
    bool Percival_Tower_OFF; // 0x253
    bool All_Large_Bandit_Camps_OFF; // 0x254
    bool All_Interior_Tents_OFF; // 0x255
    bool Quidditch_Cine_OFF; // 0x256
    char pad_257[0x1];
    static ABP_OverlandVars_C* StaticClass();
}; // Size: 0x258
#pragma pack(pop)
