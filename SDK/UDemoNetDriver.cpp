#include "APlayerController.hpp"
#include "FMulticastRecordOptions.hpp"
#include "UDemoNetDriver.hpp"
#include "UNetDriver.hpp"
UDemoNetDriver* UDemoNetDriver::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.DemoNetDriver");
    return (UDemoNetDriver*)res;
}
