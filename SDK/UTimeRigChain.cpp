#include "FLinearColor.hpp"
#include "UTimeRigChain.hpp"
#include "UTimeRigElement.hpp"
#include "UTimeRigInterval.hpp"
UTimeRigChain* UTimeRigChain::StaticClass() {
    static auto res = find_uobject("Class /Script/TimeRig.TimeRigChain");
    return (UTimeRigChain*)res;
}
