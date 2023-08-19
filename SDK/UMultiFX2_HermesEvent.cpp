#include "UMultiFX2_Filtered.hpp"
#include "UMultiFX2_HermesEvent.hpp"
UMultiFX2_HermesEvent* UMultiFX2_HermesEvent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MultiFX2_HermesEvent");
    return (UMultiFX2_HermesEvent*)res;
}
