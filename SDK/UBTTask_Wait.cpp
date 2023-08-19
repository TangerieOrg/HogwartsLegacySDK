#include "UBTTaskNode.hpp"
#include "UBTTask_Wait.hpp"
UBTTask_Wait* UBTTask_Wait::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.BTTask_Wait");
    return (UBTTask_Wait*)res;
}
