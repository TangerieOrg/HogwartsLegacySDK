#include "UInterface.hpp"
#include "UWindVolumeInterface.hpp"
UWindVolumeInterface* UWindVolumeInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.WindVolumeInterface");
    return (UWindVolumeInterface*)res;
}
