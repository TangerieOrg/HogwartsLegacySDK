#include "FBlackboardEntry.hpp"
#include "UBlackboardData.hpp"
#include "UDataAsset.hpp"
UBlackboardData* UBlackboardData::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.BlackboardData");
    return (UBlackboardData*)res;
}
