#include "UChannel.hpp"
#include "UNetConnection.hpp"
#include "UObject.hpp"
UChannel* UChannel::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.Channel");
    return (UChannel*)res;
}
