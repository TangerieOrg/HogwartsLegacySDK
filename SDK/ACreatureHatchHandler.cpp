#include "ACreatureGrowthHandler.hpp"
#include "ACreatureHatchHandler.hpp"
ACreatureHatchHandler* ACreatureHatchHandler::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CreatureHatchHandler");
    return (ACreatureHatchHandler*)res;
}
