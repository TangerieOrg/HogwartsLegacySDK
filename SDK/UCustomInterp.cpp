#include "UCustomInterp.hpp"
#include "UObject.hpp"
UCustomInterp* UCustomInterp::StaticClass() {
    static auto res = find_uobject("Class /Script/UtilitiesRuntime.CustomInterp");
    return (UCustomInterp*)res;
}
