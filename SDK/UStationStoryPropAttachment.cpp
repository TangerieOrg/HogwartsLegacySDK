#include "UObject.hpp"
#include "UStationStoryPropAttachment.hpp"
UStationStoryPropAttachment* UStationStoryPropAttachment::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.StationStoryPropAttachment");
    return (UStationStoryPropAttachment*)res;
}
