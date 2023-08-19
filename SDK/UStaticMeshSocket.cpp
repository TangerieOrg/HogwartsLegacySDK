#include "FRotator.hpp"
#include "FVector.hpp"
#include "UObject.hpp"
#include "UStaticMeshSocket.hpp"
UStaticMeshSocket* UStaticMeshSocket::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.StaticMeshSocket");
    return (UStaticMeshSocket*)res;
}
