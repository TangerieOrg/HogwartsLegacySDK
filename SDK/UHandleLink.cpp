#include "UHandleLink.hpp"
#include "UObject.hpp"
UHandleLink* UHandleLink::StaticClass() {
    static auto res = find_uobject("Class /Script/UtilitiesRuntime.HandleLink");
    return (UHandleLink*)res;
}
