#include "AActor.hpp"
#include "AInfo.hpp"
AInfo* AInfo::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.Info");
    return (AInfo*)res;
}
