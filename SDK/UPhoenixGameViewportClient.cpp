#include "UGameViewportClient.hpp"
#include "UPhoenixGameViewportClient.hpp"
UPhoenixGameViewportClient* UPhoenixGameViewportClient::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PhoenixGameViewportClient");
    return (UPhoenixGameViewportClient*)res;
}
