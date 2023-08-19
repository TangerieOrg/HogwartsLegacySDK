#include "UBTTask_BlackboardBase.hpp"
#include "UBTTask_MoveTo.hpp"
#include "UClass.hpp"
UBTTask_MoveTo* UBTTask_MoveTo::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.BTTask_MoveTo");
    return (UBTTask_MoveTo*)res;
}
