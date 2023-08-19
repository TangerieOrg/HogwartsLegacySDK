#include "AActor.hpp"
#include "ATargetPoint.hpp"
ATargetPoint* ATargetPoint::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.TargetPoint");
    return (ATargetPoint*)res;
}
