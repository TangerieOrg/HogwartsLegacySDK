#include "EFlyingBroomState\Type.hpp"
#include "UAblBranchCondition.hpp"
#include "UablBranchCondition_Broom.hpp"
UablBranchCondition_Broom* UablBranchCondition_Broom::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ablBranchCondition_Broom");
    return (UablBranchCondition_Broom*)res;
}
