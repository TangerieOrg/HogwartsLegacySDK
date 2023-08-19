#include "ACreatureGrowUpHandler.hpp"
#include "ACreatureGrowthHandler.hpp"
ACreatureGrowUpHandler* ACreatureGrowUpHandler::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CreatureGrowUpHandler");
    return (ACreatureGrowUpHandler*)res;
}
