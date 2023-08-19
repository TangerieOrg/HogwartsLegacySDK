#include "ABP_VendorCamera_C.hpp"
#include "ACameraStackActor.hpp"
ABP_VendorCamera_C* ABP_VendorCamera_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/Camera/BP_VendorCamera.BP_VendorCamera_C");
    return (ABP_VendorCamera_C*)res;
}
