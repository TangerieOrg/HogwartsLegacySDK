#include "FFlyingBroomBoostStat.hpp"
#include "UDataAsset.hpp"
#include "UFlyingBroomStats.hpp"
UFlyingBroomStats* UFlyingBroomStats::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FlyingBroomStats");
    return (UFlyingBroomStats*)res;
}
