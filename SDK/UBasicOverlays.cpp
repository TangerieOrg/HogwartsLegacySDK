#include "FOverlayItem.hpp"
#include "UBasicOverlays.hpp"
#include "UOverlays.hpp"
UBasicOverlays* UBasicOverlays::StaticClass() {
    static auto res = find_uobject("Class /Script/Overlay.BasicOverlays");
    return (UBasicOverlays*)res;
}
