#include "ANamedPoint.hpp"
#include "ATargetPoint.hpp"
#include "EVolumeType.hpp"
#include "UPrimitiveComponent.hpp"
ANamedPoint* ANamedPoint::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.NamedPoint");
    return (ANamedPoint*)res;
}
