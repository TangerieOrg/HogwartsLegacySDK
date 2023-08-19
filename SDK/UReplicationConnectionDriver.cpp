#include "UObject.hpp"
#include "UReplicationConnectionDriver.hpp"
UReplicationConnectionDriver* UReplicationConnectionDriver::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ReplicationConnectionDriver");
    return (UReplicationConnectionDriver*)res;
}
