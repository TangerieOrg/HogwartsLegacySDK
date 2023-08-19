#include "UAblBranchCondition.hpp"
#include "UablBranchCondition_CautionMode.hpp"
UablBranchCondition_CautionMode* UablBranchCondition_CautionMode::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ablBranchCondition_CautionMode");
    return (UablBranchCondition_CautionMode*)res;
}
