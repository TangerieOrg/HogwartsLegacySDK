#include "EFacialAnimType.hpp"
#include "UAnimationSharingSetup.hpp"
#include "UPhxAnimationSharingSetup.hpp"
UPhxAnimationSharingSetup* UPhxAnimationSharingSetup::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PhxAnimationSharingSetup");
    return (UPhxAnimationSharingSetup*)res;
}
