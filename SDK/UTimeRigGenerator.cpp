#include "UInterface.hpp"
#include "UTimeRigGenerator.hpp"
UTimeRigGenerator* UTimeRigGenerator::StaticClass() {
    static auto res = find_uobject("Class /Script/TimeRig.TimeRigGenerator");
    return (UTimeRigGenerator*)res;
}
