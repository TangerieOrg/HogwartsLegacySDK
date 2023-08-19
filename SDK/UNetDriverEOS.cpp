#include "UIpNetDriver.hpp"
#include "UNetDriverEOS.hpp"
UNetDriverEOS* UNetDriverEOS::StaticClass() {
    static auto res = find_uobject("Class /Script/OnlineSubsystemEOS.NetDriverEOS");
    return (UNetDriverEOS*)res;
}
