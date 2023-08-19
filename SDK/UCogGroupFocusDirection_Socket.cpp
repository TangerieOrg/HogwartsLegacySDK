#include "UCogGroupFocusDirection.hpp"
#include "UCogGroupFocusDirection_Socket.hpp"
UCogGroupFocusDirection_Socket* UCogGroupFocusDirection_Socket::StaticClass() {
    static auto res = find_uobject("Class /Script/Cognition.CogGroupFocusDirection_Socket");
    return (UCogGroupFocusDirection_Socket*)res;
}
