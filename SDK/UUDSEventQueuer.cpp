#include "UObject.hpp"
#include "UUDSEventQueuer.hpp"
UUDSEventQueuer* UUDSEventQueuer::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.UDSEventQueuer");
    return (UUDSEventQueuer*)res;
}
