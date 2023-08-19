#include "UStationStoryPropAttachment.hpp"
#include "UStationStoryProp_AttachToStation.hpp"
UStationStoryProp_AttachToStation* UStationStoryProp_AttachToStation::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.StationStoryProp_AttachToStation");
    return (UStationStoryProp_AttachToStation*)res;
}
