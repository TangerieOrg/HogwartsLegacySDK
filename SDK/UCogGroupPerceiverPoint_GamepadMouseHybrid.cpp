#include "UCogGroupPerceiverPoint.hpp"
#include "UCogGroupPerceiverPoint_GamepadMouseHybrid.hpp"
UCogGroupPerceiverPoint_GamepadMouseHybrid* UCogGroupPerceiverPoint_GamepadMouseHybrid::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CogGroupPerceiverPoint_GamepadMouseHybrid");
    return (UCogGroupPerceiverPoint_GamepadMouseHybrid*)res;
}
