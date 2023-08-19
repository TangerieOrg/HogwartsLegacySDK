#include "UBoneMaskBase.hpp"
#include "UBoneMask_FilterStaticTracks.hpp"
UBoneMask_FilterStaticTracks* UBoneMask_FilterStaticTracks::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.BoneMask_FilterStaticTracks");
    return (UBoneMask_FilterStaticTracks*)res;
}
