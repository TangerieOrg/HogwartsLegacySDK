#include "AInfo.hpp"
#include "AServerStatReplicator.hpp"
AServerStatReplicator* AServerStatReplicator::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ServerStatReplicator");
    return (AServerStatReplicator*)res;
}
