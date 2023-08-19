#include "FBlendProfileBoneEntry.hpp"
#include "UBlendProfile.hpp"
#include "UObject.hpp"
#include "USkeleton.hpp"
UBlendProfile* UBlendProfile::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.BlendProfile");
    return (UBlendProfile*)res;
}
