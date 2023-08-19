#include "UAblBranchConditionAnimNotify.hpp"
#include "UablBranchConditionMountAnimNotify.hpp"
UablBranchConditionMountAnimNotify* UablBranchConditionMountAnimNotify::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ablBranchConditionMountAnimNotify");
    return (UablBranchConditionMountAnimNotify*)res;
}
