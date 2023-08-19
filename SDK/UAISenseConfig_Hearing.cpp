#include "FAISenseAffiliationFilter.hpp"
#include "UAISenseConfig.hpp"
#include "UAISenseConfig_Hearing.hpp"
#include "UClass.hpp"
UAISenseConfig_Hearing* UAISenseConfig_Hearing::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.AISenseConfig_Hearing");
    return (UAISenseConfig_Hearing*)res;
}
