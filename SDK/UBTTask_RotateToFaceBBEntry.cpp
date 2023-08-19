#include "UBTTask_BlackboardBase.hpp"
#include "UBTTask_RotateToFaceBBEntry.hpp"
UBTTask_RotateToFaceBBEntry* UBTTask_RotateToFaceBBEntry::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.BTTask_RotateToFaceBBEntry");
    return (UBTTask_RotateToFaceBBEntry*)res;
}
