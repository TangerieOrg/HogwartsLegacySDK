#include "AActor.hpp"
#include "UObject.hpp"
#include "UPrimitiveComponent.hpp"
#include "URadialForceData.hpp"
URadialForceData* URadialForceData::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RadialForceData");
    return (URadialForceData*)res;
}
