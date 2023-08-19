#include "UChannel.hpp"
#include "UControlChannel.hpp"
UControlChannel* UControlChannel::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ControlChannel");
    return (UControlChannel*)res;
}
