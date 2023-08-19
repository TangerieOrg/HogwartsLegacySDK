#include "UCogGroupUpDirection.hpp"
#include "UCogGroupUpDirection_Socket.hpp"
UCogGroupUpDirection_Socket* UCogGroupUpDirection_Socket::StaticClass() {
    static auto res = find_uobject("Class /Script/Cognition.CogGroupUpDirection_Socket");
    return (UCogGroupUpDirection_Socket*)res;
}
