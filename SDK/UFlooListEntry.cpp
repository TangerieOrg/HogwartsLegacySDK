#include "EInteractiveState.hpp"
#include "FVector.hpp"
#include "UFlooListEntry.hpp"
#include "UObject.hpp"
UFlooListEntry* UFlooListEntry::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FlooListEntry");
    return (UFlooListEntry*)res;
}
