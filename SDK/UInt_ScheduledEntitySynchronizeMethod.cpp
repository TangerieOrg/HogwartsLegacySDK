#include "ESynchronizeMethod.hpp"
#include "UIntProvider.hpp"
#include "UInt_ScheduledEntitySynchronizeMethod.hpp"
UInt_ScheduledEntitySynchronizeMethod* UInt_ScheduledEntitySynchronizeMethod::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Int_ScheduledEntitySynchronizeMethod");
    return (UInt_ScheduledEntitySynchronizeMethod*)res;
}
