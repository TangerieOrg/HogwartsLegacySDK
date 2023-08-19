#include "UContentWidget.hpp"
#include "UNamedSlot.hpp"
UNamedSlot* UNamedSlot::StaticClass() {
    static auto res = find_uobject("Class /Script/UMG.NamedSlot");
    return (UNamedSlot*)res;
}
