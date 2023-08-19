#include "UAnimNotify.hpp"
#include "UAnimNotify_AbilityBranch.hpp"
UAnimNotify_AbilityBranch* UAnimNotify_AbilityBranch::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AnimNotify_AbilityBranch");
    return (UAnimNotify_AbilityBranch*)res;
}
