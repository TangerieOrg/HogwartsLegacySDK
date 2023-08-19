#include "AActor.hpp"
#include "AFastTravelPort.hpp"
AFastTravelPort* AFastTravelPort::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FastTravelPort");
    return (AFastTravelPort*)res;
}
