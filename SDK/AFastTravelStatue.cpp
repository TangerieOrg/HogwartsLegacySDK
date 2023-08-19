#include "AFastTravelPort.hpp"
#include "AFastTravelStatue.hpp"
AFastTravelStatue* AFastTravelStatue::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FastTravelStatue");
    return (AFastTravelStatue*)res;
}
