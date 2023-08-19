#include "UCogGroupLookAtPoint.hpp"
#include "UCogGroupLookAtPoint_Socket.hpp"
UCogGroupLookAtPoint_Socket* UCogGroupLookAtPoint_Socket::StaticClass() {
    static auto res = find_uobject("Class /Script/Cognition.CogGroupLookAtPoint_Socket");
    return (UCogGroupLookAtPoint_Socket*)res;
}
