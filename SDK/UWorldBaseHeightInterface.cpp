#include "UInterface.hpp"
#include "UWorldBaseHeightInterface.hpp"
UWorldBaseHeightInterface* UWorldBaseHeightInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.WorldBaseHeightInterface");
    return (UWorldBaseHeightInterface*)res;
}
