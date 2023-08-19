#include "FAIDataProviderFloatValue.hpp"
#include "UEnvQueryTest_Pathfinding.hpp"
#include "UEnvQueryTest_PathfindingBatch.hpp"
UEnvQueryTest_PathfindingBatch* UEnvQueryTest_PathfindingBatch::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.EnvQueryTest_PathfindingBatch");
    return (UEnvQueryTest_PathfindingBatch*)res;
}
