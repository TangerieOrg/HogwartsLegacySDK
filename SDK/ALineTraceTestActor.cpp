#include "AActor.hpp"
#include "ALineTraceTestActor.hpp"
#include "ELineTraceTestActorCollisionChannel.hpp"
#include "ELineTraceTestActorObjectTypeQuery.hpp"
#include "ELineTraceTestActorQueryMobilityType.hpp"
#include "ELineTraceTestActorTraceType.hpp"
ALineTraceTestActor* ALineTraceTestActor::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.LineTraceTestActor");
    return (ALineTraceTestActor*)res;
}
