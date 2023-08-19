#include "EHorizontalAlignment.hpp"
#include "EVerticalAlignment.hpp"
#include "FMargin.hpp"
#include "UPanelSlot.hpp"
#include "USafeZoneSlot.hpp"
USafeZoneSlot* USafeZoneSlot::StaticClass() {
    static auto res = find_uobject("Class /Script/UMG.SafeZoneSlot");
    return (USafeZoneSlot*)res;
}
