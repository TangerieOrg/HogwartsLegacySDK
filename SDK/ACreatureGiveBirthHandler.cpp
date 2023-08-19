#include "ACreatureGiveBirthHandler.hpp"
#include "ACreatureGrowthHandler.hpp"
ACreatureGiveBirthHandler* ACreatureGiveBirthHandler::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CreatureGiveBirthHandler");
    return (ACreatureGiveBirthHandler*)res;
}
