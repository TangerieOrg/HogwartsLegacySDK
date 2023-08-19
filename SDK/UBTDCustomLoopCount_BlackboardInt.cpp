#include "FBlackboardKeySelector.hpp"
#include "UBTDCustomLoopCount.hpp"
#include "UBTDCustomLoopCount_BlackboardInt.hpp"
UBTDCustomLoopCount_BlackboardInt* UBTDCustomLoopCount_BlackboardInt::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BTDCustomLoopCount_BlackboardInt");
    return (UBTDCustomLoopCount_BlackboardInt*)res;
}
