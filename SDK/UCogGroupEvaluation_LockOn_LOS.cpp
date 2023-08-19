#include "UCogGroupEvaluation.hpp"
#include "UCogGroupEvaluation_LockOn_LOS.hpp"
UCogGroupEvaluation_LockOn_LOS* UCogGroupEvaluation_LockOn_LOS::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CogGroupEvaluation_LockOn_LOS");
    return (UCogGroupEvaluation_LockOn_LOS*)res;
}
