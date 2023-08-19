#include "UBasicOverlays.hpp"
#include "ULocalizedOverlays.hpp"
#include "UOverlays.hpp"
ULocalizedOverlays* ULocalizedOverlays::StaticClass() {
    static auto res = find_uobject("Class /Script/Overlay.LocalizedOverlays");
    return (ULocalizedOverlays*)res;
}
