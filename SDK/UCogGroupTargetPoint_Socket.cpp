#include "UCogGroupTargetPoint.hpp"
#include "UCogGroupTargetPoint_Socket.hpp"
UCogGroupTargetPoint_Socket* UCogGroupTargetPoint_Socket::StaticClass() {
    static auto res = find_uobject("Class /Script/Cognition.CogGroupTargetPoint_Socket");
    return (UCogGroupTargetPoint_Socket*)res;
}
