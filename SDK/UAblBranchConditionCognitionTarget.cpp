#include "UAblBranchCondition.hpp"
#include "UAblBranchConditionCognitionTarget.hpp"
#include "UClass.hpp"
UAblBranchConditionCognitionTarget* UAblBranchConditionCognitionTarget::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBranchConditionCognitionTarget");
    return (UAblBranchConditionCognitionTarget*)res;
}
