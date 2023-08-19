#include "FVector.hpp"
#include "UObject.hpp"
#include "UOdcNavmeshFootprint.hpp"
UOdcNavmeshFootprint* UOdcNavmeshFootprint::StaticClass() {
    static auto res = find_uobject("Class /Script/OdysseyRuntime.OdcNavmeshFootprint");
    return (UOdcNavmeshFootprint*)res;
}
