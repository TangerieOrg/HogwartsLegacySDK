#include "UAISenseConfig.hpp"
#include "UAISenseConfig_Damage.hpp"
#include "UClass.hpp"
UAISenseConfig_Damage* UAISenseConfig_Damage::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.AISenseConfig_Damage");
    return (UAISenseConfig_Damage*)res;
}
