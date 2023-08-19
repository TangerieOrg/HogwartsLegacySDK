#include "UInterface.hpp"
#include "UNamedSlotInterface.hpp"
UNamedSlotInterface* UNamedSlotInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/UMG.NamedSlotInterface");
    return (UNamedSlotInterface*)res;
}
