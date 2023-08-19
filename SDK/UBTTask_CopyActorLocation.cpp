#include "FBlackboardKeySelector.hpp"
#include "UBTTaskNode.hpp"
#include "UBTTask_CopyActorLocation.hpp"
UBTTask_CopyActorLocation* UBTTask_CopyActorLocation::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BTTask_CopyActorLocation");
    return (UBTTask_CopyActorLocation*)res;
}
