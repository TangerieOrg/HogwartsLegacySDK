#include "FBoneReferenceEx.hpp"
#include "UIKDriver.hpp"
#include "UIKDriver_GhostHips.hpp"
UIKDriver_GhostHips* UIKDriver_GhostHips::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.IKDriver_GhostHips");
    return (UIKDriver_GhostHips*)res;
}
