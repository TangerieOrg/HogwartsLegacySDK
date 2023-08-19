#include "AActor.hpp"
#include "AFlyingKeyCabinet.hpp"
AFlyingKeyCabinet* AFlyingKeyCabinet::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FlyingKeyCabinet");
    return (AFlyingKeyCabinet*)res;
}
