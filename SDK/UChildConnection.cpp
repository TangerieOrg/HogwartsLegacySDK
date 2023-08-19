#include "UChildConnection.hpp"
#include "UNetConnection.hpp"
UChildConnection* UChildConnection::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ChildConnection");
    return (UChildConnection*)res;
}
