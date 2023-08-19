#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "E_AVA_OverlandSpiderTypes\Type.hpp"
#include "FVector2D.hpp"
class UChildActorComponent;
class USceneComponent;
class ABP_SpiderEggs_C;
class AEncounterLocationCreator;
#pragma pack(push, 1)
class ABP_SpiderCamp_A_C : public AActor {
public:
    UChildActorComponent* BP_BanditCamp_Marker; // 0x248
    UChildActorComponent* BP_SpiderEggs; // 0x250
    USceneComponent* DefaultSceneRoot; // 0x258
    AEncounterLocationCreator* Instanced_AI_Creator; // 0x260
    bool Turn_OFF_Marker; // 0x268
    E_AVA_OverlandSpiderTypes::Type Spider_Type; // 0x269
    bool Turn_OFF_Additiona_Eggs; // 0x26a
    char pad_26b[0x1];
    FVector2D M_Spider_Spawn_Range; // 0x26c
    char pad_274[0x4];
    static ABP_SpiderCamp_A_C* StaticClass();
    void UserConstructionScript0(bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, ABP_SpiderEggs_C* K2Node_DynamicCast_AsBP_Spider_Eggs, bool K2Node_DynamicCast_bSuccess);
}; // Size: 0x278
#pragma pack(pop)
