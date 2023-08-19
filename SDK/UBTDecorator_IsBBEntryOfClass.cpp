#include "UBTDecorator_BlackboardBase.hpp"
#include "UBTDecorator_IsBBEntryOfClass.hpp"
#include "UClass.hpp"
UBTDecorator_IsBBEntryOfClass* UBTDecorator_IsBBEntryOfClass::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.BTDecorator_IsBBEntryOfClass");
    return (UBTDecorator_IsBBEntryOfClass*)res;
}
