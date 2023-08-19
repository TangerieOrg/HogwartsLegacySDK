#include "UCogGroupTargetPoint.hpp"
#include "UCogGroupTargetPoint_CalloutAttach.hpp"
UCogGroupTargetPoint_CalloutAttach* UCogGroupTargetPoint_CalloutAttach::StaticClass() {
    static auto res = find_uobject("Class /Script/Cognition.CogGroupTargetPoint_CalloutAttach");
    return (UCogGroupTargetPoint_CalloutAttach*)res;
}
