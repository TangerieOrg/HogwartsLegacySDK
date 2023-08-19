#include "FAISenseAffiliationFilter.hpp"
#include "UAISenseConfig.hpp"
#include "UAISenseConfig_Magic.hpp"
UAISenseConfig_Magic* UAISenseConfig_Magic::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AISenseConfig_Magic");
    return (UAISenseConfig_Magic*)res;
}
