#include "AActor.hpp"
#include "ASpiderWeb_EggSack.hpp"
#include "AStaticMeshActor.hpp"
#include "EObjectTypeQuery.hpp"
#include "ESpiderTypeEnum.hpp"
#include "FBTCustomAction.hpp"
#include "FHitResult.hpp"
#include "FVariantMapHandle.hpp"
#include "UEnemy_SpawnSpiders.hpp"
#include "UFunction.hpp"
#include "UInteractionArchitectAsset.hpp"
void ASpiderWeb_EggSack::SpawnEnemySpiders() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderWeb_EggSack.SpawnEnemySpiders"));
    struct Params_SpawnEnemySpiders {
    }; // Size: 0x0
    Params_SpawnEnemySpiders params{};
    ProcessEvent(func, &params);
}
ASpiderWeb_EggSack* ASpiderWeb_EggSack::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SpiderWeb_EggSack");
    return (ASpiderWeb_EggSack*)res;
}
void ASpiderWeb_EggSack::StartAccioTimer(bool i_Start) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderWeb_EggSack.StartAccioTimer"));
    struct Params_StartAccioTimer {
        bool i_Start; // 0x0
    }; // Size: 0x1
    Params_StartAccioTimer params{};
    params.i_Start = (bool)i_Start;
    ProcessEvent(func, &params);
}
void ASpiderWeb_EggSack::InitializeSack(float i_LootChance, float i_SpiderChance, ESpiderTypeEnum i_SpiderType, int32_t i_SpiderBaseNum, int32_t i_SpiderNumVariation, bool i_bObjectNotSpiders, FString i_ObjectDBID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderWeb_EggSack.InitializeSack"));
    struct Params_InitializeSack {
        float i_LootChance; // 0x0
        float i_SpiderChance; // 0x4
        ESpiderTypeEnum i_SpiderType; // 0x8
        char pad_9[0x3];
        int32_t i_SpiderBaseNum; // 0xc
        int32_t i_SpiderNumVariation; // 0x10
        bool i_bObjectNotSpiders; // 0x14
        char pad_15[0x3];
        FString i_ObjectDBID; // 0x18
    }; // Size: 0x28
    Params_InitializeSack params{};
    params.i_LootChance = (float)i_LootChance;
    params.i_SpiderChance = (float)i_SpiderChance;
    params.i_SpiderType = (ESpiderTypeEnum)i_SpiderType;
    params.i_SpiderBaseNum = (int32_t)i_SpiderBaseNum;
    params.i_SpiderNumVariation = (int32_t)i_SpiderNumVariation;
    params.i_bObjectNotSpiders = (bool)i_bObjectNotSpiders;
    params.i_ObjectDBID = (FString)i_ObjectDBID;
    ProcessEvent(func, &params);
}
void ASpiderWeb_EggSack::SpawnSpiders() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderWeb_EggSack.SpawnSpiders"));
    struct Params_SpawnSpiders {
    }; // Size: 0x0
    Params_SpawnSpiders params{};
    ProcessEvent(func, &params);
}
void ASpiderWeb_EggSack::SpawnLoot() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderWeb_EggSack.SpawnLoot"));
    struct Params_SpawnLoot {
    }; // Size: 0x0
    Params_SpawnLoot params{};
    ProcessEvent(func, &params);
}
void ASpiderWeb_EggSack::OnBreak(bool i_Explode) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderWeb_EggSack.OnBreak"));
    struct Params_OnBreak {
        bool i_Explode; // 0x0
    }; // Size: 0x1
    Params_OnBreak params{};
    params.i_Explode = (bool)i_Explode;
    ProcessEvent(func, &params);
}
void ASpiderWeb_EggSack::SpawnDBObject() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderWeb_EggSack.SpawnDBObject"));
    struct Params_SpawnDBObject {
    }; // Size: 0x0
    Params_SpawnDBObject params{};
    ProcessEvent(func, &params);
}
void ASpiderWeb_EggSack::ExplodeSack() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderWeb_EggSack.ExplodeSack"));
    struct Params_ExplodeSack {
    }; // Size: 0x0
    Params_ExplodeSack params{};
    ProcessEvent(func, &params);
}
void ASpiderWeb_EggSack::AccioBreak() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderWeb_EggSack.AccioBreak"));
    struct Params_AccioBreak {
    }; // Size: 0x0
    Params_AccioBreak params{};
    ProcessEvent(func, &params);
}
