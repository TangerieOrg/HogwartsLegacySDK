#include "UObject.hpp"
#include "UOverlays.hpp"
UOverlays* UOverlays::StaticClass() {
    static auto res = find_uobject("Class /Script/Overlay.Overlays");
    return (UOverlays*)res;
}
