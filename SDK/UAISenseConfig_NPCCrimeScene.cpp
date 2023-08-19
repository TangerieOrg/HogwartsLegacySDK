#include "UAISenseConfig_NPC.hpp"
#include "UAISenseConfig_NPCCrimeScene.hpp"
#include "UClass.hpp"
#include "UNPC_CrimeSceneSenseAsset.hpp"
UAISenseConfig_NPCCrimeScene* UAISenseConfig_NPCCrimeScene::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AISenseConfig_NPCCrimeScene");
    return (UAISenseConfig_NPCCrimeScene*)res;
}
