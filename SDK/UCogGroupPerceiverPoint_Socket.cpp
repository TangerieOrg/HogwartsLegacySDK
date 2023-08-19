#include "UCogGroupPerceiverPoint.hpp"
#include "UCogGroupPerceiverPoint_Socket.hpp"
UCogGroupPerceiverPoint_Socket* UCogGroupPerceiverPoint_Socket::StaticClass() {
    static auto res = find_uobject("Class /Script/Cognition.CogGroupPerceiverPoint_Socket");
    return (UCogGroupPerceiverPoint_Socket*)res;
}
