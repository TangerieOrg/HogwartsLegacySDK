#include "FAISenseAffiliationFilter.hpp"
#include "UAISenseConfig.hpp"
#include "UAISenseConfig_Sight.hpp"
#include "UClass.hpp"
UAISenseConfig_Sight* UAISenseConfig_Sight::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.AISenseConfig_Sight");
    return (UAISenseConfig_Sight*)res;
}
