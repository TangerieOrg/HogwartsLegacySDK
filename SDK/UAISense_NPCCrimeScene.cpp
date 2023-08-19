#include "UAISense_NPC.hpp"
#include "UAISense_NPCCrimeScene.hpp"
UAISense_NPCCrimeScene* UAISense_NPCCrimeScene::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AISense_NPCCrimeScene");
    return (UAISense_NPCCrimeScene*)res;
}
