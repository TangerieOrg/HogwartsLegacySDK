#include "UBreakpoint.hpp"
#include "UEdGraphNode.hpp"
#include "UObject.hpp"
UBreakpoint* UBreakpoint::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.Breakpoint");
    return (UBreakpoint*)res;
}
