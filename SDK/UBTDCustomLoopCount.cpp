#include "UBTDCustomLoopCount.hpp"
#include "UObject.hpp"
UBTDCustomLoopCount* UBTDCustomLoopCount::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BTDCustomLoopCount");
    return (UBTDCustomLoopCount*)res;
}
