#include "EFlyingBroomHitObjectType.hpp"
#include "UAblBranchCondition.hpp"
#include "UablBranchCondition_BroomCollide.hpp"
UablBranchCondition_BroomCollide* UablBranchCondition_BroomCollide::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ablBranchCondition_BroomCollide");
    return (UablBranchCondition_BroomCollide*)res;
}
