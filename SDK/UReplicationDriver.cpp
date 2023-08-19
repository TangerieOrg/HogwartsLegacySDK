#include "UObject.hpp"
#include "UReplicationDriver.hpp"
UReplicationDriver* UReplicationDriver::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ReplicationDriver");
    return (UReplicationDriver*)res;
}
