#include "UAnimTag_StationSocket.hpp"
#include "UAnimationArchitectTagProvider.hpp"
UAnimTag_StationSocket* UAnimTag_StationSocket::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AnimTag_StationSocket");
    return (UAnimTag_StationSocket*)res;
}
