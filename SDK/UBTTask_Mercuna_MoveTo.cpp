#include "UBTTask_BlackboardBase.hpp"
#include "UBTTask_Mercuna_MoveTo.hpp"
UBTTask_Mercuna_MoveTo* UBTTask_Mercuna_MoveTo::StaticClass() {
    static auto res = find_uobject("Class /Script/Mercuna.BTTask_Mercuna_MoveTo");
    return (UBTTask_Mercuna_MoveTo*)res;
}
